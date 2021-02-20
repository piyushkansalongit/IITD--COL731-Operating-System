#pragma once

#include "util/config.h"


//
// preempt_t
//
//
//

#define _ring3_preempt(_name, _f) \
         __asm(                                   \
         "  .text                                                                      \n\t"\
         " " STR(_name) ":                                                             \n\t"\
         "  pushl %edx                                                                 \n\t"\
         "  pushl %ecx                                                                 \n\t"\
         "  pushl %eax                                                                 \n\t"\
         "  call " STR(_f) "                                                           \n\t"\
         "  popl  %eax                                                                 \n\t"\
         "  popl  %ecx                                                                 \n\t"\
         "  popl  %edx                                                                 \n\t"\
         "                                                                             \n\t"\
         "                                                                             \n\t"\
         "                                                                             \n\t"\
         "                                                                             \n\t"\
         "                                                                             \n\t"\
         "  # insert your code here                                                    \n\t"\
         "  movl %edi, %gs:" STR(process_offset_edi+0x10000) "                         \n\t"\
         "  movl %esi, %gs:" STR(process_offset_esi+0x10000) "                         \n\t"\
         "  movl %ebp, %gs:" STR(process_offset_ebp+0x10000) "                         \n\t"\
         "  movl %ebx, %gs:" STR(process_offset_ebx+0x10000) "                         \n\t"\
         "  movl %edx, %gs:" STR(process_offset_edx+0x10000) "                         \n\t"\
         "  movl %ecx, %gs:" STR(process_offset_ecx+0x10000) "                         \n\t"\
         "  movl %eax, %gs:" STR(process_offset_eax+0x10000) "                         \n\t"\
         "  fxsave %gs:" STR(process_offset_fpu_simd+0x10000) "                        \n\t"\
         "  pushl %ebp                                                                 \n\t"\
         "  addl $12, %esp                                                             \n\t"\
         "  movl (%esp), %ebp                                                          \n\t"\
         "  movl %ebp, %gs:" STR(process_offset_eip+0x10000) "                         \n\t"\
         "  addl $8, %esp                                                              \n\t"\
         "  movl (%esp), %ebp                                                          \n\t"\
         "  movl %ebp, %gs:" STR(process_offset_eflags+0x10000) "                      \n\t"\
         "  addl $4, %esp                                                              \n\t"\
         "  movl (%esp), %ebp                                                          \n\t"\
         "  movl %ebp, %gs:" STR(process_offset_esp+0x10000) "                         \n\t"\
         "  subl $24, %esp                                                             \n\t"\
         "  popl %ebp                                                                  \n\t"\
         "                                                                             \n\t"\
         "  movl $0, %ebp                                                              \n\t"\
         "  pushl %gs:0                                                                \n\t"\
         "  pushl %gs:4                                                                \n\t"\
         "  call core_loop                                                             \n\t"\
         "                                                                             \n\t"\
         )                                                                                  \



