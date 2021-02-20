#pragma once

#include "util/elf.h"
#include "util/ring3.h"
#include "util/bitpool.h"
#include "devices/mmu32.h"
#include "devices/gdt32.h"
#include <stddef.h>
#include <algorithm>
#include "util/config.h"
#include "util/io.h"

static inline void elf_load(addr_t from, size_t fromsize, process_t& proc, bitpool_t& pool4M){
  enum {PAGE_SIZE=4<<20};

  hoh_assert(elf_canread_prog_header(from,fromsize), "XXX");
  const Elf32_Ehdr& header      = *(Elf32_Ehdr*)(from);
  uint32_t prog_offset          = header.e_phoff;
  const Elf32_Phdr* prog_header = (Elf32_Phdr*)(from+prog_offset);
  uint32_t    prog_num          = header.e_phnum;

  // elf_dump(from, fromsize);

  size_t numpages = elf_numpages(prog_header,prog_num);
  hoh_assert(numpages == 1, "XXX");

  addr_t to = alloc(pool4M); 



  // 
  // insert your code here
  //

  // Creating the program memory image.
  for(int i=0; i<prog_num; i++)
  {
    if(prog_header[i].p_type==PT_LOAD)
    {
      uint32_t segment_address = prog_header[i].p_paddr;
      // hoh_debug(segment_address << " " << prog_header[i].p_filesz);
      // for(int i=0; i<prog_header[i].p_filesz; i++)
      // {
      //   uint8_t value = mmio::read8((addr_t)segment_address, i);
      //   mmio::write8(to+segment_address, i, value);
      // }
      memcpy(to+segment_address, from+segment_address, prog_header[i].p_memsz);
    }
  }

  // Setting up all the integer registers to zero
  proc.edi = 0;
  proc.esi = 0;
  proc.ebp = 0;
  proc.ebx = 0;
  proc.edx = 0;
  proc.ecx = 0;
  proc.eax = 0;

  // Setting up all the FPU/SIMD register values to zero
  memset(&proc.fpu_simd[0],0,sizeof(proc.fpu_simd));

  // Startip and eip
  proc.startip = header.e_entry+to;
  proc.eip = (uint32_t)(header.e_entry + to);

  // Setting up necessary flags
  proc.iopl = 3;
  proc.eflags = 0x200 | 0x3000;

  // Allocate a large page for process and kernel-process communication
  addr_t stackend = alloc(pool4M);
  proc.stackend = stackend;

  // Setting up esp at the top of user area in the stack
  proc.esp = (uint32_t)(proc.stackend) + 4<<20 - 4<<10;

  // Setting up the page table
  proc.mmu.map_identity();
  uint16_t ro_flag = 0x85;
  proc.mmu.map(to, to, ro_flag);

  uint16_t rw_flag = 0x87;
  proc.mmu.map(stackend, stackend, rw_flag);

  // Set up the emergency stack
  proc.masterrw = 0;
  proc.rank = 0;
  proc.masterro = 0;
  proc.sharedrw = 0;
  // asm volatile(
  //   "pushl %ebp                                                  \n\t"
  //   "pushl %eax                                                  \n\t"
  //   "movl %gs:" STR(process_offset_esp+0x10000) "  , %ebp        \n\t"
  //   "movl %gs:" STR(process_offset_rank+0x10000) " , %eax        \n\t"
  //   "movl %eax, (%ebp)                                           \n\t"
  //   "movl %gs:" STR(process_offset_masterro+0x10000) ",%eax      \n\t"
  //   "movl %eax, 4(%ebp)                                          \n\t"
  //   "movl %gs:" STR(process_offset_masterrw+0x10000) ", %eax     \n\t"
  //   "movl %eax, 8(%ebp)                                          \n\t"
  //   "movl %gs:" STR(process_offset_sharedrw+0x10000) ", %eax     \n\t"
  //   "movl %eax, 12(%ebp)                                         \n\t"
  //   "popl %eax                                                   \n\t"
  //   "popl %ebp                                                   \n\t"     
  // );

  memset((void*)proc.esp, 0, 4);
  memset((void*)proc.esp+4, 0, 4);
  memset((void*)proc.esp+8, 0, 4);
  memset((void*)proc.esp+12, 0, 4);
}




static inline void ring3_step(preempt_t& preempt, process_t& proc, dev_lapic_t& lapic){

  //
  //insert your code here
  //
  // Switch the process table
  proc.mmu.reset();

  // Start the timer
  lapic.reset_timer_count(10000000);
  // hoh_debug(offsetof(apps_t, proc));

  // restore all the registers from cpu state and set up the trap frame on main stack
  asm volatile (                                                  
  "movl %gs:" STR(process_offset_edi+0x10000) ", %edi          \n\t"
  "movl %gs:" STR(process_offset_esi+0x10000) ", %esi          \n\t"
  "movl %gs:" STR(process_offset_ebp+0x10000) ", %ebp          \n\t"
  "movl %gs:" STR(process_offset_ebx+0x10000) ", %ebx          \n\t"
  "movl %gs:" STR(process_offset_edx+0x10000) ", %edx          \n\t"
  "movl %gs:" STR(process_offset_ecx+0x10000) ", %ecx          \n\t"
  "movl %gs:" STR(process_offset_eax+0x10000) ", %eax          \n\t"
  "fxrstor %gs:" STR(process_offset_fpu_simd+0x10000) "        \n\t"
  "pushl $16                                                   \n\t"
  "pushl %gs:" STR(process_offset_esp+0x10000) "               \n\t"
  "pushl %gs:" STR(process_offset_eflags+0x10000) "            \n\t"
  "pushl $8                                                    \n\t"
  "pushl %gs:" STR(process_offset_eip+0x10000) "               \n\t"
  "iret                                                        \n\t"
  );
}

static inline void ring3_step_done(process_t& proc, dev_lapic_t& lapic){
  
  //
  //insert your code here
  //
  lapic.reset_timer_count(0);
}



