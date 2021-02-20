#include "util/util.h"
#include "x86/main.h"

#include "util/bitpool.h"

struct config_t{

};


void config_init(int rank, config_t& confg){

}




struct core_t{
public:
  uint32_t    syscallmmio[16];
  core_t*     self;
  int         rank;
  addr_t      main_stack;
  addr_t      main_stackbegin;
  size_t      main_stacksize;
  addr_t      main_stackend_cached;

  size_t      magic;  //=0xface600d;
  bitpool_t   pool4K;
  apps_t      apps;
  config_t    config;

public:
  core_t(int trank,const bitpool_t& tpooltmp, addr_t tstack, size_t tstacksize, const config_t& tconfig) : 
    self(this),
    rank(trank),
    main_stackbegin(tstack), // XXX: reset the pool too
    main_stacksize(tstacksize),
    main_stackend_cached(tstack+tstacksize),
    pool4K(tpooltmp),
    config(tconfig),
    apps()
  {
    main_stack = addr_t(0xfacebaad); //to tell you that their value is random
    magic=0xface600d;

    hoh_debug("Ring3 core: "<<rank<<" "<<uintptr_t(self));
  }
};



extern "C" void core_mem_init(int rank, addr_t masterro, addr_t masterrw, addr_t sharedrw, addr_t& ret_stack, addr_t& ret_core){
  hoh_debug("Shell core_mem_init");
  enum { PAGE_SIZE=4<<10 };
  bitpool_t pool_tmp(uint32_t(PAGE_SIZE),masterrw);

  //addr_t from = masterrw         + PAGE_SIZE*2;
  //addr_t to   = masterrw+(4<<20) - PAGE_SIZE;

  //for(addr_t p=from; p<to; p+=pool_tmp.datasize()){
  //  pool_tmp.add_mem(p,p+pool_tmp.datasize());
  //}
  //hoh_debug("Shell Pool Size: "<<pool_tmp.remaining()<<" Pool="<<uint32_t(&pool_tmp));
  //hoh_assert(pool_tmp.remaining() > 10, "Not enough memory");

  //stack
  //hoh_assert(canalloc(pool_tmp),"XXX");
  //auto stack = alloc(pool_tmp);
  //auto stacksize=pool_tmp.datasize();

  ////core
  //hoh_debug("size of core="<<sizeof(core_t));
  //hoh_assert(sizeof(core_t)<pool_tmp.datasize(),"XXX" << std::hex << ": "<<sizeof(core_t));
  //hoh_assert(canalloc(pool_tmp),"XXX");

  config_t config;
  config_init(rank, config);

#if 0
  core_t* pcore = allocT<core_t>(pool_tmp, rank, pool_tmp, stack, stacksize, config);

  ret_core   = addr_t(pcore);
  ret_stack  = pcore->main_stackbegin+pcore->main_stacksize-8;
#else

  core_t* core =  (core_t*)masterrw;
  addr_t  stack=  masterrw + PAGE_SIZE * 500;
  size_t stacksize=PAGE_SIZE;
  new ((void*)core) core_t(rank, pool_tmp, stack, stacksize, config);

  hoh_debug("Hello, from ring3 shell!");
  ret_stack  = core -> main_stackbegin + core-> main_stacksize - 16;
  ret_core   = addr_t(core);

  hoh_debug(" Core: "<<uintptr_t(ret_core));
#endif
}


extern "C" void core_reset(int rank, core_t& core){
  hoh_debug(rank<<": ring3 core_reset begin: "<< uintptr_t(&core));
  hoh_assert(rank == core.rank, "XXX:"<<rank<<","<<core.rank);
  apps_reset(core.rank, core.apps, core.pool4K);
}


extern "C" void core_loop(int rank, core_t* pcore){
  hoh_debug("lol");
  core_t& core=*pcore;
  hoh_assert(rank == core.rank, "XXX");
  hoh_debug(rank<<": core_loop begin");

  apps_loop(core.rank, &core.main_stack, &core.apps);
}


