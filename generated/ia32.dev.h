#pragma once
/*
 * Device Definition: ia32 / Intel64 core architecture
 * 
 * Automatically Generated from Spec.
 * Using a modified mackerel.
 * 
 * DO NOT EDIT!
 */
#include "util/debug.h"
#include "util/io.h"
#undef __DN
#define __DN(x) ia32 ## _ ## x
/*
 * Constants defn: ia32.exc_vec (Exception vectors)
 *  - width 8 bits
 */
HOH_STRONG_TYPEDEF( uint8_t , ia32_exc_vec_t);
#define ia32_vec_de ((ia32_exc_vec_t)0x0)
#define ia32_vec_db ((ia32_exc_vec_t)0x1)
#define ia32_vec_nmi ((ia32_exc_vec_t)0x2)
#define ia32_vec_bp ((ia32_exc_vec_t)0x3)
#define ia32_vec_of ((ia32_exc_vec_t)0x4)
#define ia32_vec_br ((ia32_exc_vec_t)0x5)
#define ia32_vec_ud ((ia32_exc_vec_t)0x6)
#define ia32_vec_nm ((ia32_exc_vec_t)0x7)
#define ia32_vec_df ((ia32_exc_vec_t)0x8)
#define ia32_vec_cso ((ia32_exc_vec_t)0x9)
#define ia32_vec_ts ((ia32_exc_vec_t)0xa)
#define ia32_vec_np ((ia32_exc_vec_t)0xb)
#define ia32_vec_ss ((ia32_exc_vec_t)0xc)
#define ia32_vec_gp ((ia32_exc_vec_t)0xd)
#define ia32_vec_pf ((ia32_exc_vec_t)0xe)
#define ia32_vec_mf ((ia32_exc_vec_t)0x10)
#define ia32_vec_ac ((ia32_exc_vec_t)0x11)
#define ia32_vec_mc ((ia32_exc_vec_t)0x12)
#define ia32_vec_xf ((ia32_exc_vec_t)0x13)

static inline const char* ia32_exc_vec_describe(ia32_exc_vec_t _e) __attribute__ ((always_inline));
static inline const char* ia32_exc_vec_describe(ia32_exc_vec_t _e)
{
    switch ((uint8_t )(_e)) {
    case (uint8_t )(0x0):
        return("vec_de: divide error");
    case (uint8_t )(0x1):
        return("vec_db: debug exception");
    case (uint8_t )(0x2):
        return("vec_nmi: non-maskable interrupt");
    case (uint8_t )(0x3):
        return("vec_bp: breakpoint");
    case (uint8_t )(0x4):
        return("vec_of: overflow");
    case (uint8_t )(0x5):
        return("vec_br: BOUND range exceeded");
    case (uint8_t )(0x6):
        return("vec_ud: invalid opcode");
    case (uint8_t )(0x7):
        return("vec_nm: device not available");
    case (uint8_t )(0x8):
        return("vec_df: double fault");
    case (uint8_t )(0x9):
        return("vec_cso: coprocessor segment overrun");
    case (uint8_t )(0xa):
        return("vec_ts: invalid TSS");
    case (uint8_t )(0xb):
        return("vec_np: segment not present");
    case (uint8_t )(0xc):
        return("vec_ss: stack fault");
    case (uint8_t )(0xd):
        return("vec_gp: general protection fault");
    case (uint8_t )(0xe):
        return("vec_pf: page fault");
    case (uint8_t )(0x10):
        return("vec_mf: x87 FPU floating-point error");
    case (uint8_t )(0x11):
        return("vec_ac: alignment check");
    case (uint8_t )(0x12):
        return("vec_mc: machine check");
    case (uint8_t )(0x13):
        return("vec_xf: SIMD floating-point exception");
    default:
        return(NULL);
    }
}

static inline dout_t& operator<<(dout_t& _os, ia32_exc_vec_t _e) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_exc_vec_t _e)
{
    const char* d = ia32_exc_vec_describe(_e);
    if (d) {
        return(_os << d);
    } else {
        return((((_os << ("Unknown constant:")) << ("ia32_exc_vec_t")) << ("value:")) << ((uint64_t )(_e)));
    }
}

/*
 * Constants defn: ia32.mcg_ctl_val (Global MC control values)
 *  - width 64 bits
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mcg_ctl_val_t);
#define ia32_mc_enable ((ia32_mcg_ctl_val_t)(-1LL))
#define ia32_mc_disable ((ia32_mcg_ctl_val_t)0x0)

static inline const char* ia32_mcg_ctl_val_describe(ia32_mcg_ctl_val_t _e) __attribute__ ((always_inline));
static inline const char* ia32_mcg_ctl_val_describe(ia32_mcg_ctl_val_t _e)
{
    switch ((uint64_t )(_e)) {
    case (uint64_t )((-1LL)):
        return("mc_enable: mc_enable");
    case (uint64_t )(0x0):
        return("mc_disable: mc_disable");
    default:
        return(NULL);
    }
}

static inline dout_t& operator<<(dout_t& _os, ia32_mcg_ctl_val_t _e) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mcg_ctl_val_t _e)
{
    const char* d = ia32_mcg_ctl_val_describe(_e);
    if (d) {
        return(_os << d);
    } else {
        return((((_os << ("Unknown constant:")) << ("ia32_mcg_ctl_val_t")) << ("value:")) << ((uint64_t )(_e)));
    }
}

/*
 * Constants defn: ia32.tbtrk (Threshold-based error status)
 *  - no width specified
 */
HOH_STRONG_TYPEDEF( uint8_t , ia32_tbtrk_t);
#define ia32_notrack ((ia32_tbtrk_t)0x0)
#define ia32_green ((ia32_tbtrk_t)0x1)
#define ia32_yellow ((ia32_tbtrk_t)0x2)

static inline const char* ia32_tbtrk_describe(ia32_tbtrk_t _e) __attribute__ ((always_inline));
static inline const char* ia32_tbtrk_describe(ia32_tbtrk_t _e)
{
    switch ((uint8_t )(_e)) {
    case (uint8_t )(0x0):
        return("notrack: No hw status tracking");
    case (uint8_t )(0x1):
        return("green: current status green");
    case (uint8_t )(0x2):
        return("yellow: current status yellow");
    default:
        return(NULL);
    }
}

static inline dout_t& operator<<(dout_t& _os, ia32_tbtrk_t _e) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_tbtrk_t _e)
{
    const char* d = ia32_tbtrk_describe(_e);
    if (d) {
        return(_os << d);
    } else {
        return((((_os << ("Unknown constant:")) << ("ia32_tbtrk_t")) << ("value:")) << ((uint64_t )(_e)));
    }
}

/*
 * Constants defn: ia32.pat_val (Page attribute table values)
 *  - no width specified
 */
HOH_STRONG_TYPEDEF( uint8_t , ia32_pat_val_t);
#define ia32_uc ((ia32_pat_val_t)0x0)
#define ia32_wc ((ia32_pat_val_t)0x1)
#define ia32_wt ((ia32_pat_val_t)0x4)
#define ia32_wp ((ia32_pat_val_t)0x5)
#define ia32_wb ((ia32_pat_val_t)0x6)
#define ia32_ucd ((ia32_pat_val_t)0x7)

static inline const char* ia32_pat_val_describe(ia32_pat_val_t _e) __attribute__ ((always_inline));
static inline const char* ia32_pat_val_describe(ia32_pat_val_t _e)
{
    switch ((uint8_t )(_e)) {
    case (uint8_t )(0x0):
        return("uc: Uncacheable");
    case (uint8_t )(0x1):
        return("wc: Write combining");
    case (uint8_t )(0x4):
        return("wt: Write through");
    case (uint8_t )(0x5):
        return("wp: Write protected");
    case (uint8_t )(0x6):
        return("wb: Write back");
    case (uint8_t )(0x7):
        return("ucd: Uncached");
    default:
        return(NULL);
    }
}

static inline dout_t& operator<<(dout_t& _os, ia32_pat_val_t _e) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_pat_val_t _e)
{
    const char* d = ia32_pat_val_describe(_e);
    if (d) {
        return(_os << d);
    } else {
        return((((_os << ("Unknown constant:")) << ("ia32_pat_val_t")) << ("value:")) << ((uint64_t )(_e)));
    }
}

/*
 * Register type: ia32_platform_id_t
 * Description: Implicit type of Platform ID register
 * Fields:
 *   _anon0	(size 50, offset 0, init 0):	RSVD	_
 *   id	(size 3, offset 50, init 0):	RO	platform id
 *   _anon53	(size 11, offset 53, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_platform_id_t);
#define ia32_platform_id_default (ia32_platform_id_t )(0x0)
static inline uint8_t ia32_platform_id_id_extract(ia32_platform_id_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_platform_id_id_extract(ia32_platform_id_t _regval)
{
    return((uint8_t )((_regval & 0x1c000000000000) >> 50));
}

static inline ia32_platform_id_t ia32_platform_id_id_insert(ia32_platform_id_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_platform_id_t ia32_platform_id_id_insert(ia32_platform_id_t _regval, uint8_t _fieldval)
{
    return((ia32_platform_id_t )((_regval & 0xffe3ffffffffffff) | (0x1c000000000000 & (((ia32_platform_id_t )(_fieldval)) << 50))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_platform_id_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_platform_id_t _regval)
{
    ((_os << (" id =\t")) << ia32_platform_id_id_extract(_regval)) << ("\t(platform id)\n");
    return(_os);
}

/*
 * Register type: ia32_apic_base_t
 * Description: Implicit type of APIC base register
 * Fields:
 *   _anon0	(size 8, offset 0, init 0):	RSVD	_
 *   bsp	(size 1, offset 8, init 0):	RO	BSP flag
 *   _anon9	(size 2, offset 9, init 0):	RSVD	_
 *   global	(size 1, offset 11, init 0):	RW	APIC global enable
 *   base	(size 52, offset 12, init 0):	RW	APIC base
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_apic_base_t);
#define ia32_apic_base_default (ia32_apic_base_t )(0x0)
static inline uint8_t ia32_apic_base_bsp_extract(ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_apic_base_bsp_extract(ia32_apic_base_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_apic_base_t ia32_apic_base_bsp_insert(ia32_apic_base_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_apic_base_t ia32_apic_base_bsp_insert(ia32_apic_base_t _regval, uint8_t _fieldval)
{
    return((ia32_apic_base_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_apic_base_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_apic_base_global_extract(ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_apic_base_global_extract(ia32_apic_base_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_apic_base_t ia32_apic_base_global_insert(ia32_apic_base_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_apic_base_t ia32_apic_base_global_insert(ia32_apic_base_t _regval, uint8_t _fieldval)
{
    return((ia32_apic_base_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_apic_base_t )(_fieldval)) << 11))));
}

static inline uint64_t ia32_apic_base_base_extract(ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline uint64_t ia32_apic_base_base_extract(ia32_apic_base_t _regval)
{
    return((uint64_t )((_regval & 0xfffffffffffff000) >> 12));
}

static inline ia32_apic_base_t ia32_apic_base_base_insert(ia32_apic_base_t _regval, uint64_t _fieldval) __attribute__ ((always_inline));
static inline ia32_apic_base_t ia32_apic_base_base_insert(ia32_apic_base_t _regval, uint64_t _fieldval)
{
    return((ia32_apic_base_t )((_regval & 0xfff) | (0xfffffffffffff000 & (((ia32_apic_base_t )(_fieldval)) << 12))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_apic_base_t _regval)
{
    ((_os << (" bsp =\t")) << ia32_apic_base_bsp_extract(_regval)) << ("\t(BSP flag)\n");
    ((_os << (" global =\t")) << ia32_apic_base_global_extract(_regval)) << ("\t(APIC global enable)\n");
    ((_os << (" base =\t")) << ia32_apic_base_base_extract(_regval)) << ("\t(APIC base)\n");
    return(_os);
}

/*
 * Register type: ia32_feature_cntl_t
 * Description: Implicit type of Feature control register
 * Fields:
 *   lock	(size 1, offset 0, init 0):	RWO	lock
 *   vmxinsmx	(size 1, offset 1, init 0):	RWL	enable VMX inside SMX
 *   vmxoutsmx	(size 1, offset 2, init 0):	RWL	enable VMX outside SMX
 *   _anon3	(size 5, offset 3, init 0):	RSVD	_
 *   senter_loc	(size 7, offset 8, init 0):	RWL	SENTER local function
 *   senter_glob	(size 1, offset 15, init 0):	RWL	SENTER global enable
 *   _anon16	(size 48, offset 16, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_feature_cntl_t);
#define ia32_feature_cntl_default (ia32_feature_cntl_t )(0x0)
static inline uint8_t ia32_feature_cntl_lock_extract(ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_lock_extract(ia32_feature_cntl_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_lock_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_lock_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval)
{
    return((ia32_feature_cntl_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_feature_cntl_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_feature_cntl_vmxinsmx_extract(ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_vmxinsmx_extract(ia32_feature_cntl_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_vmxinsmx_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_vmxinsmx_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval)
{
    return((ia32_feature_cntl_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_feature_cntl_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_feature_cntl_vmxoutsmx_extract(ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_vmxoutsmx_extract(ia32_feature_cntl_t _regval)
{
    return((uint8_t )((_regval & 0x4) >> 2));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_vmxoutsmx_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_vmxoutsmx_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval)
{
    return((ia32_feature_cntl_t )((_regval & 0xfffffffffffffffb) | (0x4 & (((ia32_feature_cntl_t )(_fieldval)) << 2))));
}

static inline uint8_t ia32_feature_cntl_senter_loc_extract(ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_senter_loc_extract(ia32_feature_cntl_t _regval)
{
    return((uint8_t )((_regval & 0x7f00) >> 8));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_senter_loc_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_senter_loc_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval)
{
    return((ia32_feature_cntl_t )((_regval & 0xffffffffffff80ff) | (0x7f00 & (((ia32_feature_cntl_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_feature_cntl_senter_glob_extract(ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_senter_glob_extract(ia32_feature_cntl_t _regval)
{
    return((uint8_t )((_regval & 0x8000) >> 15));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_senter_glob_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_senter_glob_insert(ia32_feature_cntl_t _regval, uint8_t _fieldval)
{
    return((ia32_feature_cntl_t )((_regval & 0xffffffffffff7fff) | (0x8000 & (((ia32_feature_cntl_t )(_fieldval)) << 15))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_feature_cntl_t _regval)
{
    ((_os << (" lock =\t")) << ia32_feature_cntl_lock_extract(_regval)) << ("\t(lock)\n");
    ((_os << (" vmxinsmx =\t")) << ia32_feature_cntl_vmxinsmx_extract(_regval)) << ("\t(enable VMX inside SMX)\n");
    ((_os << (" vmxoutsmx =\t")) << ia32_feature_cntl_vmxoutsmx_extract(_regval)) << ("\t(enable VMX outside SMX)\n");
    ((_os << (" senter_loc =\t")) << ia32_feature_cntl_senter_loc_extract(_regval)) << ("\t(SENTER local function)\n");
    ((_os << (" senter_glob =\t")) << ia32_feature_cntl_senter_glob_extract(_regval)) << ("\t(SENTER global enable)\n");
    return(_os);
}

/*
 * Register type: ia32_misc_enable_t
 * Description: Implicit type of Enable misc. features register
 * Fields:
 *   fse	(size 1, offset 0, init 0):	RW	Fast-Strings enable
 *   _anon1	(size 2, offset 1, init 0):	RSVD	_
 *   atcce	(size 1, offset 3, init 0):	RW	Automatic thermal control circuit enable
 *   _anon4	(size 3, offset 4, init 0):	RSVD	_
 *   pma	(size 1, offset 7, init 0):	RO	Performance monitoring available
 *   _anon8	(size 1, offset 8, init 0):	RSVD	_
 *   hpd	(size 1, offset 9, init 0):	RW	Hardware prefetcher disable
 *   feme	(size 1, offset 10, init 0):	RW	FERR# multiplexing enable
 *   btsu	(size 1, offset 11, init 0):	RO	Branch trace storage unavailable
 *   pebsu	(size 1, offset 12, init 0):	RO	Precise event-based sampling unavailable
 *   tm2e	(size 1, offset 13, init 0):	RW	Thermal monitor 2 enable
 *   _anon14	(size 2, offset 14, init 0):	RSVD	_
 *   eiste	(size 1, offset 16, init 0):	RW	Enhanced Intel SpeedStep tech enable
 *   _anon17	(size 1, offset 17, init 0):	RSVD	_
 *   emfsm	(size 1, offset 18, init 0):	RW	Enable monitor FSM
 *   aclpd	(size 1, offset 19, init 0):	RW	Adjacent cache line prefetch disable
 *   eistsl	(size 1, offset 20, init 0):	RWO	Enhanced SpeedStep select lock
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   lcmax	(size 1, offset 22, init 0):	RW	Limit CPUID max val
 *   xmd	(size 1, offset 23, init 0):	RW	xTPR message disable
 *   _anon24	(size 10, offset 24, init 0):	RSVD	_
 *   xdbd	(size 1, offset 34, init 0):	RW	XD bit disable
 *   _anon35	(size 2, offset 35, init 0):	RSVD	_
 *   dcupd	(size 1, offset 37, init 0):	RW	DCU prefetcher disable
 *   idad	(size 1, offset 38, init 0):	RW	IDA disable
 *   ippd	(size 1, offset 39, init 0):	RW	IP prefetcher disable
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_misc_enable_t);
#define ia32_misc_enable_default (ia32_misc_enable_t )(0x0)
static inline uint8_t ia32_misc_enable_fse_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_fse_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_misc_enable_t ia32_misc_enable_fse_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_fse_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_misc_enable_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_misc_enable_atcce_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_atcce_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_misc_enable_t ia32_misc_enable_atcce_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_atcce_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_misc_enable_t )(_fieldval)) << 3))));
}

static inline uint8_t ia32_misc_enable_pma_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_pma_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x80) >> 7));
}

static inline ia32_misc_enable_t ia32_misc_enable_pma_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_pma_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffffffff7f) | (0x80 & (((ia32_misc_enable_t )(_fieldval)) << 7))));
}

static inline uint8_t ia32_misc_enable_hpd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_hpd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_misc_enable_t ia32_misc_enable_hpd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_hpd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffffdff) | (0x200 & (((ia32_misc_enable_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_misc_enable_feme_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_feme_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_misc_enable_t ia32_misc_enable_feme_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_feme_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffffbff) | (0x400 & (((ia32_misc_enable_t )(_fieldval)) << 10))));
}

static inline uint8_t ia32_misc_enable_btsu_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_btsu_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_misc_enable_t ia32_misc_enable_btsu_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_btsu_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_misc_enable_t )(_fieldval)) << 11))));
}

static inline uint8_t ia32_misc_enable_pebsu_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_pebsu_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x1000) >> 12));
}

static inline ia32_misc_enable_t ia32_misc_enable_pebsu_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_pebsu_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffffffefff) | (0x1000 & (((ia32_misc_enable_t )(_fieldval)) << 12))));
}

static inline uint8_t ia32_misc_enable_tm2e_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_tm2e_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x2000) >> 13));
}

static inline ia32_misc_enable_t ia32_misc_enable_tm2e_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_tm2e_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffffffdfff) | (0x2000 & (((ia32_misc_enable_t )(_fieldval)) << 13))));
}

static inline uint8_t ia32_misc_enable_eiste_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_eiste_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x10000) >> 16));
}

static inline ia32_misc_enable_t ia32_misc_enable_eiste_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_eiste_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffeffff) | (0x10000 & (((ia32_misc_enable_t )(_fieldval)) << 16))));
}

static inline uint8_t ia32_misc_enable_emfsm_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_emfsm_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x40000) >> 18));
}

static inline ia32_misc_enable_t ia32_misc_enable_emfsm_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_emfsm_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffffbffff) | (0x40000 & (((ia32_misc_enable_t )(_fieldval)) << 18))));
}

static inline uint8_t ia32_misc_enable_aclpd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_aclpd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x80000) >> 19));
}

static inline ia32_misc_enable_t ia32_misc_enable_aclpd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_aclpd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffffff7ffff) | (0x80000 & (((ia32_misc_enable_t )(_fieldval)) << 19))));
}

static inline uint8_t ia32_misc_enable_eistsl_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_eistsl_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x100000) >> 20));
}

static inline ia32_misc_enable_t ia32_misc_enable_eistsl_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_eistsl_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffffefffff) | (0x100000 & (((ia32_misc_enable_t )(_fieldval)) << 20))));
}

static inline uint8_t ia32_misc_enable_lcmax_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_lcmax_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x400000) >> 22));
}

static inline ia32_misc_enable_t ia32_misc_enable_lcmax_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_lcmax_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffffbfffff) | (0x400000 & (((ia32_misc_enable_t )(_fieldval)) << 22))));
}

static inline uint8_t ia32_misc_enable_xmd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_xmd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x800000) >> 23));
}

static inline ia32_misc_enable_t ia32_misc_enable_xmd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_xmd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffffff7fffff) | (0x800000 & (((ia32_misc_enable_t )(_fieldval)) << 23))));
}

static inline uint8_t ia32_misc_enable_xdbd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_xdbd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x400000000) >> 34));
}

static inline ia32_misc_enable_t ia32_misc_enable_xdbd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_xdbd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xfffffffbffffffff) | (0x400000000 & (((ia32_misc_enable_t )(_fieldval)) << 34))));
}

static inline uint8_t ia32_misc_enable_dcupd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_dcupd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x2000000000) >> 37));
}

static inline ia32_misc_enable_t ia32_misc_enable_dcupd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_dcupd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffdfffffffff) | (0x2000000000 & (((ia32_misc_enable_t )(_fieldval)) << 37))));
}

static inline uint8_t ia32_misc_enable_idad_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_idad_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x4000000000) >> 38));
}

static inline ia32_misc_enable_t ia32_misc_enable_idad_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_idad_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffffbfffffffff) | (0x4000000000 & (((ia32_misc_enable_t )(_fieldval)) << 38))));
}

static inline uint8_t ia32_misc_enable_ippd_extract(ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_ippd_extract(ia32_misc_enable_t _regval)
{
    return((uint8_t )((_regval & 0x8000000000) >> 39));
}

static inline ia32_misc_enable_t ia32_misc_enable_ippd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_ippd_insert(ia32_misc_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_misc_enable_t )((_regval & 0xffffff7fffffffff) | (0x8000000000 & (((ia32_misc_enable_t )(_fieldval)) << 39))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_misc_enable_t _regval)
{
    ((_os << (" fse =\t")) << ia32_misc_enable_fse_extract(_regval)) << ("\t(Fast-Strings enable)\n");
    ((_os << (" atcce =\t")) << ia32_misc_enable_atcce_extract(_regval)) << ("\t(Automatic thermal control circuit enable)\n");
    ((_os << (" pma =\t")) << ia32_misc_enable_pma_extract(_regval)) << ("\t(Performance monitoring available)\n");
    ((_os << (" hpd =\t")) << ia32_misc_enable_hpd_extract(_regval)) << ("\t(Hardware prefetcher disable)\n");
    ((_os << (" feme =\t")) << ia32_misc_enable_feme_extract(_regval)) << ("\t(FERR# multiplexing enable)\n");
    ((_os << (" btsu =\t")) << ia32_misc_enable_btsu_extract(_regval)) << ("\t(Branch trace storage unavailable)\n");
    ((_os << (" pebsu =\t")) << ia32_misc_enable_pebsu_extract(_regval)) << ("\t(Precise event-based sampling unavailable)\n");
    ((_os << (" tm2e =\t")) << ia32_misc_enable_tm2e_extract(_regval)) << ("\t(Thermal monitor 2 enable)\n");
    ((_os << (" eiste =\t")) << ia32_misc_enable_eiste_extract(_regval)) << ("\t(Enhanced Intel SpeedStep tech enable)\n");
    ((_os << (" emfsm =\t")) << ia32_misc_enable_emfsm_extract(_regval)) << ("\t(Enable monitor FSM)\n");
    ((_os << (" aclpd =\t")) << ia32_misc_enable_aclpd_extract(_regval)) << ("\t(Adjacent cache line prefetch disable)\n");
    ((_os << (" eistsl =\t")) << ia32_misc_enable_eistsl_extract(_regval)) << ("\t(Enhanced SpeedStep select lock)\n");
    ((_os << (" lcmax =\t")) << ia32_misc_enable_lcmax_extract(_regval)) << ("\t(Limit CPUID max val)\n");
    ((_os << (" xmd =\t")) << ia32_misc_enable_xmd_extract(_regval)) << ("\t(xTPR message disable)\n");
    ((_os << (" xdbd =\t")) << ia32_misc_enable_xdbd_extract(_regval)) << ("\t(XD bit disable)\n");
    ((_os << (" dcupd =\t")) << ia32_misc_enable_dcupd_extract(_regval)) << ("\t(DCU prefetcher disable)\n");
    ((_os << (" idad =\t")) << ia32_misc_enable_idad_extract(_regval)) << ("\t(IDA disable)\n");
    ((_os << (" ippd =\t")) << ia32_misc_enable_ippd_extract(_regval)) << ("\t(IP prefetcher disable)\n");
    return(_os);
}

/*
 * Register type: ia32_mcg_cap_t
 * Description: Implicit type of Global machine check capabilities register
 * Fields:
 *   count	(size 8, offset 0, init 0):	RO	Num. reporting banks available
 *   ctl_p	(size 1, offset 8, init 0):	RO	Implements MCG_CTL MSR
 *   exp_p	(size 1, offset 9, init 0):	RO	Implements extended MC regs
 *   _anon10	(size 1, offset 10, init 0):	RSVD	_
 *   tes_p	(size 1, offset 11, init 0):	RO	Threshold-based error status present
 *   _anon12	(size 4, offset 12, init 0):	RSVD	_
 *   ext_cnt	(size 8, offset 16, init 0):	RO	Num. extended MC regs present
 *   _anon24	(size 40, offset 24, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mcg_cap_t);
#define ia32_mcg_cap_default (ia32_mcg_cap_t )(0x0)
static inline uint8_t ia32_mcg_cap_count_extract(ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_count_extract(ia32_mcg_cap_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_count_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_count_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_cap_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_mcg_cap_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_mcg_cap_ctl_p_extract(ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_ctl_p_extract(ia32_mcg_cap_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_ctl_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_ctl_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_cap_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_mcg_cap_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_mcg_cap_exp_p_extract(ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_exp_p_extract(ia32_mcg_cap_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_exp_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_exp_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_cap_t )((_regval & 0xfffffffffffffdff) | (0x200 & (((ia32_mcg_cap_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_mcg_cap_tes_p_extract(ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_tes_p_extract(ia32_mcg_cap_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_tes_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_tes_p_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_cap_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_mcg_cap_t )(_fieldval)) << 11))));
}

static inline uint8_t ia32_mcg_cap_ext_cnt_extract(ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_ext_cnt_extract(ia32_mcg_cap_t _regval)
{
    return((uint8_t )((_regval & 0xff0000) >> 16));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_ext_cnt_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_ext_cnt_insert(ia32_mcg_cap_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_cap_t )((_regval & 0xffffffffff00ffff) | (0xff0000 & (((ia32_mcg_cap_t )(_fieldval)) << 16))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mcg_cap_t _regval)
{
    ((_os << (" count =\t")) << ia32_mcg_cap_count_extract(_regval)) << ("\t(Num. reporting banks available)\n");
    ((_os << (" ctl_p =\t")) << ia32_mcg_cap_ctl_p_extract(_regval)) << ("\t(Implements MCG_CTL MSR)\n");
    ((_os << (" exp_p =\t")) << ia32_mcg_cap_exp_p_extract(_regval)) << ("\t(Implements extended MC regs)\n");
    ((_os << (" tes_p =\t")) << ia32_mcg_cap_tes_p_extract(_regval)) << ("\t(Threshold-based error status present)\n");
    ((_os << (" ext_cnt =\t")) << ia32_mcg_cap_ext_cnt_extract(_regval)) << ("\t(Num. extended MC regs present)\n");
    return(_os);
}

/*
 * Register type: ia32_mcg_status_t
 * Description: Implicit type of Global machine check status register
 * Fields:
 *   ripv	(size 1, offset 0, init 0):	RO	Restart IP valid
 *   eipv	(size 1, offset 1, init 0):	RO	Error IP valid
 *   mcip	(size 1, offset 2, init 0):	RW	Machine check in progress
 *   _anon3	(size 61, offset 3, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mcg_status_t);
#define ia32_mcg_status_default (ia32_mcg_status_t )(0x0)
static inline uint8_t ia32_mcg_status_ripv_extract(ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_ripv_extract(ia32_mcg_status_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_mcg_status_t ia32_mcg_status_ripv_insert(ia32_mcg_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_status_t ia32_mcg_status_ripv_insert(ia32_mcg_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_status_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_mcg_status_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_mcg_status_eipv_extract(ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_eipv_extract(ia32_mcg_status_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_mcg_status_t ia32_mcg_status_eipv_insert(ia32_mcg_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_status_t ia32_mcg_status_eipv_insert(ia32_mcg_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_status_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_mcg_status_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_mcg_status_mcip_extract(ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_mcip_extract(ia32_mcg_status_t _regval)
{
    return((uint8_t )((_regval & 0x4) >> 2));
}

static inline ia32_mcg_status_t ia32_mcg_status_mcip_insert(ia32_mcg_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mcg_status_t ia32_mcg_status_mcip_insert(ia32_mcg_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mcg_status_t )((_regval & 0xfffffffffffffffb) | (0x4 & (((ia32_mcg_status_t )(_fieldval)) << 2))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mcg_status_t _regval)
{
    ((_os << (" ripv =\t")) << ia32_mcg_status_ripv_extract(_regval)) << ("\t(Restart IP valid)\n");
    ((_os << (" eipv =\t")) << ia32_mcg_status_eipv_extract(_regval)) << ("\t(Error IP valid)\n");
    ((_os << (" mcip =\t")) << ia32_mcg_status_mcip_extract(_regval)) << ("\t(Machine check in progress)\n");
    return(_os);
}

/*
 * Register type: ia32_mc_status_t
 * Description: Implicit type of Machine check unit status register array
 * Fields:
 *   mca_ec	(size 16, offset 0, init 0):	NOATTR	MCA error code
 *   ms_ec	(size 16, offset 16, init 0):	NOATTR	Model-specific error code
 *   other	(size 21, offset 32, init 0):	NOATTR	Other information
 *   tbes	(size 2, offset 53, init 0):	NOATTR	Threshold-based error status
 *   _anon55	(size 2, offset 55, init 0):	MBZ	_
 *   pcc	(size 1, offset 57, init 0):	NOATTR	Processor context corrupt
 *   addrv	(size 1, offset 58, init 0):	NOATTR	MCi_ADDR register valid
 *   miscv	(size 1, offset 59, init 0):	NOATTR	MCi_MISC register valid
 *   en	(size 1, offset 60, init 0):	NOATTR	Error enabled
 *   uc	(size 1, offset 61, init 0):	NOATTR	Error uncorrected
 *   over	(size 1, offset 62, init 0):	NOATTR	Error overflow
 *   val	(size 1, offset 63, init 0):	NOATTR	MCi_STATUS register valid
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mc_status_t);
#define ia32_mc_status_default (ia32_mc_status_t )(0x0)
static inline uint16_t ia32_mc_status_mca_ec_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint16_t ia32_mc_status_mca_ec_extract(ia32_mc_status_t _regval)
{
    return((uint16_t )((_regval & 0xffff) >> 0));
}

static inline ia32_mc_status_t ia32_mc_status_mca_ec_insert(ia32_mc_status_t _regval, uint16_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_mca_ec_insert(ia32_mc_status_t _regval, uint16_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xffffffffffff0000) | (0xffff & (((ia32_mc_status_t )(_fieldval)) << 0))));
}

static inline uint16_t ia32_mc_status_ms_ec_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint16_t ia32_mc_status_ms_ec_extract(ia32_mc_status_t _regval)
{
    return((uint16_t )((_regval & 0xffff0000) >> 16));
}

static inline ia32_mc_status_t ia32_mc_status_ms_ec_insert(ia32_mc_status_t _regval, uint16_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_ms_ec_insert(ia32_mc_status_t _regval, uint16_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xffffffff0000ffff) | (0xffff0000 & (((ia32_mc_status_t )(_fieldval)) << 16))));
}

static inline uint32_t ia32_mc_status_other_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint32_t ia32_mc_status_other_extract(ia32_mc_status_t _regval)
{
    return((uint32_t )((_regval & 0x1fffff00000000) >> 32));
}

static inline ia32_mc_status_t ia32_mc_status_other_insert(ia32_mc_status_t _regval, uint32_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_other_insert(ia32_mc_status_t _regval, uint32_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xffe00000ffffffff) | (0x1fffff00000000 & (((ia32_mc_status_t )(_fieldval)) << 32))));
}

static inline ia32_tbtrk_t ia32_mc_status_tbes_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline ia32_tbtrk_t ia32_mc_status_tbes_extract(ia32_mc_status_t _regval)
{
    return((ia32_tbtrk_t )((_regval & 0x60000000000000) >> 53));
}

static inline ia32_mc_status_t ia32_mc_status_tbes_insert(ia32_mc_status_t _regval, ia32_tbtrk_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_tbes_insert(ia32_mc_status_t _regval, ia32_tbtrk_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xff9fffffffffffff) | (0x60000000000000 & (((ia32_mc_status_t )(_fieldval)) << 53))));
}

static inline uint8_t ia32_mc_status_pcc_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_pcc_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x200000000000000) >> 57));
}

static inline ia32_mc_status_t ia32_mc_status_pcc_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_pcc_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xfdffffffffffffff) | (0x200000000000000 & (((ia32_mc_status_t )(_fieldval)) << 57))));
}

static inline uint8_t ia32_mc_status_addrv_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_addrv_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x400000000000000) >> 58));
}

static inline ia32_mc_status_t ia32_mc_status_addrv_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_addrv_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xfbffffffffffffff) | (0x400000000000000 & (((ia32_mc_status_t )(_fieldval)) << 58))));
}

static inline uint8_t ia32_mc_status_miscv_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_miscv_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x800000000000000) >> 59));
}

static inline ia32_mc_status_t ia32_mc_status_miscv_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_miscv_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xf7ffffffffffffff) | (0x800000000000000 & (((ia32_mc_status_t )(_fieldval)) << 59))));
}

static inline uint8_t ia32_mc_status_en_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_en_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x1000000000000000) >> 60));
}

static inline ia32_mc_status_t ia32_mc_status_en_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_en_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xefffffffffffffff) | (0x1000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 60))));
}

static inline uint8_t ia32_mc_status_uc_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_uc_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x2000000000000000) >> 61));
}

static inline ia32_mc_status_t ia32_mc_status_uc_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_uc_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xdfffffffffffffff) | (0x2000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 61))));
}

static inline uint8_t ia32_mc_status_over_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_over_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x4000000000000000) >> 62));
}

static inline ia32_mc_status_t ia32_mc_status_over_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_over_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0xbfffffffffffffff) | (0x4000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 62))));
}

static inline uint8_t ia32_mc_status_val_extract(ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_val_extract(ia32_mc_status_t _regval)
{
    return((uint8_t )((_regval & 0x8000000000000000) >> 63));
}

static inline ia32_mc_status_t ia32_mc_status_val_insert(ia32_mc_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_val_insert(ia32_mc_status_t _regval, uint8_t _fieldval)
{
    return((ia32_mc_status_t )((_regval & 0x7fffffffffffffff) | (0x8000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 63))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mc_status_t _regval)
{
    ((_os << (" mca_ec =\t")) << ia32_mc_status_mca_ec_extract(_regval)) << ("\t(MCA error code)\n");
    ((_os << (" ms_ec =\t")) << ia32_mc_status_ms_ec_extract(_regval)) << ("\t(Model-specific error code)\n");
    ((_os << (" other =\t")) << ia32_mc_status_other_extract(_regval)) << ("\t(Other information)\n");
    ((_os << (" tbes =\t")) << ia32_mc_status_tbes_extract(_regval)) << ("\t(Threshold-based error status)\n");
    ((_os << (" pcc =\t")) << ia32_mc_status_pcc_extract(_regval)) << ("\t(Processor context corrupt)\n");
    ((_os << (" addrv =\t")) << ia32_mc_status_addrv_extract(_regval)) << ("\t(MCi_ADDR register valid)\n");
    ((_os << (" miscv =\t")) << ia32_mc_status_miscv_extract(_regval)) << ("\t(MCi_MISC register valid)\n");
    ((_os << (" en =\t")) << ia32_mc_status_en_extract(_regval)) << ("\t(Error enabled)\n");
    ((_os << (" uc =\t")) << ia32_mc_status_uc_extract(_regval)) << ("\t(Error uncorrected)\n");
    ((_os << (" over =\t")) << ia32_mc_status_over_extract(_regval)) << ("\t(Error overflow)\n");
    ((_os << (" val =\t")) << ia32_mc_status_val_extract(_regval)) << ("\t(MCi_STATUS register valid)\n");
    return(_os);
}

/*
 * Register type: ia32_debugctl_t
 * Description: Implicit type of Debug control register
 * Fields:
 *   lbr	(size 1, offset 0, init 0):	RW	Last branch/int/exception
 *   btf	(size 1, offset 1, init 0):	RW	Single-step on branches
 *   _anon2	(size 4, offset 2, init 0):	RSVD	_
 *   tr	(size 1, offset 6, init 0):	RW	Trace messages enable
 *   bts	(size 1, offset 7, init 0):	RW	Branch trace store
 *   btint	(size 1, offset 8, init 0):	RW	Branch trace interrupt
 *   bts_off_os	(size 1, offset 9, init 0):	RW	BTS off in OS
 *   bts_off_usr	(size 1, offset 10, init 0):	RW	BTS off in user code
 *   freeze_lbrs_on_pmi	(size 1, offset 11, init 0):	RW	freeze_lbrs_on_pmi
 *   freeze_perfmon_on_pmi	(size 1, offset 12, init 0):	RW	freeze_perfmon_on_pmi
 *   _anon13	(size 19, offset 13, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint32_t , ia32_debugctl_t);
#define ia32_debugctl_default (ia32_debugctl_t )(0x0)
static inline uint8_t ia32_debugctl_lbr_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_lbr_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_debugctl_t ia32_debugctl_lbr_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_lbr_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffffffe) | (0x1 & (((ia32_debugctl_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_debugctl_btf_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_btf_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_debugctl_t ia32_debugctl_btf_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_btf_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffffffd) | (0x2 & (((ia32_debugctl_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_debugctl_tr_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_tr_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x40) >> 6));
}

static inline ia32_debugctl_t ia32_debugctl_tr_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_tr_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xffffffbf) | (0x40 & (((ia32_debugctl_t )(_fieldval)) << 6))));
}

static inline uint8_t ia32_debugctl_bts_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x80) >> 7));
}

static inline ia32_debugctl_t ia32_debugctl_bts_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_bts_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xffffff7f) | (0x80 & (((ia32_debugctl_t )(_fieldval)) << 7))));
}

static inline uint8_t ia32_debugctl_btint_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_btint_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_debugctl_t ia32_debugctl_btint_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_btint_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffffeff) | (0x100 & (((ia32_debugctl_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_debugctl_bts_off_os_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_off_os_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_debugctl_t ia32_debugctl_bts_off_os_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_bts_off_os_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffffdff) | (0x200 & (((ia32_debugctl_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_debugctl_bts_off_usr_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_off_usr_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_debugctl_t ia32_debugctl_bts_off_usr_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_bts_off_usr_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffffbff) | (0x400 & (((ia32_debugctl_t )(_fieldval)) << 10))));
}

static inline uint8_t ia32_debugctl_freeze_lbrs_on_pmi_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_freeze_lbrs_on_pmi_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_debugctl_t ia32_debugctl_freeze_lbrs_on_pmi_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_freeze_lbrs_on_pmi_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xfffff7ff) | (0x800 & (((ia32_debugctl_t )(_fieldval)) << 11))));
}

static inline uint8_t ia32_debugctl_freeze_perfmon_on_pmi_extract(ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_freeze_perfmon_on_pmi_extract(ia32_debugctl_t _regval)
{
    return((uint8_t )((_regval & 0x1000) >> 12));
}

static inline ia32_debugctl_t ia32_debugctl_freeze_perfmon_on_pmi_insert(ia32_debugctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_freeze_perfmon_on_pmi_insert(ia32_debugctl_t _regval, uint8_t _fieldval)
{
    return((ia32_debugctl_t )((_regval & 0xffffefff) | (0x1000 & (((ia32_debugctl_t )(_fieldval)) << 12))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_debugctl_t _regval)
{
    ((_os << (" lbr =\t")) << ia32_debugctl_lbr_extract(_regval)) << ("\t(Last branch/int/exception)\n");
    ((_os << (" btf =\t")) << ia32_debugctl_btf_extract(_regval)) << ("\t(Single-step on branches)\n");
    ((_os << (" tr =\t")) << ia32_debugctl_tr_extract(_regval)) << ("\t(Trace messages enable)\n");
    ((_os << (" bts =\t")) << ia32_debugctl_bts_extract(_regval)) << ("\t(Branch trace store)\n");
    ((_os << (" btint =\t")) << ia32_debugctl_btint_extract(_regval)) << ("\t(Branch trace interrupt)\n");
    ((_os << (" bts_off_os =\t")) << ia32_debugctl_bts_off_os_extract(_regval)) << ("\t(BTS off in OS)\n");
    ((_os << (" bts_off_usr =\t")) << ia32_debugctl_bts_off_usr_extract(_regval)) << ("\t(BTS off in user code)\n");
    ((_os << (" freeze_lbrs_on_pmi =\t")) << ia32_debugctl_freeze_lbrs_on_pmi_extract(_regval)) << ("\t(freeze_lbrs_on_pmi)\n");
    ((_os << (" freeze_perfmon_on_pmi =\t")) << ia32_debugctl_freeze_perfmon_on_pmi_extract(_regval)) << ("\t(freeze_perfmon_on_pmi)\n");
    return(_os);
}

/*
 * Register type: ia32_perfevtsel_t
 * Description: Perfmon event select
 * Fields:
 *   evsel	(size 8, offset 0, init 0):	NOATTR	Event select
 *   umask	(size 8, offset 8, init 0):	NOATTR	Unit mask
 *   usr	(size 1, offset 16, init 0):	NOATTR	User mode
 *   os	(size 1, offset 17, init 0):	NOATTR	OS mode
 *   e	(size 1, offset 18, init 0):	NOATTR	Edge detect
 *   pc	(size 1, offset 19, init 0):	NOATTR	Pin control
 *   intr	(size 1, offset 20, init 0):	NOATTR	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	NOATTR	Enable counters
 *   inv	(size 1, offset 23, init 0):	NOATTR	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	NOATTR	Counter mask
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_perfevtsel_t);
#define ia32_perfevtsel_default (ia32_perfevtsel_t )(0x0)
static inline uint8_t ia32_perfevtsel_evsel_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_evsel_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_evsel_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_evsel_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_perfevtsel_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_perfevtsel_umask_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_umask_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff00) >> 8));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_umask_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_umask_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffffffff00ff) | (0xff00 & (((ia32_perfevtsel_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_perfevtsel_usr_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_usr_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x10000) >> 16));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_usr_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_usr_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xfffffffffffeffff) | (0x10000 & (((ia32_perfevtsel_t )(_fieldval)) << 16))));
}

static inline uint8_t ia32_perfevtsel_os_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_os_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x20000) >> 17));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_os_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_os_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xfffffffffffdffff) | (0x20000 & (((ia32_perfevtsel_t )(_fieldval)) << 17))));
}

static inline uint8_t ia32_perfevtsel_e_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_e_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x40000) >> 18));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_e_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_e_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xfffffffffffbffff) | (0x40000 & (((ia32_perfevtsel_t )(_fieldval)) << 18))));
}

static inline uint8_t ia32_perfevtsel_pc_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_pc_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x80000) >> 19));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_pc_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_pc_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xfffffffffff7ffff) | (0x80000 & (((ia32_perfevtsel_t )(_fieldval)) << 19))));
}

static inline uint8_t ia32_perfevtsel_intr_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_intr_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x100000) >> 20));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_intr_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_intr_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffffffefffff) | (0x100000 & (((ia32_perfevtsel_t )(_fieldval)) << 20))));
}

static inline uint8_t ia32_perfevtsel_en_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_en_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x400000) >> 22));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_en_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_en_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffffffbfffff) | (0x400000 & (((ia32_perfevtsel_t )(_fieldval)) << 22))));
}

static inline uint8_t ia32_perfevtsel_inv_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_inv_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x800000) >> 23));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_inv_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_inv_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffffff7fffff) | (0x800000 & (((ia32_perfevtsel_t )(_fieldval)) << 23))));
}

static inline uint8_t ia32_perfevtsel_cmask_extract(ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel_cmask_extract(ia32_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff000000) >> 24));
}

static inline ia32_perfevtsel_t ia32_perfevtsel_cmask_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel_cmask_insert(ia32_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_perfevtsel_t )((_regval & 0xffffffff00ffffff) | (0xff000000 & (((ia32_perfevtsel_t )(_fieldval)) << 24))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_perfevtsel_t _regval)
{
    ((_os << (" evsel =\t")) << ia32_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    ((_os << (" pc =\t")) << ia32_perfevtsel_pc_extract(_regval)) << ("\t(Pin control)\n");
    ((_os << (" intr =\t")) << ia32_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    ((_os << (" en =\t")) << ia32_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    return(_os);
}

/*
 * Register type: ia32_fixed_ctr_t
 * Description: Fixed counter
 * Fields:
 *   v	(size 40, offset 0, init 0):	NOATTR	Value
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_fixed_ctr_t);
#define ia32_fixed_ctr_default (ia32_fixed_ctr_t )(0x0)
static inline uint64_t ia32_fixed_ctr_v_extract(ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline uint64_t ia32_fixed_ctr_v_extract(ia32_fixed_ctr_t _regval)
{
    return((uint64_t )((_regval & 0xffffffffff) >> 0));
}

static inline ia32_fixed_ctr_t ia32_fixed_ctr_v_insert(ia32_fixed_ctr_t _regval, uint64_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr_v_insert(ia32_fixed_ctr_t _regval, uint64_t _fieldval)
{
    return((ia32_fixed_ctr_t )((_regval & 0xffffff0000000000) | (0xffffffffff & (((ia32_fixed_ctr_t )(_fieldval)) << 0))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_fixed_ctr_t _regval)
{
    ((_os << (" v =\t")) << ia32_fixed_ctr_v_extract(_regval)) << ("\t(Value)\n");
    return(_os);
}

/*
 * Register type: ia32_fixed_ctr_ctl_t
 * Description: Implicit type of Fixed counter control register
 * Fields:
 *   enos0	(size 1, offset 0, init 0):	RW	Enable 0 for OS
 *   enusrs0	(size 1, offset 1, init 0):	RW	Enable 0 for user
 *   _anon2	(size 1, offset 2, init 0):	RSVD	_
 *   pmi0	(size 1, offset 3, init 0):	RW	Enable PMI on overflow 0
 *   enos1	(size 1, offset 4, init 0):	RW	Enable 1 for OS
 *   enusrs1	(size 1, offset 5, init 0):	RW	Enable 1 for user
 *   _anon6	(size 1, offset 6, init 0):	RSVD	_
 *   pmi1	(size 1, offset 7, init 0):	RW	Enable PMI on overflow 1
 *   enos2	(size 1, offset 8, init 0):	RW	Enable 2 for OS
 *   enusrs2	(size 1, offset 9, init 0):	RW	Enable 2 for user
 *   _anon10	(size 1, offset 10, init 0):	RSVD	_
 *   pmi2	(size 1, offset 11, init 0):	RW	Enable PMI on overflow 2
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_fixed_ctr_ctl_t);
#define ia32_fixed_ctr_ctl_default (ia32_fixed_ctr_ctl_t )(0x0)
static inline uint8_t ia32_fixed_ctr_ctl_enos0_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos0_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs0_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs0_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi0_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi0_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi0_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 3))));
}

static inline uint8_t ia32_fixed_ctr_ctl_enos1_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos1_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x10) >> 4));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xffffffffffffffef) | (0x10 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 4))));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs1_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs1_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x20) >> 5));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xffffffffffffffdf) | (0x20 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 5))));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi1_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi1_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x80) >> 7));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi1_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xffffffffffffff7f) | (0x80 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 7))));
}

static inline uint8_t ia32_fixed_ctr_ctl_enos2_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos2_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enos2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs2_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs2_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_enusrs2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffffdff) | (0x200 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi2_extract(ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi2_extract(ia32_fixed_ctr_ctl_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_pmi2_insert(ia32_fixed_ctr_ctl_t _regval, uint8_t _fieldval)
{
    return((ia32_fixed_ctr_ctl_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 11))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_fixed_ctr_ctl_t _regval)
{
    ((_os << (" enos0 =\t")) << ia32_fixed_ctr_ctl_enos0_extract(_regval)) << ("\t(Enable 0 for OS)\n");
    ((_os << (" enusrs0 =\t")) << ia32_fixed_ctr_ctl_enusrs0_extract(_regval)) << ("\t(Enable 0 for user)\n");
    ((_os << (" pmi0 =\t")) << ia32_fixed_ctr_ctl_pmi0_extract(_regval)) << ("\t(Enable PMI on overflow 0)\n");
    ((_os << (" enos1 =\t")) << ia32_fixed_ctr_ctl_enos1_extract(_regval)) << ("\t(Enable 1 for OS)\n");
    ((_os << (" enusrs1 =\t")) << ia32_fixed_ctr_ctl_enusrs1_extract(_regval)) << ("\t(Enable 1 for user)\n");
    ((_os << (" pmi1 =\t")) << ia32_fixed_ctr_ctl_pmi1_extract(_regval)) << ("\t(Enable PMI on overflow 1)\n");
    ((_os << (" enos2 =\t")) << ia32_fixed_ctr_ctl_enos2_extract(_regval)) << ("\t(Enable 2 for OS)\n");
    ((_os << (" enusrs2 =\t")) << ia32_fixed_ctr_ctl_enusrs2_extract(_regval)) << ("\t(Enable 2 for user)\n");
    ((_os << (" pmi2 =\t")) << ia32_fixed_ctr_ctl_pmi2_extract(_regval)) << ("\t(Enable PMI on overflow 2)\n");
    return(_os);
}

/*
 * Register type: ia32_perf_global_t
 * Description: Perfmon global status/overflow
 * Fields:
 *   pmc0	(size 1, offset 0, init 0):	NOATTR	PMC0 overflow
 *   pmc1	(size 1, offset 1, init 0):	NOATTR	PMC1 overflow
 *   _anon2	(size 30, offset 2, init 0):	RSVD	_
 *   ctr0	(size 1, offset 32, init 0):	NOATTR	Fixed CTR0 overflow
 *   ctr1	(size 1, offset 33, init 0):	NOATTR	Fixed CTR1 overflow
 *   ctr2	(size 1, offset 34, init 0):	NOATTR	Fixed CTR2 overflow
 *   _anon35	(size 27, offset 35, init 0):	RSVD	_
 *   ovfbuf	(size 1, offset 62, init 0):	NOATTR	Overflow buffer
 *   condchgd	(size 1, offset 63, init 0):	NOATTR	Condition changed
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_perf_global_t);
#define ia32_perf_global_default (ia32_perf_global_t )(0x0)
static inline uint8_t ia32_perf_global_pmc0_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_pmc0_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_perf_global_t ia32_perf_global_pmc0_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_pmc0_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_perf_global_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_perf_global_pmc1_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_pmc1_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_perf_global_t ia32_perf_global_pmc1_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_pmc1_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_perf_global_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_perf_global_ctr0_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctr0_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x100000000) >> 32));
}

static inline ia32_perf_global_t ia32_perf_global_ctr0_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_ctr0_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xfffffffeffffffff) | (0x100000000 & (((ia32_perf_global_t )(_fieldval)) << 32))));
}

static inline uint8_t ia32_perf_global_ctr1_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctr1_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x200000000) >> 33));
}

static inline ia32_perf_global_t ia32_perf_global_ctr1_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_ctr1_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xfffffffdffffffff) | (0x200000000 & (((ia32_perf_global_t )(_fieldval)) << 33))));
}

static inline uint8_t ia32_perf_global_ctr2_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctr2_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x400000000) >> 34));
}

static inline ia32_perf_global_t ia32_perf_global_ctr2_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_ctr2_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xfffffffbffffffff) | (0x400000000 & (((ia32_perf_global_t )(_fieldval)) << 34))));
}

static inline uint8_t ia32_perf_global_ovfbuf_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ovfbuf_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x4000000000000000) >> 62));
}

static inline ia32_perf_global_t ia32_perf_global_ovfbuf_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_ovfbuf_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0xbfffffffffffffff) | (0x4000000000000000 & (((ia32_perf_global_t )(_fieldval)) << 62))));
}

static inline uint8_t ia32_perf_global_condchgd_extract(ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_condchgd_extract(ia32_perf_global_t _regval)
{
    return((uint8_t )((_regval & 0x8000000000000000) >> 63));
}

static inline ia32_perf_global_t ia32_perf_global_condchgd_insert(ia32_perf_global_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_condchgd_insert(ia32_perf_global_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_t )((_regval & 0x7fffffffffffffff) | (0x8000000000000000 & (((ia32_perf_global_t )(_fieldval)) << 63))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_perf_global_t _regval)
{
    ((_os << (" pmc0 =\t")) << ia32_perf_global_pmc0_extract(_regval)) << ("\t(PMC0 overflow)\n");
    ((_os << (" pmc1 =\t")) << ia32_perf_global_pmc1_extract(_regval)) << ("\t(PMC1 overflow)\n");
    ((_os << (" ctr0 =\t")) << ia32_perf_global_ctr0_extract(_regval)) << ("\t(Fixed CTR0 overflow)\n");
    ((_os << (" ctr1 =\t")) << ia32_perf_global_ctr1_extract(_regval)) << ("\t(Fixed CTR1 overflow)\n");
    ((_os << (" ctr2 =\t")) << ia32_perf_global_ctr2_extract(_regval)) << ("\t(Fixed CTR2 overflow)\n");
    ((_os << (" ovfbuf =\t")) << ia32_perf_global_ovfbuf_extract(_regval)) << ("\t(Overflow buffer)\n");
    ((_os << (" condchgd =\t")) << ia32_perf_global_condchgd_extract(_regval)) << ("\t(Condition changed)\n");
    return(_os);
}

/*
 * Register type: ia32_perf_global_ctrl_t
 * Description: Implicit type of Perfmon global control register
 * Fields:
 *   pmc0	(size 1, offset 0, init 0):	RW	PMC0 enable
 *   pmc1	(size 1, offset 1, init 0):	RW	PMC1 enable
 *   _anon2	(size 30, offset 2, init 0):	RSVD	_
 *   ctr0	(size 1, offset 32, init 0):	RW	Fixed CTR0 enable
 *   ctr1	(size 1, offset 33, init 0):	RW	Fixed CTR1 enable
 *   ctr2	(size 1, offset 34, init 0):	RW	Fixed CTR2 enable
 *   _anon35	(size 29, offset 35, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_perf_global_ctrl_t);
#define ia32_perf_global_ctrl_default (ia32_perf_global_ctrl_t )(0x0)
static inline uint8_t ia32_perf_global_ctrl_pmc0_extract(ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_pmc0_extract(ia32_perf_global_ctrl_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_pmc0_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_pmc0_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_ctrl_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_perf_global_ctrl_pmc1_extract(ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_pmc1_extract(ia32_perf_global_ctrl_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_pmc1_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_pmc1_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_ctrl_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_perf_global_ctrl_ctr0_extract(ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr0_extract(ia32_perf_global_ctrl_t _regval)
{
    return((uint8_t )((_regval & 0x100000000) >> 32));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr0_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr0_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_ctrl_t )((_regval & 0xfffffffeffffffff) | (0x100000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 32))));
}

static inline uint8_t ia32_perf_global_ctrl_ctr1_extract(ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr1_extract(ia32_perf_global_ctrl_t _regval)
{
    return((uint8_t )((_regval & 0x200000000) >> 33));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr1_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr1_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_ctrl_t )((_regval & 0xfffffffdffffffff) | (0x200000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 33))));
}

static inline uint8_t ia32_perf_global_ctrl_ctr2_extract(ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr2_extract(ia32_perf_global_ctrl_t _regval)
{
    return((uint8_t )((_regval & 0x400000000) >> 34));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr2_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_ctr2_insert(ia32_perf_global_ctrl_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_global_ctrl_t )((_regval & 0xfffffffbffffffff) | (0x400000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 34))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_perf_global_ctrl_t _regval)
{
    ((_os << (" pmc0 =\t")) << ia32_perf_global_ctrl_pmc0_extract(_regval)) << ("\t(PMC0 enable)\n");
    ((_os << (" pmc1 =\t")) << ia32_perf_global_ctrl_pmc1_extract(_regval)) << ("\t(PMC1 enable)\n");
    ((_os << (" ctr0 =\t")) << ia32_perf_global_ctrl_ctr0_extract(_regval)) << ("\t(Fixed CTR0 enable)\n");
    ((_os << (" ctr1 =\t")) << ia32_perf_global_ctrl_ctr1_extract(_regval)) << ("\t(Fixed CTR1 enable)\n");
    ((_os << (" ctr2 =\t")) << ia32_perf_global_ctrl_ctr2_extract(_regval)) << ("\t(Fixed CTR2 enable)\n");
    return(_os);
}

/*
 * Register type: ia32_pebs_enable_t
 * Description: Implicit type of Precise event-based sampling enable register
 * Fields:
 *   en	(size 1, offset 0, init 0):	RW	enable
 *   _anon1	(size 63, offset 1, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_pebs_enable_t);
#define ia32_pebs_enable_default (ia32_pebs_enable_t )(0x0)
static inline uint8_t ia32_pebs_enable_en_extract(ia32_pebs_enable_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_pebs_enable_en_extract(ia32_pebs_enable_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_pebs_enable_t ia32_pebs_enable_en_insert(ia32_pebs_enable_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_pebs_enable_t ia32_pebs_enable_en_insert(ia32_pebs_enable_t _regval, uint8_t _fieldval)
{
    return((ia32_pebs_enable_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_pebs_enable_t )(_fieldval)) << 0))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_pebs_enable_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_pebs_enable_t _regval)
{
    ((_os << (" en =\t")) << ia32_pebs_enable_en_extract(_regval)) << ("\t(enable)\n");
    return(_os);
}

/*
 * Register type: ia32_efer_t
 * Description: Implicit type of Extended features enable register
 * Fields:
 *   sce	(size 1, offset 0, init 0):	RW	SYSCALL enable
 *   _anon1	(size 7, offset 1, init 0):	RSVD	_
 *   lme	(size 1, offset 8, init 0):	RW	Long mode enable
 *   _anon9	(size 1, offset 9, init 0):	RSVD	_
 *   lma	(size 1, offset 10, init 0):	RW	Long mode active
 *   nxe	(size 1, offset 11, init 0):	RW	No-execute enable
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_efer_t);
#define ia32_efer_default (ia32_efer_t )(0x0)
static inline uint8_t ia32_efer_sce_extract(ia32_efer_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_sce_extract(ia32_efer_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_efer_t ia32_efer_sce_insert(ia32_efer_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_sce_insert(ia32_efer_t _regval, uint8_t _fieldval)
{
    return((ia32_efer_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_efer_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_efer_lme_extract(ia32_efer_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_lme_extract(ia32_efer_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_efer_t ia32_efer_lme_insert(ia32_efer_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_lme_insert(ia32_efer_t _regval, uint8_t _fieldval)
{
    return((ia32_efer_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_efer_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_efer_lma_extract(ia32_efer_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_lma_extract(ia32_efer_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_efer_t ia32_efer_lma_insert(ia32_efer_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_lma_insert(ia32_efer_t _regval, uint8_t _fieldval)
{
    return((ia32_efer_t )((_regval & 0xfffffffffffffbff) | (0x400 & (((ia32_efer_t )(_fieldval)) << 10))));
}

static inline uint8_t ia32_efer_nxe_extract(ia32_efer_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_nxe_extract(ia32_efer_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_efer_t ia32_efer_nxe_insert(ia32_efer_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_nxe_insert(ia32_efer_t _regval, uint8_t _fieldval)
{
    return((ia32_efer_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_efer_t )(_fieldval)) << 11))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_efer_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_efer_t _regval)
{
    ((_os << (" sce =\t")) << ia32_efer_sce_extract(_regval)) << ("\t(SYSCALL enable)\n");
    ((_os << (" lme =\t")) << ia32_efer_lme_extract(_regval)) << ("\t(Long mode enable)\n");
    ((_os << (" lma =\t")) << ia32_efer_lma_extract(_regval)) << ("\t(Long mode active)\n");
    ((_os << (" nxe =\t")) << ia32_efer_nxe_extract(_regval)) << ("\t(No-execute enable)\n");
    return(_os);
}

/*
 * Register type: ia32_star_t
 * Description: Implicit type of Syscall target address register
 * Fields:
 *   _anon0	(size 32, offset 0, init 0):	RSVD	_
 *   call	(size 16, offset 32, init 0):	RW	SYSCALL CS and SS
 *   ret	(size 16, offset 48, init 0):	RW	SYSRET CS and SS
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_star_t);
#define ia32_star_default (ia32_star_t )(0x0)
static inline uint16_t ia32_star_call_extract(ia32_star_t _regval) __attribute__ ((always_inline));
static inline uint16_t ia32_star_call_extract(ia32_star_t _regval)
{
    return((uint16_t )((_regval & 0xffff00000000) >> 32));
}

static inline ia32_star_t ia32_star_call_insert(ia32_star_t _regval, uint16_t _fieldval) __attribute__ ((always_inline));
static inline ia32_star_t ia32_star_call_insert(ia32_star_t _regval, uint16_t _fieldval)
{
    return((ia32_star_t )((_regval & 0xffff0000ffffffff) | (0xffff00000000 & (((ia32_star_t )(_fieldval)) << 32))));
}

static inline uint16_t ia32_star_ret_extract(ia32_star_t _regval) __attribute__ ((always_inline));
static inline uint16_t ia32_star_ret_extract(ia32_star_t _regval)
{
    return((uint16_t )((_regval & 0xffff000000000000) >> 48));
}

static inline ia32_star_t ia32_star_ret_insert(ia32_star_t _regval, uint16_t _fieldval) __attribute__ ((always_inline));
static inline ia32_star_t ia32_star_ret_insert(ia32_star_t _regval, uint16_t _fieldval)
{
    return((ia32_star_t )((_regval & 0xffffffffffff) | (0xffff000000000000 & (((ia32_star_t )(_fieldval)) << 48))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_star_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_star_t _regval)
{
    ((_os << (" call =\t")) << ia32_star_call_extract(_regval)) << ("\t(SYSCALL CS and SS)\n");
    ((_os << (" ret =\t")) << ia32_star_ret_extract(_regval)) << ("\t(SYSRET CS and SS)\n");
    return(_os);
}

/*
 * Register type: ia32_fmask_t
 * Description: Implicit type of SYSCALL EFLAGS mask register
 * Fields:
 *   v	(size 32, offset 0, init 0):	RW	Value
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_fmask_t);
#define ia32_fmask_default (ia32_fmask_t )(0x0)
static inline uint32_t ia32_fmask_v_extract(ia32_fmask_t _regval) __attribute__ ((always_inline));
static inline uint32_t ia32_fmask_v_extract(ia32_fmask_t _regval)
{
    return((uint32_t )((_regval & 0xffffffff) >> 0));
}

static inline ia32_fmask_t ia32_fmask_v_insert(ia32_fmask_t _regval, uint32_t _fieldval) __attribute__ ((always_inline));
static inline ia32_fmask_t ia32_fmask_v_insert(ia32_fmask_t _regval, uint32_t _fieldval)
{
    return((ia32_fmask_t )((_regval & 0xffffffff00000000) | (0xffffffff & (((ia32_fmask_t )(_fieldval)) << 0))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_fmask_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_fmask_t _regval)
{
    ((_os << (" v =\t")) << ia32_fmask_v_extract(_regval)) << ("\t(Value)\n");
    return(_os);
}

/*
 * Register type: ia32_mtrrcap_t
 * Description: Implicit type of MTRR Capabilities register
 * Fields:
 *   vcnt	(size 8, offset 0, init 0):	RO	Number of variable range registers
 *   fix	(size 1, offset 8, init 0):	RO	Fixed range registers supported
 *   _anon9	(size 1, offset 9, init 0):	RSVD	_
 *   wc	(size 1, offset 10, init 0):	RO	Write-combining memory type supported
 *   _anon11	(size 53, offset 11, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mtrrcap_t);
#define ia32_mtrrcap_default (ia32_mtrrcap_t )(0x0)
static inline uint8_t ia32_mtrrcap_vcnt_extract(ia32_mtrrcap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_vcnt_extract(ia32_mtrrcap_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_mtrrcap_t ia32_mtrrcap_vcnt_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrrcap_t ia32_mtrrcap_vcnt_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrrcap_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_mtrrcap_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_mtrrcap_fix_extract(ia32_mtrrcap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_fix_extract(ia32_mtrrcap_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_mtrrcap_t ia32_mtrrcap_fix_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrrcap_t ia32_mtrrcap_fix_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrrcap_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_mtrrcap_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_mtrrcap_wc_extract(ia32_mtrrcap_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_wc_extract(ia32_mtrrcap_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_mtrrcap_t ia32_mtrrcap_wc_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrrcap_t ia32_mtrrcap_wc_insert(ia32_mtrrcap_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrrcap_t )((_regval & 0xfffffffffffffbff) | (0x400 & (((ia32_mtrrcap_t )(_fieldval)) << 10))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mtrrcap_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mtrrcap_t _regval)
{
    ((_os << (" vcnt =\t")) << ia32_mtrrcap_vcnt_extract(_regval)) << ("\t(Number of variable range registers)\n");
    ((_os << (" fix =\t")) << ia32_mtrrcap_fix_extract(_regval)) << ("\t(Fixed range registers supported)\n");
    ((_os << (" wc =\t")) << ia32_mtrrcap_wc_extract(_regval)) << ("\t(Write-combining memory type supported)\n");
    return(_os);
}

/*
 * Register type: ia32_mtrr_def_type_t
 * Description: Implicit type of MTRR type definition register
 * Fields:
 *   tpe	(size 8, offset 0, init 0):	RW	Default memory type
 *   _anon8	(size 2, offset 8, init 0):	RSVD	_
 *   fe	(size 1, offset 10, init 0):	RW	Fixed-range MTRRs enable/disable
 *   e	(size 1, offset 11, init 0):	RW	MTRR enable/disable
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mtrr_def_type_t);
#define ia32_mtrr_def_type_default (ia32_mtrr_def_type_t )(0x0)
static inline uint8_t ia32_mtrr_def_type_tpe_extract(ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_tpe_extract(ia32_mtrr_def_type_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_tpe_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_tpe_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrr_def_type_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_mtrr_def_type_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_mtrr_def_type_fe_extract(ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_fe_extract(ia32_mtrr_def_type_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_fe_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_fe_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrr_def_type_t )((_regval & 0xfffffffffffffbff) | (0x400 & (((ia32_mtrr_def_type_t )(_fieldval)) << 10))));
}

static inline uint8_t ia32_mtrr_def_type_e_extract(ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_e_extract(ia32_mtrr_def_type_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_e_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_e_insert(ia32_mtrr_def_type_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrr_def_type_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_mtrr_def_type_t )(_fieldval)) << 11))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_def_type_t _regval)
{
    ((_os << (" tpe =\t")) << ia32_mtrr_def_type_tpe_extract(_regval)) << ("\t(Default memory type)\n");
    ((_os << (" fe =\t")) << ia32_mtrr_def_type_fe_extract(_regval)) << ("\t(Fixed-range MTRRs enable/disable)\n");
    ((_os << (" e =\t")) << ia32_mtrr_def_type_e_extract(_regval)) << ("\t(MTRR enable/disable)\n");
    return(_os);
}

/*
 * Register type: ia32_mtrr_physbase_t
 * Description: Implicit type of MTRR physical base register array
 * Fields:
 *   tpe	(size 8, offset 0, init 0):	NOATTR	Type
 *   _anon8	(size 4, offset 8, init 0):	RSVD	_
 *   base	(size 52, offset 12, init 0):	NOATTR	Physical base address
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mtrr_physbase_t);
#define ia32_mtrr_physbase_default (ia32_mtrr_physbase_t )(0x0)
static inline uint8_t ia32_mtrr_physbase_tpe_extract(ia32_mtrr_physbase_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_physbase_tpe_extract(ia32_mtrr_physbase_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_tpe_insert(ia32_mtrr_physbase_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_tpe_insert(ia32_mtrr_physbase_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrr_physbase_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_mtrr_physbase_t )(_fieldval)) << 0))));
}

static inline uint64_t ia32_mtrr_physbase_base_extract(ia32_mtrr_physbase_t _regval) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_physbase_base_extract(ia32_mtrr_physbase_t _regval)
{
    return((uint64_t )((_regval & 0xfffffffffffff000) >> 12));
}

static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_base_insert(ia32_mtrr_physbase_t _regval, uint64_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_base_insert(ia32_mtrr_physbase_t _regval, uint64_t _fieldval)
{
    return((ia32_mtrr_physbase_t )((_regval & 0xfff) | (0xfffffffffffff000 & (((ia32_mtrr_physbase_t )(_fieldval)) << 12))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_physbase_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_physbase_t _regval)
{
    ((_os << (" tpe =\t")) << ia32_mtrr_physbase_tpe_extract(_regval)) << ("\t(Type)\n");
    ((_os << (" base =\t")) << ia32_mtrr_physbase_base_extract(_regval)) << ("\t(Physical base address)\n");
    return(_os);
}

/*
 * Register type: ia32_mtrr_physmask_t
 * Description: Implicit type of MTRR physical mask register array
 * Fields:
 *   _anon0	(size 11, offset 0, init 0):	RSVD	_
 *   v	(size 1, offset 11, init 0):	NOATTR	Valid
 *   mask	(size 52, offset 12, init 0):	NOATTR	Physical mask
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_mtrr_physmask_t);
#define ia32_mtrr_physmask_default (ia32_mtrr_physmask_t )(0x0)
static inline uint8_t ia32_mtrr_physmask_v_extract(ia32_mtrr_physmask_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_physmask_v_extract(ia32_mtrr_physmask_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_v_insert(ia32_mtrr_physmask_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_v_insert(ia32_mtrr_physmask_t _regval, uint8_t _fieldval)
{
    return((ia32_mtrr_physmask_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_mtrr_physmask_t )(_fieldval)) << 11))));
}

static inline uint64_t ia32_mtrr_physmask_mask_extract(ia32_mtrr_physmask_t _regval) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_physmask_mask_extract(ia32_mtrr_physmask_t _regval)
{
    return((uint64_t )((_regval & 0xfffffffffffff000) >> 12));
}

static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_mask_insert(ia32_mtrr_physmask_t _regval, uint64_t _fieldval) __attribute__ ((always_inline));
static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_mask_insert(ia32_mtrr_physmask_t _regval, uint64_t _fieldval)
{
    return((ia32_mtrr_physmask_t )((_regval & 0xfff) | (0xfffffffffffff000 & (((ia32_mtrr_physmask_t )(_fieldval)) << 12))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_physmask_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_mtrr_physmask_t _regval)
{
    ((_os << (" v =\t")) << ia32_mtrr_physmask_v_extract(_regval)) << ("\t(Valid)\n");
    ((_os << (" mask =\t")) << ia32_mtrr_physmask_mask_extract(_regval)) << ("\t(Physical mask)\n");
    return(_os);
}

/*
 * Register type: ia32_cr_pat_t
 * Description: Implicit type of Page attribute table control register
 * Fields:
 *   pa0	(size 8, offset 0, init 0):	RW	pa0
 *   pa1	(size 8, offset 8, init 0):	RW	pa1
 *   pa2	(size 8, offset 16, init 0):	RW	pa2
 *   pa3	(size 8, offset 24, init 0):	RW	pa3
 *   pa4	(size 8, offset 32, init 0):	RW	pa4
 *   pa5	(size 8, offset 40, init 0):	RW	pa5
 *   pa6	(size 8, offset 48, init 0):	RW	pa6
 *   pa7	(size 8, offset 56, init 0):	RW	pa7
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_cr_pat_t);
#define ia32_cr_pat_default (ia32_cr_pat_t )(0x0)
static inline ia32_pat_val_t ia32_cr_pat_pa0_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa0_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff) >> 0));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa0_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa0_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_cr_pat_t )(_fieldval)) << 0))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa1_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa1_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff00) >> 8));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa1_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa1_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffffffffff00ff) | (0xff00 & (((ia32_cr_pat_t )(_fieldval)) << 8))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa2_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa2_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff0000) >> 16));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa2_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa2_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffffffff00ffff) | (0xff0000 & (((ia32_cr_pat_t )(_fieldval)) << 16))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa3_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa3_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff000000) >> 24));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa3_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa3_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffffff00ffffff) | (0xff000000 & (((ia32_cr_pat_t )(_fieldval)) << 24))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa4_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa4_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff00000000) >> 32));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa4_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa4_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffff00ffffffff) | (0xff00000000 & (((ia32_cr_pat_t )(_fieldval)) << 32))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa5_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa5_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff0000000000) >> 40));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa5_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa5_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffff00ffffffffff) | (0xff0000000000 & (((ia32_cr_pat_t )(_fieldval)) << 40))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa6_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa6_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff000000000000) >> 48));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa6_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa6_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xff00ffffffffffff) | (0xff000000000000 & (((ia32_cr_pat_t )(_fieldval)) << 48))));
}

static inline ia32_pat_val_t ia32_cr_pat_pa7_extract(ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa7_extract(ia32_cr_pat_t _regval)
{
    return((ia32_pat_val_t )((_regval & 0xff00000000000000) >> 56));
}

static inline ia32_cr_pat_t ia32_cr_pat_pa7_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_pa7_insert(ia32_cr_pat_t _regval, ia32_pat_val_t _fieldval)
{
    return((ia32_cr_pat_t )((_regval & 0xffffffffffffff) | (0xff00000000000000 & (((ia32_cr_pat_t )(_fieldval)) << 56))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_cr_pat_t _regval)
{
    ((_os << (" pa0 =\t")) << ia32_cr_pat_pa0_extract(_regval)) << ("\t(pa0)\n");
    ((_os << (" pa1 =\t")) << ia32_cr_pat_pa1_extract(_regval)) << ("\t(pa1)\n");
    ((_os << (" pa2 =\t")) << ia32_cr_pat_pa2_extract(_regval)) << ("\t(pa2)\n");
    ((_os << (" pa3 =\t")) << ia32_cr_pat_pa3_extract(_regval)) << ("\t(pa3)\n");
    ((_os << (" pa4 =\t")) << ia32_cr_pat_pa4_extract(_regval)) << ("\t(pa4)\n");
    ((_os << (" pa5 =\t")) << ia32_cr_pat_pa5_extract(_regval)) << ("\t(pa5)\n");
    ((_os << (" pa6 =\t")) << ia32_cr_pat_pa6_extract(_regval)) << ("\t(pa6)\n");
    ((_os << (" pa7 =\t")) << ia32_cr_pat_pa7_extract(_regval)) << ("\t(pa7)\n");
    return(_os);
}

/*
 * Register type: ia32_perf_pnt_t
 * Description: Performance point
 * Fields:
 *   eist	(size 16, offset 0, init 0):	NOATTR	EIST transition target
 *   _anon16	(size 16, offset 16, init 0):	RSVD	_
 *   ida	(size 1, offset 32, init 0):	NOATTR	IDA disengage
 *   _anon33	(size 31, offset 33, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_perf_pnt_t);
#define ia32_perf_pnt_default (ia32_perf_pnt_t )(0x0)
static inline uint16_t ia32_perf_pnt_eist_extract(ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline uint16_t ia32_perf_pnt_eist_extract(ia32_perf_pnt_t _regval)
{
    return((uint16_t )((_regval & 0xffff) >> 0));
}

static inline ia32_perf_pnt_t ia32_perf_pnt_eist_insert(ia32_perf_pnt_t _regval, uint16_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_pnt_eist_insert(ia32_perf_pnt_t _regval, uint16_t _fieldval)
{
    return((ia32_perf_pnt_t )((_regval & 0xffffffffffff0000) | (0xffff & (((ia32_perf_pnt_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_perf_pnt_ida_extract(ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_pnt_ida_extract(ia32_perf_pnt_t _regval)
{
    return((uint8_t )((_regval & 0x100000000) >> 32));
}

static inline ia32_perf_pnt_t ia32_perf_pnt_ida_insert(ia32_perf_pnt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_pnt_ida_insert(ia32_perf_pnt_t _regval, uint8_t _fieldval)
{
    return((ia32_perf_pnt_t )((_regval & 0xfffffffeffffffff) | (0x100000000 & (((ia32_perf_pnt_t )(_fieldval)) << 32))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_perf_pnt_t _regval)
{
    ((_os << (" eist =\t")) << ia32_perf_pnt_eist_extract(_regval)) << ("\t(EIST transition target)\n");
    ((_os << (" ida =\t")) << ia32_perf_pnt_ida_extract(_regval)) << ("\t(IDA disengage)\n");
    return(_os);
}

/*
 * Register type: ia32_clock_modulation_t
 * Description: Implicit type of Clock modulation register
 * Fields:
 *   _anon0	(size 1, offset 0, init 0):	RSVD	_
 *   dc	(size 2, offset 1, init 0):	RW	On-Demand clock modulation duty cycle (x12.5%)
 *   en	(size 1, offset 3, init 0):	RW	Enable
 *   _anon4	(size 60, offset 4, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_clock_modulation_t);
#define ia32_clock_modulation_default (ia32_clock_modulation_t )(0x0)
static inline uint8_t ia32_clock_modulation_dc_extract(ia32_clock_modulation_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_clock_modulation_dc_extract(ia32_clock_modulation_t _regval)
{
    return((uint8_t )((_regval & 0x6) >> 1));
}

static inline ia32_clock_modulation_t ia32_clock_modulation_dc_insert(ia32_clock_modulation_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_clock_modulation_t ia32_clock_modulation_dc_insert(ia32_clock_modulation_t _regval, uint8_t _fieldval)
{
    return((ia32_clock_modulation_t )((_regval & 0xfffffffffffffff9) | (0x6 & (((ia32_clock_modulation_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_clock_modulation_en_extract(ia32_clock_modulation_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_clock_modulation_en_extract(ia32_clock_modulation_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_clock_modulation_t ia32_clock_modulation_en_insert(ia32_clock_modulation_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_clock_modulation_t ia32_clock_modulation_en_insert(ia32_clock_modulation_t _regval, uint8_t _fieldval)
{
    return((ia32_clock_modulation_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_clock_modulation_t )(_fieldval)) << 3))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_clock_modulation_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_clock_modulation_t _regval)
{
    ((_os << (" dc =\t")) << ia32_clock_modulation_dc_extract(_regval)) << ("\t(On-Demand clock modulation duty cycle (x12.5%))\n");
    ((_os << (" en =\t")) << ia32_clock_modulation_en_extract(_regval)) << ("\t(Enable)\n");
    return(_os);
}

/*
 * Register type: ia32_therm_interrupt_t
 * Description: Implicit type of Thermal monitor interrupt register
 * Fields:
 *   ht	(size 1, offset 0, init 0):	RW	High-temperature enable
 *   lt	(size 1, offset 1, init 0):	RW	Low-temperature enable
 *   prochot	(size 1, offset 2, init 0):	RW	PROCHOT# enable
 *   forcpr	(size 1, offset 3, init 0):	RW	FORCEPR# enable
 *   over	(size 1, offset 4, init 0):	RW	Overheat enable
 *   _anon5	(size 3, offset 5, init 0):	RSVD	_
 *   tt1	(size 7, offset 8, init 0):	RW	Thermal threshold 1 value
 *   tt1int	(size 1, offset 15, init 0):	RW	Thermal threshold 1 enable
 *   tt2	(size 7, offset 16, init 0):	RW	Thermal threshold 2 value
 *   tt2int	(size 1, offset 23, init 0):	RW	Thermal threshold 2 enable
 *   _anon24	(size 40, offset 24, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_therm_interrupt_t);
#define ia32_therm_interrupt_default (ia32_therm_interrupt_t )(0x0)
static inline uint8_t ia32_therm_interrupt_ht_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_ht_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_ht_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_ht_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_therm_interrupt_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_therm_interrupt_lt_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_lt_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_lt_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_lt_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_therm_interrupt_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_therm_interrupt_prochot_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_prochot_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x4) >> 2));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_prochot_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_prochot_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xfffffffffffffffb) | (0x4 & (((ia32_therm_interrupt_t )(_fieldval)) << 2))));
}

static inline uint8_t ia32_therm_interrupt_forcpr_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_forcpr_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_forcpr_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_forcpr_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_therm_interrupt_t )(_fieldval)) << 3))));
}

static inline uint8_t ia32_therm_interrupt_over_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_over_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x10) >> 4));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_over_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_over_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xffffffffffffffef) | (0x10 & (((ia32_therm_interrupt_t )(_fieldval)) << 4))));
}

static inline uint8_t ia32_therm_interrupt_tt1_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt1_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x7f00) >> 8));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt1_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt1_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xffffffffffff80ff) | (0x7f00 & (((ia32_therm_interrupt_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_therm_interrupt_tt1int_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt1int_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x8000) >> 15));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt1int_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt1int_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xffffffffffff7fff) | (0x8000 & (((ia32_therm_interrupt_t )(_fieldval)) << 15))));
}

static inline uint8_t ia32_therm_interrupt_tt2_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt2_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x7f0000) >> 16));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt2_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt2_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xffffffffff80ffff) | (0x7f0000 & (((ia32_therm_interrupt_t )(_fieldval)) << 16))));
}

static inline uint8_t ia32_therm_interrupt_tt2int_extract(ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt2int_extract(ia32_therm_interrupt_t _regval)
{
    return((uint8_t )((_regval & 0x800000) >> 23));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt2int_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_tt2int_insert(ia32_therm_interrupt_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_interrupt_t )((_regval & 0xffffffffff7fffff) | (0x800000 & (((ia32_therm_interrupt_t )(_fieldval)) << 23))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_therm_interrupt_t _regval)
{
    ((_os << (" ht =\t")) << ia32_therm_interrupt_ht_extract(_regval)) << ("\t(High-temperature enable)\n");
    ((_os << (" lt =\t")) << ia32_therm_interrupt_lt_extract(_regval)) << ("\t(Low-temperature enable)\n");
    ((_os << (" prochot =\t")) << ia32_therm_interrupt_prochot_extract(_regval)) << ("\t(PROCHOT# enable)\n");
    ((_os << (" forcpr =\t")) << ia32_therm_interrupt_forcpr_extract(_regval)) << ("\t(FORCEPR# enable)\n");
    ((_os << (" over =\t")) << ia32_therm_interrupt_over_extract(_regval)) << ("\t(Overheat enable)\n");
    ((_os << (" tt1 =\t")) << ia32_therm_interrupt_tt1_extract(_regval)) << ("\t(Thermal threshold 1 value)\n");
    ((_os << (" tt1int =\t")) << ia32_therm_interrupt_tt1int_extract(_regval)) << ("\t(Thermal threshold 1 enable)\n");
    ((_os << (" tt2 =\t")) << ia32_therm_interrupt_tt2_extract(_regval)) << ("\t(Thermal threshold 2 value)\n");
    ((_os << (" tt2int =\t")) << ia32_therm_interrupt_tt2int_extract(_regval)) << ("\t(Thermal threshold 2 enable)\n");
    return(_os);
}

/*
 * Register type: ia32_therm_status_t
 * Description: Implicit type of Thermal status register
 * Fields:
 *   therm	(size 1, offset 0, init 0):	RO	Status flag
 *   thermlg	(size 1, offset 1, init 0):	RWZC	Log flag
 *   porf	(size 1, offset 2, init 0):	RO	PROCHOT# or FORCEPR# asserted
 *   porflg	(size 1, offset 3, init 0):	RWZC	PROCHOT# or FORCEPR# log
 *   cts	(size 1, offset 4, init 0):	RO	Critical temperature status
 *   ctslg	(size 1, offset 5, init 0):	RWZC	Critical temperature log
 *   tt1	(size 1, offset 6, init 0):	RO	Thermal threshold status 1
 *   tt1lg	(size 1, offset 7, init 0):	RWZC	Thermal threshold log 1
 *   tt2	(size 1, offset 8, init 0):	RO	Thermal threshold status 2
 *   tt2lg	(size 1, offset 9, init 0):	RWZC	Thermal threshold log 2
 *   _anon10	(size 6, offset 10, init 0):	RSVD	_
 *   dig	(size 7, offset 16, init 0):	RO	Digital readout in Celsius
 *   _anon23	(size 4, offset 23, init 0):	RSVD	_
 *   res	(size 4, offset 27, init 0):	RO	Resolution in degrees Celsius
 *   rv	(size 1, offset 31, init 0):	RO	Reading valid
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_therm_status_t);
#define ia32_therm_status_default (ia32_therm_status_t )(0x0)
static inline uint8_t ia32_therm_status_therm_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_therm_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_therm_status_t ia32_therm_status_therm_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_therm_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_therm_status_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_therm_status_thermlg_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_thermlg_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_therm_status_t ia32_therm_status_thermlg_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_thermlg_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_therm_status_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_therm_status_porf_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_porf_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x4) >> 2));
}

static inline ia32_therm_status_t ia32_therm_status_porf_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_porf_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffffb) | (0x4 & (((ia32_therm_status_t )(_fieldval)) << 2))));
}

static inline uint8_t ia32_therm_status_porflg_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_porflg_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_therm_status_t ia32_therm_status_porflg_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_porflg_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_therm_status_t )(_fieldval)) << 3))));
}

static inline uint8_t ia32_therm_status_cts_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_cts_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x10) >> 4));
}

static inline ia32_therm_status_t ia32_therm_status_cts_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_cts_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffffffffffef) | (0x10 & (((ia32_therm_status_t )(_fieldval)) << 4))));
}

static inline uint8_t ia32_therm_status_ctslg_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_ctslg_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x20) >> 5));
}

static inline ia32_therm_status_t ia32_therm_status_ctslg_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_ctslg_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffffffffffdf) | (0x20 & (((ia32_therm_status_t )(_fieldval)) << 5))));
}

static inline uint8_t ia32_therm_status_tt1_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt1_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x40) >> 6));
}

static inline ia32_therm_status_t ia32_therm_status_tt1_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_tt1_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffffffffffbf) | (0x40 & (((ia32_therm_status_t )(_fieldval)) << 6))));
}

static inline uint8_t ia32_therm_status_tt1lg_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt1lg_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x80) >> 7));
}

static inline ia32_therm_status_t ia32_therm_status_tt1lg_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_tt1lg_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffffffffff7f) | (0x80 & (((ia32_therm_status_t )(_fieldval)) << 7))));
}

static inline uint8_t ia32_therm_status_tt2_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt2_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_therm_status_t ia32_therm_status_tt2_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_tt2_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_therm_status_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_therm_status_tt2lg_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt2lg_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_therm_status_t ia32_therm_status_tt2lg_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_tt2lg_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xfffffffffffffdff) | (0x200 & (((ia32_therm_status_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_therm_status_dig_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_dig_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x7f0000) >> 16));
}

static inline ia32_therm_status_t ia32_therm_status_dig_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_dig_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffffff80ffff) | (0x7f0000 & (((ia32_therm_status_t )(_fieldval)) << 16))));
}

static inline uint8_t ia32_therm_status_res_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_res_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x78000000) >> 27));
}

static inline ia32_therm_status_t ia32_therm_status_res_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_res_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffff87ffffff) | (0x78000000 & (((ia32_therm_status_t )(_fieldval)) << 27))));
}

static inline uint8_t ia32_therm_status_rv_extract(ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_rv_extract(ia32_therm_status_t _regval)
{
    return((uint8_t )((_regval & 0x80000000) >> 31));
}

static inline ia32_therm_status_t ia32_therm_status_rv_insert(ia32_therm_status_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_rv_insert(ia32_therm_status_t _regval, uint8_t _fieldval)
{
    return((ia32_therm_status_t )((_regval & 0xffffffff7fffffff) | (0x80000000 & (((ia32_therm_status_t )(_fieldval)) << 31))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_therm_status_t _regval)
{
    ((_os << (" therm =\t")) << ia32_therm_status_therm_extract(_regval)) << ("\t(Status flag)\n");
    ((_os << (" thermlg =\t")) << ia32_therm_status_thermlg_extract(_regval)) << ("\t(Log flag)\n");
    ((_os << (" porf =\t")) << ia32_therm_status_porf_extract(_regval)) << ("\t(PROCHOT# or FORCEPR# asserted)\n");
    ((_os << (" porflg =\t")) << ia32_therm_status_porflg_extract(_regval)) << ("\t(PROCHOT# or FORCEPR# log)\n");
    ((_os << (" cts =\t")) << ia32_therm_status_cts_extract(_regval)) << ("\t(Critical temperature status)\n");
    ((_os << (" ctslg =\t")) << ia32_therm_status_ctslg_extract(_regval)) << ("\t(Critical temperature log)\n");
    ((_os << (" tt1 =\t")) << ia32_therm_status_tt1_extract(_regval)) << ("\t(Thermal threshold status 1)\n");
    ((_os << (" tt1lg =\t")) << ia32_therm_status_tt1lg_extract(_regval)) << ("\t(Thermal threshold log 1)\n");
    ((_os << (" tt2 =\t")) << ia32_therm_status_tt2_extract(_regval)) << ("\t(Thermal threshold status 2)\n");
    ((_os << (" tt2lg =\t")) << ia32_therm_status_tt2lg_extract(_regval)) << ("\t(Thermal threshold log 2)\n");
    ((_os << (" dig =\t")) << ia32_therm_status_dig_extract(_regval)) << ("\t(Digital readout in Celsius)\n");
    ((_os << (" res =\t")) << ia32_therm_status_res_extract(_regval)) << ("\t(Resolution in degrees Celsius)\n");
    ((_os << (" rv =\t")) << ia32_therm_status_rv_extract(_regval)) << ("\t(Reading valid)\n");
    return(_os);
}

/*
 * Register type: ia32_amd_perfevtsel_t
 * Description: Perfmon event select
 * Fields:
 *   evsel	(size 8, offset 0, init 0):	NOATTR	Event select
 *   umask	(size 8, offset 8, init 0):	NOATTR	Unit mask
 *   usr	(size 1, offset 16, init 0):	NOATTR	User mode
 *   os	(size 1, offset 17, init 0):	NOATTR	OS mode
 *   e	(size 1, offset 18, init 0):	NOATTR	Edge detect
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   intr	(size 1, offset 20, init 0):	NOATTR	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	NOATTR	Enable counters
 *   inv	(size 1, offset 23, init 0):	NOATTR	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	NOATTR	Counter mask
 *   evsel_hi	(size 4, offset 32, init 0):	NOATTR	Event select Hi
 *   _anon36	(size 4, offset 36, init 0):	RSVD	_
 *   guestonly	(size 1, offset 40, init 0):	NOATTR	Guest only counter
 *   hostonly	(size 1, offset 41, init 0):	NOATTR	Host only counter
 *   _anon42	(size 22, offset 42, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_amd_perfevtsel_t);
#define ia32_amd_perfevtsel_default (ia32_amd_perfevtsel_t )(0x0)
static inline uint8_t ia32_amd_perfevtsel_evsel_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_evsel_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff) >> 0));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_evsel_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_evsel_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffffffffff00) | (0xff & (((ia32_amd_perfevtsel_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_amd_perfevtsel_umask_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_umask_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff00) >> 8));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_umask_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_umask_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffffffff00ff) | (0xff00 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_amd_perfevtsel_usr_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_usr_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x10000) >> 16));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_usr_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_usr_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffffffffeffff) | (0x10000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 16))));
}

static inline uint8_t ia32_amd_perfevtsel_os_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_os_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x20000) >> 17));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_os_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_os_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffffffffdffff) | (0x20000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 17))));
}

static inline uint8_t ia32_amd_perfevtsel_e_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_e_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x40000) >> 18));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_e_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_e_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffffffffbffff) | (0x40000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 18))));
}

static inline uint8_t ia32_amd_perfevtsel_intr_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_intr_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x100000) >> 20));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_intr_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_intr_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffffffefffff) | (0x100000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 20))));
}

static inline uint8_t ia32_amd_perfevtsel_en_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_en_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x400000) >> 22));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_en_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_en_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffffffbfffff) | (0x400000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 22))));
}

static inline uint8_t ia32_amd_perfevtsel_inv_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_inv_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x800000) >> 23));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_inv_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_inv_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffffff7fffff) | (0x800000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 23))));
}

static inline uint8_t ia32_amd_perfevtsel_cmask_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_cmask_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xff000000) >> 24));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_cmask_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_cmask_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xffffffff00ffffff) | (0xff000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 24))));
}

static inline uint8_t ia32_amd_perfevtsel_evsel_hi_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_evsel_hi_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0xf00000000) >> 32));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_evsel_hi_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_evsel_hi_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffff0ffffffff) | (0xf00000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 32))));
}

static inline uint8_t ia32_amd_perfevtsel_guestonly_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_guestonly_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x10000000000) >> 40));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_guestonly_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_guestonly_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffeffffffffff) | (0x10000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 40))));
}

static inline uint8_t ia32_amd_perfevtsel_hostonly_extract(ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel_hostonly_extract(ia32_amd_perfevtsel_t _regval)
{
    return((uint8_t )((_regval & 0x20000000000) >> 41));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_hostonly_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel_hostonly_insert(ia32_amd_perfevtsel_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_perfevtsel_t )((_regval & 0xfffffdffffffffff) | (0x20000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 41))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_amd_perfevtsel_t _regval)
{
    ((_os << (" evsel =\t")) << ia32_amd_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_amd_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_amd_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_amd_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_amd_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    ((_os << (" intr =\t")) << ia32_amd_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    ((_os << (" en =\t")) << ia32_amd_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_amd_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_amd_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    ((_os << (" evsel_hi =\t")) << ia32_amd_perfevtsel_evsel_hi_extract(_regval)) << ("\t(Event select Hi)\n");
    ((_os << (" guestonly =\t")) << ia32_amd_perfevtsel_guestonly_extract(_regval)) << ("\t(Guest only counter)\n");
    ((_os << (" hostonly =\t")) << ia32_amd_perfevtsel_hostonly_extract(_regval)) << ("\t(Host only counter)\n");
    return(_os);
}

/*
 * Register type: ia32_amd_hwcr_t
 * Description: Implicit type of Hardware Configuration register
 * Fields:
 *   smmlock	(size 1, offset 0, init 0):	RW	SMM code lock
 *   slowfence	(size 1, offset 1, init 0):	RW	Slow SFENCE Enable
 *   _anon2	(size 1, offset 2, init 0):	MBZ	_
 *   tlbcachedis	(size 1, offset 3, init 0):	RW	Cacheable Memory Disable
 *   invd_wbinvd	(size 1, offset 4, init 0):	RW	INVD to WBINVD conversion
 *   _anon5	(size 1, offset 5, init 0):	RSVD	_
 *   ffdis	(size 1, offset 6, init 0):	RW	TLB flush filter disable
 *   dislock	(size 1, offset 7, init 0):	RW	Disable x86 LOCK prefix functionality
 *   ignneem	(size 1, offset 8, init 0):	RW	IGNNE port emulation enable
 *   monmwaitdis	(size 1, offset 9, init 0):	RW	MONITOR and MWAIT disable
 *   monmwaituseren	(size 1, offset 10, init 0):	RW	MONITOR/MWAIT user mode enable
 *   limitcpuidstdmaxval	(size 1, offset 11, init 0):	RW	Limit CPUID standard maximum value
 *   hltxspcycen	(size 1, offset 12, init 0):	RW	Halt-exit special bus cycle enable
 *   smispcycdis	(size 1, offset 13, init 0):	RW	SMI special bus cycle disable
 *   rsmspcycdis	(size 1, offset 14, init 0):	RW	RSM special bus cycle disable
 *   ssedis	(size 1, offset 15, init 0):	RW	SSE instructions disable
 *   _anon16	(size 1, offset 16, init 0):	RSVD	_
 *   wrap32dis	(size 1, offset 17, init 0):	RW	32-bit address wrap disable
 *   mcstatuswren	(size 1, offset 18, init 0):	RW	Machine check status write enable
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   iocfggpfault	(size 1, offset 20, init 0):	RW	IO-space configuration cause GP fault
 *   misalignssedis	(size 1, offset 21, init 0):	RW	Misaligned SSE mode disable
 *   _anon22	(size 1, offset 22, init 0):	RSVD	_
 *   forceusrdwrszprb	(size 1, offset 23, init 0):	RW	Force probes for upstream RdSized/WrSized
 *   tscfreqsel	(size 1, offset 24, init 0):	RW	TSC frequency select
 *   _anon25	(size 39, offset 25, init 0):	RSVD	_
 */
HOH_STRONG_TYPEDEF( uint64_t , ia32_amd_hwcr_t);
#define ia32_amd_hwcr_default (ia32_amd_hwcr_t )(0x0)
static inline uint8_t ia32_amd_hwcr_smmlock_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_smmlock_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x1) >> 0));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_smmlock_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_smmlock_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffffe) | (0x1 & (((ia32_amd_hwcr_t )(_fieldval)) << 0))));
}

static inline uint8_t ia32_amd_hwcr_slowfence_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_slowfence_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x2) >> 1));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_slowfence_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_slowfence_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffffd) | (0x2 & (((ia32_amd_hwcr_t )(_fieldval)) << 1))));
}

static inline uint8_t ia32_amd_hwcr_tlbcachedis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_tlbcachedis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x8) >> 3));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_tlbcachedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_tlbcachedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffff7) | (0x8 & (((ia32_amd_hwcr_t )(_fieldval)) << 3))));
}

static inline uint8_t ia32_amd_hwcr_invd_wbinvd_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_invd_wbinvd_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x10) >> 4));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_invd_wbinvd_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_invd_wbinvd_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffffef) | (0x10 & (((ia32_amd_hwcr_t )(_fieldval)) << 4))));
}

static inline uint8_t ia32_amd_hwcr_ffdis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ffdis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x40) >> 6));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_ffdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_ffdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffffbf) | (0x40 & (((ia32_amd_hwcr_t )(_fieldval)) << 6))));
}

static inline uint8_t ia32_amd_hwcr_dislock_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_dislock_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x80) >> 7));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_dislock_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_dislock_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffff7f) | (0x80 & (((ia32_amd_hwcr_t )(_fieldval)) << 7))));
}

static inline uint8_t ia32_amd_hwcr_ignneem_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ignneem_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x100) >> 8));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_ignneem_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_ignneem_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffeff) | (0x100 & (((ia32_amd_hwcr_t )(_fieldval)) << 8))));
}

static inline uint8_t ia32_amd_hwcr_monmwaitdis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_monmwaitdis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x200) >> 9));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_monmwaitdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_monmwaitdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffdff) | (0x200 & (((ia32_amd_hwcr_t )(_fieldval)) << 9))));
}

static inline uint8_t ia32_amd_hwcr_monmwaituseren_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_monmwaituseren_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x400) >> 10));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_monmwaituseren_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_monmwaituseren_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffffbff) | (0x400 & (((ia32_amd_hwcr_t )(_fieldval)) << 10))));
}

static inline uint8_t ia32_amd_hwcr_limitcpuidstdmaxval_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_limitcpuidstdmaxval_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x800) >> 11));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_limitcpuidstdmaxval_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_limitcpuidstdmaxval_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffff7ff) | (0x800 & (((ia32_amd_hwcr_t )(_fieldval)) << 11))));
}

static inline uint8_t ia32_amd_hwcr_hltxspcycen_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_hltxspcycen_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x1000) >> 12));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_hltxspcycen_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_hltxspcycen_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffefff) | (0x1000 & (((ia32_amd_hwcr_t )(_fieldval)) << 12))));
}

static inline uint8_t ia32_amd_hwcr_smispcycdis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_smispcycdis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x2000) >> 13));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_smispcycdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_smispcycdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffdfff) | (0x2000 & (((ia32_amd_hwcr_t )(_fieldval)) << 13))));
}

static inline uint8_t ia32_amd_hwcr_rsmspcycdis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_rsmspcycdis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x4000) >> 14));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_rsmspcycdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_rsmspcycdis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffffbfff) | (0x4000 & (((ia32_amd_hwcr_t )(_fieldval)) << 14))));
}

static inline uint8_t ia32_amd_hwcr_ssedis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ssedis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x8000) >> 15));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_ssedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_ssedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffff7fff) | (0x8000 & (((ia32_amd_hwcr_t )(_fieldval)) << 15))));
}

static inline uint8_t ia32_amd_hwcr_wrap32dis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_wrap32dis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x20000) >> 17));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_wrap32dis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_wrap32dis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffdffff) | (0x20000 & (((ia32_amd_hwcr_t )(_fieldval)) << 17))));
}

static inline uint8_t ia32_amd_hwcr_mcstatuswren_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_mcstatuswren_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x40000) >> 18));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_mcstatuswren_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_mcstatuswren_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffffbffff) | (0x40000 & (((ia32_amd_hwcr_t )(_fieldval)) << 18))));
}

static inline uint8_t ia32_amd_hwcr_iocfggpfault_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_iocfggpfault_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x100000) >> 20));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_iocfggpfault_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_iocfggpfault_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffefffff) | (0x100000 & (((ia32_amd_hwcr_t )(_fieldval)) << 20))));
}

static inline uint8_t ia32_amd_hwcr_misalignssedis_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_misalignssedis_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x200000) >> 21));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_misalignssedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_misalignssedis_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffffdfffff) | (0x200000 & (((ia32_amd_hwcr_t )(_fieldval)) << 21))));
}

static inline uint8_t ia32_amd_hwcr_forceusrdwrszprb_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_forceusrdwrszprb_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x800000) >> 23));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_forceusrdwrszprb_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_forceusrdwrszprb_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xffffffffff7fffff) | (0x800000 & (((ia32_amd_hwcr_t )(_fieldval)) << 23))));
}

static inline uint8_t ia32_amd_hwcr_tscfreqsel_extract(ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_tscfreqsel_extract(ia32_amd_hwcr_t _regval)
{
    return((uint8_t )((_regval & 0x1000000) >> 24));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_tscfreqsel_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_tscfreqsel_insert(ia32_amd_hwcr_t _regval, uint8_t _fieldval)
{
    return((ia32_amd_hwcr_t )((_regval & 0xfffffffffeffffff) | (0x1000000 & (((ia32_amd_hwcr_t )(_fieldval)) << 24))));
}

static inline dout_t& operator<<(dout_t& _os, ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_amd_hwcr_t _regval)
{
    ((_os << (" smmlock =\t")) << ia32_amd_hwcr_smmlock_extract(_regval)) << ("\t(SMM code lock)\n");
    ((_os << (" slowfence =\t")) << ia32_amd_hwcr_slowfence_extract(_regval)) << ("\t(Slow SFENCE Enable)\n");
    ((_os << (" tlbcachedis =\t")) << ia32_amd_hwcr_tlbcachedis_extract(_regval)) << ("\t(Cacheable Memory Disable)\n");
    ((_os << (" invd_wbinvd =\t")) << ia32_amd_hwcr_invd_wbinvd_extract(_regval)) << ("\t(INVD to WBINVD conversion)\n");
    ((_os << (" ffdis =\t")) << ia32_amd_hwcr_ffdis_extract(_regval)) << ("\t(TLB flush filter disable)\n");
    ((_os << (" dislock =\t")) << ia32_amd_hwcr_dislock_extract(_regval)) << ("\t(Disable x86 LOCK prefix functionality)\n");
    ((_os << (" ignneem =\t")) << ia32_amd_hwcr_ignneem_extract(_regval)) << ("\t(IGNNE port emulation enable)\n");
    ((_os << (" monmwaitdis =\t")) << ia32_amd_hwcr_monmwaitdis_extract(_regval)) << ("\t(MONITOR and MWAIT disable)\n");
    ((_os << (" monmwaituseren =\t")) << ia32_amd_hwcr_monmwaituseren_extract(_regval)) << ("\t(MONITOR/MWAIT user mode enable)\n");
    ((_os << (" limitcpuidstdmaxval =\t")) << ia32_amd_hwcr_limitcpuidstdmaxval_extract(_regval)) << ("\t(Limit CPUID standard maximum value)\n");
    ((_os << (" hltxspcycen =\t")) << ia32_amd_hwcr_hltxspcycen_extract(_regval)) << ("\t(Halt-exit special bus cycle enable)\n");
    ((_os << (" smispcycdis =\t")) << ia32_amd_hwcr_smispcycdis_extract(_regval)) << ("\t(SMI special bus cycle disable)\n");
    ((_os << (" rsmspcycdis =\t")) << ia32_amd_hwcr_rsmspcycdis_extract(_regval)) << ("\t(RSM special bus cycle disable)\n");
    ((_os << (" ssedis =\t")) << ia32_amd_hwcr_ssedis_extract(_regval)) << ("\t(SSE instructions disable)\n");
    ((_os << (" wrap32dis =\t")) << ia32_amd_hwcr_wrap32dis_extract(_regval)) << ("\t(32-bit address wrap disable)\n");
    ((_os << (" mcstatuswren =\t")) << ia32_amd_hwcr_mcstatuswren_extract(_regval)) << ("\t(Machine check status write enable)\n");
    ((_os << (" iocfggpfault =\t")) << ia32_amd_hwcr_iocfggpfault_extract(_regval)) << ("\t(IO-space configuration cause GP fault)\n");
    ((_os << (" misalignssedis =\t")) << ia32_amd_hwcr_misalignssedis_extract(_regval)) << ("\t(Misaligned SSE mode disable)\n");
    ((_os << (" forceusrdwrszprb =\t")) << ia32_amd_hwcr_forceusrdwrszprb_extract(_regval)) << ("\t(Force probes for upstream RdSized/WrSized)\n");
    ((_os << (" tscfreqsel =\t")) << ia32_amd_hwcr_tscfreqsel_extract(_regval)) << ("\t(TSC frequency select)\n");
    return(_os);
}

/*
 * Data type: ia32_descriptor_t
 * Description: GDT
 * Fields:
 *   limit	(size 16, offset 0, init 0):	RW	limit
 *   base	(size 32, offset 16, init 0):	RW	base
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_descriptor_t);
typedef uint8_t ia32_descriptor_array_t[6];
static const size_t ia32_descriptor_size = sizeof(ia32_descriptor_array_t );
static inline uint16_t ia32_descriptor_limit_extract(ia32_descriptor_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_descriptor_limit_extract(ia32_descriptor_t _dtptr)
{
    return(((*((uint16_t *)(0 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_descriptor_limit_insert(ia32_descriptor_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_descriptor_limit_insert(ia32_descriptor_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(0 + _dtptr)) = (((*((uint16_t *)(0 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline uint32_t ia32_descriptor_base_extract(ia32_descriptor_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_descriptor_base_extract(ia32_descriptor_t _dtptr)
{
    return(((*((uint64_t *)(0 + _dtptr))) & 0xffffffff0000) >> 16);
}

static inline void ia32_descriptor_base_insert(ia32_descriptor_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_descriptor_base_insert(ia32_descriptor_t _dtptr, uint32_t _fieldval)
{
    *((uint64_t *)(0 + _dtptr)) = (((*((uint64_t *)(0 + _dtptr))) & 0xffff00000000ffff) | (0xffffffff0000 & (_fieldval << 16)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_descriptor_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_descriptor_t _regval)
{
    ((_os << (" limit =\t")) << ia32_descriptor_limit_extract(_regval)) << ("\t(limit)\n");
    ((_os << (" base =\t")) << ia32_descriptor_base_extract(_regval)) << ("\t(base)\n");
    return(_os);
}

/*
 * Data type: ia32_gdt_t
 * Description: GDT
 * Fields:
 *   limit_lo	(size 16, offset 0, init 0):	RW	limit low
 *   base_lo	(size 16, offset 16, init 0):	RW	base low
 *   base_mi	(size 8, offset 32, init 0):	RW	base middle
 *   access	(size 8, offset 40, init 0):	RW	Access
 *   limit_hi	(size 4, offset 48, init 0):	RW	limit high
 *   gran	(size 4, offset 52, init 0):	RW	Granularity
 *   base_hi	(size 8, offset 56, init 0):	RW	Base high
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_gdt_t);
typedef uint8_t ia32_gdt_array_t[8];
static const size_t ia32_gdt_size = sizeof(ia32_gdt_array_t );
static inline uint16_t ia32_gdt_limit_lo_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_gdt_limit_lo_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint16_t *)(0 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_gdt_limit_lo_insert(ia32_gdt_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_limit_lo_insert(ia32_gdt_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(0 + _dtptr)) = (((*((uint16_t *)(0 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline uint16_t ia32_gdt_base_lo_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_gdt_base_lo_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint16_t *)(2 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_gdt_base_lo_insert(ia32_gdt_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_base_lo_insert(ia32_gdt_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(2 + _dtptr)) = (((*((uint16_t *)(2 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline uint8_t ia32_gdt_base_mi_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_gdt_base_mi_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint8_t *)(4 + _dtptr))) & 0xff) >> 0);
}

static inline void ia32_gdt_base_mi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_base_mi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(4 + _dtptr)) = (((*((uint8_t *)(4 + _dtptr))) & 0x0) | (0xff & (_fieldval << 0)));
}

static inline uint8_t ia32_gdt_access_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_gdt_access_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint8_t *)(5 + _dtptr))) & 0xff) >> 0);
}

static inline void ia32_gdt_access_insert(ia32_gdt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_access_insert(ia32_gdt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(5 + _dtptr)) = (((*((uint8_t *)(5 + _dtptr))) & 0x0) | (0xff & (_fieldval << 0)));
}

static inline uint8_t ia32_gdt_limit_hi_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_gdt_limit_hi_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint8_t *)(6 + _dtptr))) & 0xf) >> 0);
}

static inline void ia32_gdt_limit_hi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_limit_hi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(6 + _dtptr)) = (((*((uint8_t *)(6 + _dtptr))) & 0xf0) | (0xf & (_fieldval << 0)));
}

static inline uint8_t ia32_gdt_gran_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_gdt_gran_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint8_t *)(6 + _dtptr))) & 0xf0) >> 4);
}

static inline void ia32_gdt_gran_insert(ia32_gdt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_gran_insert(ia32_gdt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(6 + _dtptr)) = (((*((uint8_t *)(6 + _dtptr))) & 0xf) | (0xf0 & (_fieldval << 4)));
}

static inline uint8_t ia32_gdt_base_hi_extract(ia32_gdt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_gdt_base_hi_extract(ia32_gdt_t _dtptr)
{
    return(((*((uint8_t *)(7 + _dtptr))) & 0xff) >> 0);
}

static inline void ia32_gdt_base_hi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_gdt_base_hi_insert(ia32_gdt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(7 + _dtptr)) = (((*((uint8_t *)(7 + _dtptr))) & 0x0) | (0xff & (_fieldval << 0)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_gdt_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_gdt_t _regval)
{
    ((_os << (" limit_lo =\t")) << ia32_gdt_limit_lo_extract(_regval)) << ("\t(limit low)\n");
    ((_os << (" base_lo =\t")) << ia32_gdt_base_lo_extract(_regval)) << ("\t(base low)\n");
    ((_os << (" base_mi =\t")) << ia32_gdt_base_mi_extract(_regval)) << ("\t(base middle)\n");
    ((_os << (" access =\t")) << ia32_gdt_access_extract(_regval)) << ("\t(Access)\n");
    ((_os << (" limit_hi =\t")) << ia32_gdt_limit_hi_extract(_regval)) << ("\t(limit high)\n");
    ((_os << (" gran =\t")) << ia32_gdt_gran_extract(_regval)) << ("\t(Granularity)\n");
    ((_os << (" base_hi =\t")) << ia32_gdt_base_hi_extract(_regval)) << ("\t(Base high)\n");
    return(_os);
}

/*
 * Data type: ia32_idt_t
 * Description: IDT
 * Fields:
 *   base_lo	(size 16, offset 0, init 0):	RW	base low
 *   sel	(size 16, offset 16, init 0):	RW	Segment selector
 *   _anon32	(size 8, offset 32, init 0):	MBZ	_
 *   flags	(size 8, offset 40, init 0):	RW	Flags
 *   base_hi	(size 16, offset 48, init 0):	RW	base high
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_idt_t);
typedef uint8_t ia32_idt_array_t[8];
static const size_t ia32_idt_size = sizeof(ia32_idt_array_t );
static inline uint16_t ia32_idt_base_lo_extract(ia32_idt_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_idt_base_lo_extract(ia32_idt_t _dtptr)
{
    return(((*((uint16_t *)(0 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_idt_base_lo_insert(ia32_idt_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_idt_base_lo_insert(ia32_idt_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(0 + _dtptr)) = (((*((uint16_t *)(0 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline uint16_t ia32_idt_sel_extract(ia32_idt_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_idt_sel_extract(ia32_idt_t _dtptr)
{
    return(((*((uint16_t *)(2 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_idt_sel_insert(ia32_idt_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_idt_sel_insert(ia32_idt_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(2 + _dtptr)) = (((*((uint16_t *)(2 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline uint8_t ia32_idt_flags_extract(ia32_idt_t _dtptr) __attribute__ ((always_inline));
static inline uint8_t ia32_idt_flags_extract(ia32_idt_t _dtptr)
{
    return(((*((uint8_t *)(5 + _dtptr))) & 0xff) >> 0);
}

static inline void ia32_idt_flags_insert(ia32_idt_t _dtptr, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_idt_flags_insert(ia32_idt_t _dtptr, uint8_t _fieldval)
{
    *((uint8_t *)(5 + _dtptr)) = (((*((uint8_t *)(5 + _dtptr))) & 0x0) | (0xff & (_fieldval << 0)));
}

static inline uint16_t ia32_idt_base_hi_extract(ia32_idt_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_idt_base_hi_extract(ia32_idt_t _dtptr)
{
    return(((*((uint16_t *)(6 + _dtptr))) & 0xffff) >> 0);
}

static inline void ia32_idt_base_hi_insert(ia32_idt_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_idt_base_hi_insert(ia32_idt_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(6 + _dtptr)) = (((*((uint16_t *)(6 + _dtptr))) & 0x0) | (0xffff & (_fieldval << 0)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_idt_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_idt_t _regval)
{
    ((_os << (" base_lo =\t")) << ia32_idt_base_lo_extract(_regval)) << ("\t(base low)\n");
    ((_os << (" sel =\t")) << ia32_idt_sel_extract(_regval)) << ("\t(Segment selector)\n");
    ((_os << (" flags =\t")) << ia32_idt_flags_extract(_regval)) << ("\t(Flags)\n");
    ((_os << (" base_hi =\t")) << ia32_idt_base_hi_extract(_regval)) << ("\t(base high)\n");
    return(_os);
}

/*
 * Data type: ia32_tss_t
 * Description: TSS
 * Fields:
 *   link	(size 32, offset 0, init 0):	RW	link
 *   esp0	(size 32, offset 32, init 0):	RW	esp0
 *   ss0	(size 32, offset 64, init 0):	RW	ss0
 *   esp1	(size 32, offset 96, init 0):	RW	esp1
 *   ss1	(size 32, offset 128, init 0):	RW	ss1
 *   esp2	(size 32, offset 160, init 0):	RW	esp2
 *   ss2	(size 32, offset 192, init 0):	RW	ss2
 *   cr3	(size 32, offset 224, init 0):	RW	cr3
 *   eip	(size 32, offset 256, init 0):	RW	eip
 *   eflags	(size 32, offset 288, init 0):	RW	eflags
 *   eax	(size 32, offset 320, init 0):	RW	eax
 *   ecx	(size 32, offset 352, init 0):	RW	ecx
 *   edx	(size 32, offset 384, init 0):	RW	edx
 *   ebx	(size 32, offset 416, init 0):	RW	ebx
 *   esp	(size 32, offset 448, init 0):	RW	esp
 *   ebp	(size 32, offset 480, init 0):	RW	ebp
 *   esi	(size 32, offset 512, init 0):	RW	esi
 *   edi	(size 32, offset 544, init 0):	RW	edi
 *   es	(size 32, offset 576, init 0):	RW	es
 *   cs	(size 32, offset 608, init 0):	RW	cs
 *   ss	(size 32, offset 640, init 0):	RW	ss
 *   ds	(size 32, offset 672, init 0):	RW	ds
 *   fs	(size 32, offset 704, init 0):	RW	fs
 *   gs	(size 32, offset 736, init 0):	RW	gs
 *   ldtr	(size 32, offset 768, init 0):	RW	ldtr
 *   iopb_offset	(size 32, offset 800, init 0):	RW	iopb_offset
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_tss_t);
typedef uint8_t ia32_tss_array_t[104];
static const size_t ia32_tss_size = sizeof(ia32_tss_array_t );
static inline uint32_t ia32_tss_link_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_link_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(0 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_link_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_link_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(0 + _dtptr)) = (((*((uint32_t *)(0 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_esp0_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_esp0_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(4 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_esp0_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_esp0_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(4 + _dtptr)) = (((*((uint32_t *)(4 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ss0_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ss0_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(8 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ss0_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ss0_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(8 + _dtptr)) = (((*((uint32_t *)(8 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_esp1_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_esp1_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(12 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_esp1_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_esp1_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(12 + _dtptr)) = (((*((uint32_t *)(12 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ss1_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ss1_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(16 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ss1_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ss1_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(16 + _dtptr)) = (((*((uint32_t *)(16 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_esp2_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_esp2_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(20 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_esp2_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_esp2_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(20 + _dtptr)) = (((*((uint32_t *)(20 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ss2_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ss2_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(24 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ss2_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ss2_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(24 + _dtptr)) = (((*((uint32_t *)(24 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_cr3_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_cr3_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(28 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_cr3_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_cr3_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(28 + _dtptr)) = (((*((uint32_t *)(28 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_eip_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_eip_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(32 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_eip_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_eip_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(32 + _dtptr)) = (((*((uint32_t *)(32 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_eflags_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_eflags_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(36 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_eflags_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_eflags_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(36 + _dtptr)) = (((*((uint32_t *)(36 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_eax_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_eax_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(40 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_eax_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_eax_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(40 + _dtptr)) = (((*((uint32_t *)(40 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ecx_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ecx_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(44 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ecx_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ecx_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(44 + _dtptr)) = (((*((uint32_t *)(44 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_edx_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_edx_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(48 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_edx_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_edx_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(48 + _dtptr)) = (((*((uint32_t *)(48 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ebx_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ebx_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(52 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ebx_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ebx_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(52 + _dtptr)) = (((*((uint32_t *)(52 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_esp_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_esp_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(56 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_esp_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_esp_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(56 + _dtptr)) = (((*((uint32_t *)(56 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ebp_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ebp_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(60 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ebp_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ebp_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(60 + _dtptr)) = (((*((uint32_t *)(60 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_esi_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_esi_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(64 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_esi_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_esi_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(64 + _dtptr)) = (((*((uint32_t *)(64 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_edi_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_edi_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(68 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_edi_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_edi_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(68 + _dtptr)) = (((*((uint32_t *)(68 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_es_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_es_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(72 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_es_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_es_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(72 + _dtptr)) = (((*((uint32_t *)(72 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_cs_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_cs_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(76 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_cs_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_cs_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(76 + _dtptr)) = (((*((uint32_t *)(76 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ss_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ss_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(80 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ss_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ss_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(80 + _dtptr)) = (((*((uint32_t *)(80 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ds_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ds_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(84 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ds_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ds_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(84 + _dtptr)) = (((*((uint32_t *)(84 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_fs_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_fs_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(88 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_fs_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_fs_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(88 + _dtptr)) = (((*((uint32_t *)(88 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_gs_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_gs_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(92 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_gs_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_gs_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(92 + _dtptr)) = (((*((uint32_t *)(92 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_ldtr_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_ldtr_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(96 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_ldtr_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_ldtr_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(96 + _dtptr)) = (((*((uint32_t *)(96 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline uint32_t ia32_tss_iopb_offset_extract(ia32_tss_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_tss_iopb_offset_extract(ia32_tss_t _dtptr)
{
    return(((*((uint32_t *)(100 + _dtptr))) & 0xffffffff) >> 0);
}

static inline void ia32_tss_iopb_offset_insert(ia32_tss_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_tss_iopb_offset_insert(ia32_tss_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(100 + _dtptr)) = (((*((uint32_t *)(100 + _dtptr))) & 0x0) | (0xffffffff & (_fieldval << 0)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_tss_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_tss_t _regval)
{
    ((_os << (" link =\t")) << ia32_tss_link_extract(_regval)) << ("\t(link)\n");
    ((_os << (" esp0 =\t")) << ia32_tss_esp0_extract(_regval)) << ("\t(esp0)\n");
    ((_os << (" ss0 =\t")) << ia32_tss_ss0_extract(_regval)) << ("\t(ss0)\n");
    ((_os << (" esp1 =\t")) << ia32_tss_esp1_extract(_regval)) << ("\t(esp1)\n");
    ((_os << (" ss1 =\t")) << ia32_tss_ss1_extract(_regval)) << ("\t(ss1)\n");
    ((_os << (" esp2 =\t")) << ia32_tss_esp2_extract(_regval)) << ("\t(esp2)\n");
    ((_os << (" ss2 =\t")) << ia32_tss_ss2_extract(_regval)) << ("\t(ss2)\n");
    ((_os << (" cr3 =\t")) << ia32_tss_cr3_extract(_regval)) << ("\t(cr3)\n");
    ((_os << (" eip =\t")) << ia32_tss_eip_extract(_regval)) << ("\t(eip)\n");
    ((_os << (" eflags =\t")) << ia32_tss_eflags_extract(_regval)) << ("\t(eflags)\n");
    ((_os << (" eax =\t")) << ia32_tss_eax_extract(_regval)) << ("\t(eax)\n");
    ((_os << (" ecx =\t")) << ia32_tss_ecx_extract(_regval)) << ("\t(ecx)\n");
    ((_os << (" edx =\t")) << ia32_tss_edx_extract(_regval)) << ("\t(edx)\n");
    ((_os << (" ebx =\t")) << ia32_tss_ebx_extract(_regval)) << ("\t(ebx)\n");
    ((_os << (" esp =\t")) << ia32_tss_esp_extract(_regval)) << ("\t(esp)\n");
    ((_os << (" ebp =\t")) << ia32_tss_ebp_extract(_regval)) << ("\t(ebp)\n");
    ((_os << (" esi =\t")) << ia32_tss_esi_extract(_regval)) << ("\t(esi)\n");
    ((_os << (" edi =\t")) << ia32_tss_edi_extract(_regval)) << ("\t(edi)\n");
    ((_os << (" es =\t")) << ia32_tss_es_extract(_regval)) << ("\t(es)\n");
    ((_os << (" cs =\t")) << ia32_tss_cs_extract(_regval)) << ("\t(cs)\n");
    ((_os << (" ss =\t")) << ia32_tss_ss_extract(_regval)) << ("\t(ss)\n");
    ((_os << (" ds =\t")) << ia32_tss_ds_extract(_regval)) << ("\t(ds)\n");
    ((_os << (" fs =\t")) << ia32_tss_fs_extract(_regval)) << ("\t(fs)\n");
    ((_os << (" gs =\t")) << ia32_tss_gs_extract(_regval)) << ("\t(gs)\n");
    ((_os << (" ldtr =\t")) << ia32_tss_ldtr_extract(_regval)) << ("\t(ldtr)\n");
    ((_os << (" iopb_offset =\t")) << ia32_tss_iopb_offset_extract(_regval)) << ("\t(iopb_offset)\n");
    return(_os);
}

/*
 * Data type: ia32_pte_4k_t
 * Description: Page Table Entry virtual address 
 * Fields:
 *   flags	(size 12, offset 0, init 0):	RW	Flags
 *   base	(size 20, offset 12, init 0):	RW	Base
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_pte_4k_t);
typedef uint8_t ia32_pte_4k_array_t[4];
static const size_t ia32_pte_4k_size = sizeof(ia32_pte_4k_array_t );
static inline uint16_t ia32_pte_4k_flags_extract(ia32_pte_4k_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_pte_4k_flags_extract(ia32_pte_4k_t _dtptr)
{
    return(((*((uint16_t *)(0 + _dtptr))) & 0xfff) >> 0);
}

static inline void ia32_pte_4k_flags_insert(ia32_pte_4k_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_pte_4k_flags_insert(ia32_pte_4k_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(0 + _dtptr)) = (((*((uint16_t *)(0 + _dtptr))) & 0xf000) | (0xfff & (_fieldval << 0)));
}

static inline uint32_t ia32_pte_4k_base_extract(ia32_pte_4k_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_pte_4k_base_extract(ia32_pte_4k_t _dtptr)
{
    return(((*((uint32_t *)(0 + _dtptr))) & 0xfffff000) >> 12);
}

static inline void ia32_pte_4k_base_insert(ia32_pte_4k_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_pte_4k_base_insert(ia32_pte_4k_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(0 + _dtptr)) = (((*((uint32_t *)(0 + _dtptr))) & 0xfff) | (0xfffff000 & (_fieldval << 12)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_pte_4k_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_pte_4k_t _regval)
{
    ((_os << (" flags =\t")) << ia32_pte_4k_flags_extract(_regval)) << ("\t(Flags)\n");
    ((_os << (" base =\t")) << ia32_pte_4k_base_extract(_regval)) << ("\t(Base)\n");
    return(_os);
}

/*
 * Data type: ia32_pde_4k_t
 * Description: Page Directory Entry
 * Fields:
 *   flags	(size 12, offset 0, init 0):	RW	Flags
 *   base	(size 20, offset 12, init 0):	RW	Base
 */
HOH_STRONG_TYPEDEF( uint8_t *, ia32_pde_4k_t);
typedef uint8_t ia32_pde_4k_array_t[4];
static const size_t ia32_pde_4k_size = sizeof(ia32_pde_4k_array_t );
static inline uint16_t ia32_pde_4k_flags_extract(ia32_pde_4k_t _dtptr) __attribute__ ((always_inline));
static inline uint16_t ia32_pde_4k_flags_extract(ia32_pde_4k_t _dtptr)
{
    return(((*((uint16_t *)(0 + _dtptr))) & 0xfff) >> 0);
}

static inline void ia32_pde_4k_flags_insert(ia32_pde_4k_t _dtptr, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_pde_4k_flags_insert(ia32_pde_4k_t _dtptr, uint16_t _fieldval)
{
    *((uint16_t *)(0 + _dtptr)) = (((*((uint16_t *)(0 + _dtptr))) & 0xf000) | (0xfff & (_fieldval << 0)));
}

static inline uint32_t ia32_pde_4k_base_extract(ia32_pde_4k_t _dtptr) __attribute__ ((always_inline));
static inline uint32_t ia32_pde_4k_base_extract(ia32_pde_4k_t _dtptr)
{
    return(((*((uint32_t *)(0 + _dtptr))) & 0xfffff000) >> 12);
}

static inline void ia32_pde_4k_base_insert(ia32_pde_4k_t _dtptr, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_pde_4k_base_insert(ia32_pde_4k_t _dtptr, uint32_t _fieldval)
{
    *((uint32_t *)(0 + _dtptr)) = (((*((uint32_t *)(0 + _dtptr))) & 0xfff) | (0xfffff000 & (_fieldval << 12)));
}

static inline dout_t& operator<<(dout_t& _os, ia32_pde_4k_t _regval) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, ia32_pde_4k_t _regval)
{
    ((_os << (" flags =\t")) << ia32_pde_4k_flags_extract(_regval)) << ("\t(Flags)\n");
    ((_os << (" base =\t")) << ia32_pde_4k_base_extract(_regval)) << ("\t(Base)\n");
    return(_os);
}

/*
 * Device representation structure
 */
struct __DN(t) {
};

/*
 * Initial register values (currently 0)
 */
enum ia32_initials {
    ia32_mon_filter_size_initial = 0x0,
    ia32_platform_id_initial = 0x0,
    ia32_apic_base_initial = 0x0,
    ia32_feature_cntl_initial = 0x0,
    ia32_bios_updt_trig_initial = 0x0,
    ia32_bios_sign_id_initial = 0x0,
    ia32_smm_monitor_ctl_initial = 0x0,
    ia32_misc_enable_initial = 0x0,
    ia32_p5_mc_addr_initial = 0x0,
    ia32_p5_mc_type_initial = 0x0,
    ia32_mcg_cap_initial = 0x0,
    ia32_mcg_status_initial = 0x0,
    ia32_mcg_ctl_initial = 0x0,
    ia32_mcg_rax_initial = 0x0,
    ia32_mcg_rbx_initial = 0x0,
    ia32_mcg_rcx_initial = 0x0,
    ia32_mcg_rdx_initial = 0x0,
    ia32_mcg_rsi_initial = 0x0,
    ia32_mcg_rdi_initial = 0x0,
    ia32_mcg_rbp_initial = 0x0,
    ia32_mcg_rsp_initial = 0x0,
    ia32_mcg_rflags_initial = 0x0,
    ia32_mcg_rip_initial = 0x0,
    ia32_mcg_misc_initial = 0x0,
    ia32_mcg_r8_initial = 0x0,
    ia32_mcg_r9_initial = 0x0,
    ia32_mcg_r10_initial = 0x0,
    ia32_mcg_r11_initial = 0x0,
    ia32_mcg_r12_initial = 0x0,
    ia32_mcg_r13_initial = 0x0,
    ia32_mcg_r14_initial = 0x0,
    ia32_mcg_r15_initial = 0x0,
    ia32_mc_ctl_initial = 0x0,
    ia32_mc_status_initial = 0x0,
    ia32_mc_addr_initial = 0x0,
    ia32_mc_misc_initial = 0x0,
    ia32_debugctl_initial = 0x0,
    ia32_tsc_initial = 0x0,
    ia32_pmc0_initial = 0x0,
    ia32_pmc1_initial = 0x0,
    ia32_perfevtsel0_initial = 0x0,
    ia32_perfevtsel1_initial = 0x0,
    ia32_fixed_ctr0_initial = 0x0,
    ia32_fixed_ctr1_initial = 0x0,
    ia32_fixed_ctr2_initial = 0x0,
    ia32_fixed_ctr_ctl_initial = 0x0,
    ia32_perf_global_status_initial = 0x0,
    ia32_perf_global_over_initial = 0x0,
    ia32_perf_global_ctrl_initial = 0x0,
    ia32_pebs_enable_initial = 0x0,
    ia32_efer_initial = 0x0,
    ia32_star_initial = 0x0,
    ia32_lstar_initial = 0x0,
    ia32_fmask_initial = 0x0,
    ia32_fs_base_initial = 0x0,
    ia32_gs_base_initial = 0x0,
    ia32_kernel_gs_base_initial = 0x0,
    ia32_mtrrcap_initial = 0x0,
    ia32_mtrr_def_type_initial = 0x0,
    ia32_mtrr_physbase_initial = 0x0,
    ia32_mtrr_physmask_initial = 0x0,
    ia32_mtrr_fix64k_00000_initial = 0x0,
    ia32_mtrr_fix16k_80000_initial = 0x0,
    ia32_mtrr_fix16k_a0000_initial = 0x0,
    ia32_mtrr_fix4k_c0000_initial = 0x0,
    ia32_mtrr_fix4k_c8000_initial = 0x0,
    ia32_mtrr_fix4k_d0000_initial = 0x0,
    ia32_mtrr_fix4k_d8000_initial = 0x0,
    ia32_mtrr_fix4k_e0000_initial = 0x0,
    ia32_mtrr_fix4k_e8000_initial = 0x0,
    ia32_mtrr_fix4k_f0000_initial = 0x0,
    ia32_mtrr_fix4k_f8000_initial = 0x0,
    ia32_cr_pat_initial = 0x0,
    ia32_mperf_initial = 0x0,
    ia32_aperf_initial = 0x0,
    ia32_perf_ctl_initial = 0x0,
    ia32_perf_status_initial = 0x0,
    ia32_clock_modulation_initial = 0x0,
    ia32_therm_interrupt_initial = 0x0,
    ia32_therm_status_initial = 0x0,
    ia32_perfctr0_initial = 0x0,
    ia32_perfctr1_initial = 0x0,
    ia32_perfctr2_initial = 0x0,
    ia32_perfctr3_initial = 0x0,
    ia32_amd_perfevtsel0_initial = 0x0,
    ia32_amd_perfevtsel1_initial = 0x0,
    ia32_amd_perfevtsel2_initial = 0x0,
    ia32_amd_perfevtsel3_initial = 0x0,
    ia32_amd_hwcr_initial = 0x0
};

/*
 * Device Initialization function
 */
static inline void ia32_initialize(__DN(t) *_dev) __attribute__ ((always_inline));
static inline void ia32_initialize(__DN(t) *_dev)
{
}

/*
 * Include access functions for user-defined spaces
 */
#include "generated/ia32.spaces.h"
/*
 * Register mon_filter_size: Monitor/Mwait filter size
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mon_filter_size_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mon_filter_size_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x6)));
}

static inline uint64_t ia32_mon_filter_size_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mon_filter_size_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x6)));
}

static inline void ia32_mon_filter_size_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mon_filter_size_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x6, _regval);
}

static inline void ia32_mon_filter_size_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mon_filter_size_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x6, _regval);
}

static inline dout_t& ia32_mon_filter_size_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mon_filter_size_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x6));
    _os << ("Register mon_filter_size (Monitor/Mwait filter size): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register platform_id: Platform ID
 * Type: ia32.platform_id (Implicit type of Platform ID register)
 *   _anon0	(size 50, offset 0, init 0):	RSVD	_
 *   id	(size 3, offset 50, init 0):	RO	platform id
 *   _anon53	(size 11, offset 53, init 0):	RSVD	_
 */
static inline ia32_platform_id_t ia32_platform_id_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_platform_id_t ia32_platform_id_rawrd(__DN(t) *_dev)
{
    return((ia32_platform_id_t )(__DN(msr)::read64(_dev, 0x17)));
}

static inline ia32_platform_id_t ia32_platform_id_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_platform_id_t ia32_platform_id_rd(__DN(t) *_dev)
{
    return((ia32_platform_id_t )(__DN(msr)::read64(_dev, 0x17)));
}

static inline void ia32_platform_id_rawwr(__DN(t) *_dev, ia32_platform_id_t _regval) __attribute__ ((always_inline));
static inline void ia32_platform_id_rawwr(__DN(t) *_dev, ia32_platform_id_t _regval)
{
    __DN(msr)::write64(_dev, 0x17, _regval);
}

// Register platform_id is not writeable
static inline dout_t& ia32_platform_id_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_platform_id_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_platform_id_t _regval = (ia32_platform_id_t )(__DN(msr)::read64(_dev, 0x17));
    _os << ("Register platform_id (Platform ID): ");
    _os << ("\n");
    // _anon0 is anonymous
    ((_os << (" id =\t")) << ia32_platform_id_id_extract(_regval)) << ("\t(platform id)\n");
    // _anon53 is anonymous
    return(_os);
}

static inline uint8_t ia32_platform_id_id_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_platform_id_id_rdf(__DN(t) *_dev)
{
    ia32_platform_id_t _regval = (ia32_platform_id_t )(__DN(msr)::read64(_dev, 0x17));
    return(ia32_platform_id_id_extract(_regval));
}

/*
 * Register apic_base: APIC base
 * Type: ia32.apic_base (Implicit type of APIC base register)
 *   _anon0	(size 8, offset 0, init 0):	RSVD	_
 *   bsp	(size 1, offset 8, init 0):	RO	BSP flag
 *   _anon9	(size 2, offset 9, init 0):	RSVD	_
 *   global	(size 1, offset 11, init 0):	RW	APIC global enable
 *   base	(size 52, offset 12, init 0):	RW	APIC base
 */
static inline ia32_apic_base_t ia32_apic_base_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_apic_base_t ia32_apic_base_rawrd(__DN(t) *_dev)
{
    return((ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b)));
}

static inline ia32_apic_base_t ia32_apic_base_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_apic_base_t ia32_apic_base_rd(__DN(t) *_dev)
{
    return((ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b)));
}

static inline void ia32_apic_base_rawwr(__DN(t) *_dev, ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline void ia32_apic_base_rawwr(__DN(t) *_dev, ia32_apic_base_t _regval)
{
    __DN(msr)::write64(_dev, 0x1b, _regval);
}

static inline void ia32_apic_base_wr(__DN(t) *_dev, ia32_apic_base_t _regval) __attribute__ ((always_inline));
static inline void ia32_apic_base_wr(__DN(t) *_dev, ia32_apic_base_t _regval)
{
    _regval = (_regval & 0xfffffffffffff900);
    // No MB1 fields present
    _regval = (_regval | (0x6ff & ((ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b)))));
    __DN(msr)::write64(_dev, 0x1b, _regval);
}

static inline dout_t& ia32_apic_base_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_apic_base_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b));
    _os << ("Register apic_base (APIC base): ");
    _os << ("\n");
    // _anon0 is anonymous
    ((_os << (" bsp =\t")) << ia32_apic_base_bsp_extract(_regval)) << ("\t(BSP flag)\n");
    // _anon9 is anonymous
    ((_os << (" global =\t")) << ia32_apic_base_global_extract(_regval)) << ("\t(APIC global enable)\n");
    ((_os << (" base =\t")) << ia32_apic_base_base_extract(_regval)) << ("\t(APIC base)\n");
    return(_os);
}

static inline uint8_t ia32_apic_base_bsp_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_apic_base_bsp_rdf(__DN(t) *_dev)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b));
    return(ia32_apic_base_bsp_extract(_regval));
}

static inline uint8_t ia32_apic_base_global_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_apic_base_global_rdf(__DN(t) *_dev)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b));
    return(ia32_apic_base_global_extract(_regval));
}

static inline uint64_t ia32_apic_base_base_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_apic_base_base_rdf(__DN(t) *_dev)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b));
    return(ia32_apic_base_base_extract(_regval));
}

static inline void ia32_apic_base_global_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_apic_base_global_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(0x800 & (((ia32_apic_base_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff6ff & ((ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1b, _regval);
    // No shadow register to write to
}

static inline void ia32_apic_base_base_wrf(__DN(t) *_dev, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_apic_base_base_wrf(__DN(t) *_dev, uint64_t _fieldval)
{
    ia32_apic_base_t _regval = (ia32_apic_base_t )(0xfffffffffffff000 & (((ia32_apic_base_t )(_fieldval)) << 12));
    _regval = (_regval | (0xeff & ((ia32_apic_base_t )(__DN(msr)::read64(_dev, 0x1b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1b, _regval);
    // No shadow register to write to
}

/*
 * Register feature_cntl: Feature control
 * Type: ia32.feature_cntl (Implicit type of Feature control register)
 *   lock	(size 1, offset 0, init 0):	RWO	lock
 *   vmxinsmx	(size 1, offset 1, init 0):	RWL	enable VMX inside SMX
 *   vmxoutsmx	(size 1, offset 2, init 0):	RWL	enable VMX outside SMX
 *   _anon3	(size 5, offset 3, init 0):	RSVD	_
 *   senter_loc	(size 7, offset 8, init 0):	RWL	SENTER local function
 *   senter_glob	(size 1, offset 15, init 0):	RWL	SENTER global enable
 *   _anon16	(size 48, offset 16, init 0):	RSVD	_
 */
static inline ia32_feature_cntl_t ia32_feature_cntl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_rawrd(__DN(t) *_dev)
{
    return((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)));
}

static inline ia32_feature_cntl_t ia32_feature_cntl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_feature_cntl_t ia32_feature_cntl_rd(__DN(t) *_dev)
{
    return((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)));
}

static inline void ia32_feature_cntl_rawwr(__DN(t) *_dev, ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_rawwr(__DN(t) *_dev, ia32_feature_cntl_t _regval)
{
    __DN(msr)::write64(_dev, 0x3a, _regval);
}

static inline void ia32_feature_cntl_wr(__DN(t) *_dev, ia32_feature_cntl_t _regval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_wr(__DN(t) *_dev, ia32_feature_cntl_t _regval)
{
    _regval = (_regval & 0xff07);
    // No MB1 fields present
    _regval = (_regval | (0xffffffffffff00f8 & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    __DN(msr)::write64(_dev, 0x3a, _regval);
}

static inline dout_t& ia32_feature_cntl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_feature_cntl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    _os << ("Register feature_cntl (Feature control): ");
    _os << ("\n");
    ((_os << (" lock =\t")) << ia32_feature_cntl_lock_extract(_regval)) << ("\t(lock)\n");
    ((_os << (" vmxinsmx =\t")) << ia32_feature_cntl_vmxinsmx_extract(_regval)) << ("\t(enable VMX inside SMX)\n");
    ((_os << (" vmxoutsmx =\t")) << ia32_feature_cntl_vmxoutsmx_extract(_regval)) << ("\t(enable VMX outside SMX)\n");
    // _anon3 is anonymous
    ((_os << (" senter_loc =\t")) << ia32_feature_cntl_senter_loc_extract(_regval)) << ("\t(SENTER local function)\n");
    ((_os << (" senter_glob =\t")) << ia32_feature_cntl_senter_glob_extract(_regval)) << ("\t(SENTER global enable)\n");
    // _anon16 is anonymous
    return(_os);
}

static inline uint8_t ia32_feature_cntl_lock_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_lock_rdf(__DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    return(ia32_feature_cntl_lock_extract(_regval));
}

static inline uint8_t ia32_feature_cntl_vmxinsmx_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_vmxinsmx_rdf(__DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    return(ia32_feature_cntl_vmxinsmx_extract(_regval));
}

static inline uint8_t ia32_feature_cntl_vmxoutsmx_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_vmxoutsmx_rdf(__DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    return(ia32_feature_cntl_vmxoutsmx_extract(_regval));
}

static inline uint8_t ia32_feature_cntl_senter_loc_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_senter_loc_rdf(__DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    return(ia32_feature_cntl_senter_loc_extract(_regval));
}

static inline uint8_t ia32_feature_cntl_senter_glob_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_feature_cntl_senter_glob_rdf(__DN(t) *_dev)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a));
    return(ia32_feature_cntl_senter_glob_extract(_regval));
}

static inline void ia32_feature_cntl_lock_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_lock_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(0x1 & (((ia32_feature_cntl_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3a, _regval);
    // No shadow register to write to
}

static inline void ia32_feature_cntl_vmxinsmx_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_vmxinsmx_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(0x2 & (((ia32_feature_cntl_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffffc & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3a, _regval);
    // No shadow register to write to
}

static inline void ia32_feature_cntl_vmxoutsmx_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_vmxoutsmx_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(0x4 & (((ia32_feature_cntl_t )(_fieldval)) << 2));
    _regval = (_regval | (0xfffffffffffffffa & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3a, _regval);
    // No shadow register to write to
}

static inline void ia32_feature_cntl_senter_loc_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_senter_loc_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(0x7f00 & (((ia32_feature_cntl_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff80fe & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3a, _regval);
    // No shadow register to write to
}

static inline void ia32_feature_cntl_senter_glob_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_feature_cntl_senter_glob_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_feature_cntl_t _regval = (ia32_feature_cntl_t )(0x8000 & (((ia32_feature_cntl_t )(_fieldval)) << 15));
    _regval = (_regval | (0xffffffffffff7ffe & ((ia32_feature_cntl_t )(__DN(msr)::read64(_dev, 0x3a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3a, _regval);
    // No shadow register to write to
}

/*
 * Register bios_updt_trig: BIOS update trigger
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_bios_updt_trig_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_bios_updt_trig_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x79)));
}

static inline uint64_t ia32_bios_updt_trig_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_bios_updt_trig_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x79)));
}

static inline void ia32_bios_updt_trig_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_bios_updt_trig_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x79, _regval);
}

static inline void ia32_bios_updt_trig_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_bios_updt_trig_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x79, _regval);
}

static inline dout_t& ia32_bios_updt_trig_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_bios_updt_trig_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x79));
    _os << ("Register bios_updt_trig (BIOS update trigger): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register bios_sign_id: BIOS update signature
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_bios_sign_id_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_bios_sign_id_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x8b)));
}

static inline uint64_t ia32_bios_sign_id_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_bios_sign_id_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x8b)));
}

static inline void ia32_bios_sign_id_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_bios_sign_id_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x8b, _regval);
}

static inline void ia32_bios_sign_id_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_bios_sign_id_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x8b, _regval);
}

static inline dout_t& ia32_bios_sign_id_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_bios_sign_id_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x8b));
    _os << ("Register bios_sign_id (BIOS update signature): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register smm_monitor_ctl: SMM Monitor config
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_smm_monitor_ctl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_smm_monitor_ctl_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x9b)));
}

static inline uint64_t ia32_smm_monitor_ctl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_smm_monitor_ctl_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x9b)));
}

static inline void ia32_smm_monitor_ctl_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_smm_monitor_ctl_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x9b, _regval);
}

static inline void ia32_smm_monitor_ctl_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_smm_monitor_ctl_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x9b, _regval);
}

static inline dout_t& ia32_smm_monitor_ctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_smm_monitor_ctl_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x9b));
    _os << ("Register smm_monitor_ctl (SMM Monitor config): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register misc_enable: Enable misc. features
 * Type: ia32.misc_enable (Implicit type of Enable misc. features register)
 *   fse	(size 1, offset 0, init 0):	RW	Fast-Strings enable
 *   _anon1	(size 2, offset 1, init 0):	RSVD	_
 *   atcce	(size 1, offset 3, init 0):	RW	Automatic thermal control circuit enable
 *   _anon4	(size 3, offset 4, init 0):	RSVD	_
 *   pma	(size 1, offset 7, init 0):	RO	Performance monitoring available
 *   _anon8	(size 1, offset 8, init 0):	RSVD	_
 *   hpd	(size 1, offset 9, init 0):	RW	Hardware prefetcher disable
 *   feme	(size 1, offset 10, init 0):	RW	FERR# multiplexing enable
 *   btsu	(size 1, offset 11, init 0):	RO	Branch trace storage unavailable
 *   pebsu	(size 1, offset 12, init 0):	RO	Precise event-based sampling unavailable
 *   tm2e	(size 1, offset 13, init 0):	RW	Thermal monitor 2 enable
 *   _anon14	(size 2, offset 14, init 0):	RSVD	_
 *   eiste	(size 1, offset 16, init 0):	RW	Enhanced Intel SpeedStep tech enable
 *   _anon17	(size 1, offset 17, init 0):	RSVD	_
 *   emfsm	(size 1, offset 18, init 0):	RW	Enable monitor FSM
 *   aclpd	(size 1, offset 19, init 0):	RW	Adjacent cache line prefetch disable
 *   eistsl	(size 1, offset 20, init 0):	RWO	Enhanced SpeedStep select lock
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   lcmax	(size 1, offset 22, init 0):	RW	Limit CPUID max val
 *   xmd	(size 1, offset 23, init 0):	RW	xTPR message disable
 *   _anon24	(size 10, offset 24, init 0):	RSVD	_
 *   xdbd	(size 1, offset 34, init 0):	RW	XD bit disable
 *   _anon35	(size 2, offset 35, init 0):	RSVD	_
 *   dcupd	(size 1, offset 37, init 0):	RW	DCU prefetcher disable
 *   idad	(size 1, offset 38, init 0):	RW	IDA disable
 *   ippd	(size 1, offset 39, init 0):	RW	IP prefetcher disable
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
static inline ia32_misc_enable_t ia32_misc_enable_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_rawrd(__DN(t) *_dev)
{
    return((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)));
}

static inline ia32_misc_enable_t ia32_misc_enable_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_misc_enable_t ia32_misc_enable_rd(__DN(t) *_dev)
{
    return((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)));
}

static inline void ia32_misc_enable_rawwr(__DN(t) *_dev, ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_rawwr(__DN(t) *_dev, ia32_misc_enable_t _regval)
{
    __DN(msr)::write64(_dev, 0x1a0, _regval);
}

static inline void ia32_misc_enable_wr(__DN(t) *_dev, ia32_misc_enable_t _regval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_wr(__DN(t) *_dev, ia32_misc_enable_t _regval)
{
    _regval = (_regval & 0xe400dd3e89);
    // No MB1 fields present
    _regval = (_regval | (0xffffff1bff22c176 & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    __DN(msr)::write64(_dev, 0x1a0, _regval);
}

static inline dout_t& ia32_misc_enable_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_misc_enable_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    _os << ("Register misc_enable (Enable misc. features): ");
    _os << ("\n");
    ((_os << (" fse =\t")) << ia32_misc_enable_fse_extract(_regval)) << ("\t(Fast-Strings enable)\n");
    // _anon1 is anonymous
    ((_os << (" atcce =\t")) << ia32_misc_enable_atcce_extract(_regval)) << ("\t(Automatic thermal control circuit enable)\n");
    // _anon4 is anonymous
    ((_os << (" pma =\t")) << ia32_misc_enable_pma_extract(_regval)) << ("\t(Performance monitoring available)\n");
    // _anon8 is anonymous
    ((_os << (" hpd =\t")) << ia32_misc_enable_hpd_extract(_regval)) << ("\t(Hardware prefetcher disable)\n");
    ((_os << (" feme =\t")) << ia32_misc_enable_feme_extract(_regval)) << ("\t(FERR# multiplexing enable)\n");
    ((_os << (" btsu =\t")) << ia32_misc_enable_btsu_extract(_regval)) << ("\t(Branch trace storage unavailable)\n");
    ((_os << (" pebsu =\t")) << ia32_misc_enable_pebsu_extract(_regval)) << ("\t(Precise event-based sampling unavailable)\n");
    ((_os << (" tm2e =\t")) << ia32_misc_enable_tm2e_extract(_regval)) << ("\t(Thermal monitor 2 enable)\n");
    // _anon14 is anonymous
    ((_os << (" eiste =\t")) << ia32_misc_enable_eiste_extract(_regval)) << ("\t(Enhanced Intel SpeedStep tech enable)\n");
    // _anon17 is anonymous
    ((_os << (" emfsm =\t")) << ia32_misc_enable_emfsm_extract(_regval)) << ("\t(Enable monitor FSM)\n");
    ((_os << (" aclpd =\t")) << ia32_misc_enable_aclpd_extract(_regval)) << ("\t(Adjacent cache line prefetch disable)\n");
    ((_os << (" eistsl =\t")) << ia32_misc_enable_eistsl_extract(_regval)) << ("\t(Enhanced SpeedStep select lock)\n");
    // _anon21 is anonymous
    ((_os << (" lcmax =\t")) << ia32_misc_enable_lcmax_extract(_regval)) << ("\t(Limit CPUID max val)\n");
    ((_os << (" xmd =\t")) << ia32_misc_enable_xmd_extract(_regval)) << ("\t(xTPR message disable)\n");
    // _anon24 is anonymous
    ((_os << (" xdbd =\t")) << ia32_misc_enable_xdbd_extract(_regval)) << ("\t(XD bit disable)\n");
    // _anon35 is anonymous
    ((_os << (" dcupd =\t")) << ia32_misc_enable_dcupd_extract(_regval)) << ("\t(DCU prefetcher disable)\n");
    ((_os << (" idad =\t")) << ia32_misc_enable_idad_extract(_regval)) << ("\t(IDA disable)\n");
    ((_os << (" ippd =\t")) << ia32_misc_enable_ippd_extract(_regval)) << ("\t(IP prefetcher disable)\n");
    // _anon40 is anonymous
    return(_os);
}

static inline uint8_t ia32_misc_enable_fse_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_fse_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_fse_extract(_regval));
}

static inline uint8_t ia32_misc_enable_atcce_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_atcce_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_atcce_extract(_regval));
}

static inline uint8_t ia32_misc_enable_pma_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_pma_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_pma_extract(_regval));
}

static inline uint8_t ia32_misc_enable_hpd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_hpd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_hpd_extract(_regval));
}

static inline uint8_t ia32_misc_enable_feme_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_feme_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_feme_extract(_regval));
}

static inline uint8_t ia32_misc_enable_btsu_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_btsu_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_btsu_extract(_regval));
}

static inline uint8_t ia32_misc_enable_pebsu_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_pebsu_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_pebsu_extract(_regval));
}

static inline uint8_t ia32_misc_enable_tm2e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_tm2e_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_tm2e_extract(_regval));
}

static inline uint8_t ia32_misc_enable_eiste_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_eiste_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_eiste_extract(_regval));
}

static inline uint8_t ia32_misc_enable_emfsm_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_emfsm_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_emfsm_extract(_regval));
}

static inline uint8_t ia32_misc_enable_aclpd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_aclpd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_aclpd_extract(_regval));
}

static inline uint8_t ia32_misc_enable_eistsl_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_eistsl_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_eistsl_extract(_regval));
}

static inline uint8_t ia32_misc_enable_lcmax_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_lcmax_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_lcmax_extract(_regval));
}

static inline uint8_t ia32_misc_enable_xmd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_xmd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_xmd_extract(_regval));
}

static inline uint8_t ia32_misc_enable_xdbd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_xdbd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_xdbd_extract(_regval));
}

static inline uint8_t ia32_misc_enable_dcupd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_dcupd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_dcupd_extract(_regval));
}

static inline uint8_t ia32_misc_enable_idad_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_idad_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_idad_extract(_regval));
}

static inline uint8_t ia32_misc_enable_ippd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_misc_enable_ippd_rdf(__DN(t) *_dev)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0));
    return(ia32_misc_enable_ippd_extract(_regval));
}

static inline void ia32_misc_enable_fse_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_fse_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x1 & (((ia32_misc_enable_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffefe77e & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_atcce_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_atcce_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x8 & (((ia32_misc_enable_t )(_fieldval)) << 3));
    _regval = (_regval | (0xffffffffffefe777 & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_hpd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_hpd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x200 & (((ia32_misc_enable_t )(_fieldval)) << 9));
    _regval = (_regval | (0xffffffffffefe57f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_feme_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_feme_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x400 & (((ia32_misc_enable_t )(_fieldval)) << 10));
    _regval = (_regval | (0xffffffffffefe37f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_tm2e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_tm2e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x2000 & (((ia32_misc_enable_t )(_fieldval)) << 13));
    _regval = (_regval | (0xffffffffffefc77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_eiste_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_eiste_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x10000 & (((ia32_misc_enable_t )(_fieldval)) << 16));
    _regval = (_regval | (0xffffffffffeee77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_emfsm_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_emfsm_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x40000 & (((ia32_misc_enable_t )(_fieldval)) << 18));
    _regval = (_regval | (0xffffffffffebe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_aclpd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_aclpd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x80000 & (((ia32_misc_enable_t )(_fieldval)) << 19));
    _regval = (_regval | (0xffffffffffe7e77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_eistsl_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_eistsl_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x100000 & (((ia32_misc_enable_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_lcmax_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_lcmax_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x400000 & (((ia32_misc_enable_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffafe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_xmd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_xmd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x800000 & (((ia32_misc_enable_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff6fe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_xdbd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_xdbd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x400000000 & (((ia32_misc_enable_t )(_fieldval)) << 34));
    _regval = (_regval | (0xfffffffbffefe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_dcupd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_dcupd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x2000000000 & (((ia32_misc_enable_t )(_fieldval)) << 37));
    _regval = (_regval | (0xffffffdfffefe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_idad_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_idad_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x4000000000 & (((ia32_misc_enable_t )(_fieldval)) << 38));
    _regval = (_regval | (0xffffffbfffefe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

static inline void ia32_misc_enable_ippd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_misc_enable_ippd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_misc_enable_t _regval = (ia32_misc_enable_t )(0x8000000000 & (((ia32_misc_enable_t )(_fieldval)) << 39));
    _regval = (_regval | (0xffffff7fffefe77f & ((ia32_misc_enable_t )(__DN(msr)::read64(_dev, 0x1a0)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x1a0, _regval);
    // No shadow register to write to
}

/*
 * Register p5_mc_addr: P5 MC ADDR
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_p5_mc_addr_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_p5_mc_addr_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x0)));
}

static inline uint64_t ia32_p5_mc_addr_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_p5_mc_addr_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x0)));
}

static inline void ia32_p5_mc_addr_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_p5_mc_addr_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x0, _regval);
}

static inline void ia32_p5_mc_addr_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_p5_mc_addr_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x0, _regval);
}

static inline dout_t& ia32_p5_mc_addr_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_p5_mc_addr_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x0));
    _os << ("Register p5_mc_addr (P5 MC ADDR): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register p5_mc_type: P5 MC Type
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_p5_mc_type_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_p5_mc_type_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x1)));
}

static inline uint64_t ia32_p5_mc_type_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_p5_mc_type_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x1)));
}

static inline void ia32_p5_mc_type_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_p5_mc_type_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x1, _regval);
}

static inline void ia32_p5_mc_type_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_p5_mc_type_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x1, _regval);
}

static inline dout_t& ia32_p5_mc_type_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_p5_mc_type_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x1));
    _os << ("Register p5_mc_type (P5 MC Type): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_cap: Global machine check capabilities
 * Type: ia32.mcg_cap (Implicit type of Global machine check capabilities register)
 *   count	(size 8, offset 0, init 0):	RO	Num. reporting banks available
 *   ctl_p	(size 1, offset 8, init 0):	RO	Implements MCG_CTL MSR
 *   exp_p	(size 1, offset 9, init 0):	RO	Implements extended MC regs
 *   _anon10	(size 1, offset 10, init 0):	RSVD	_
 *   tes_p	(size 1, offset 11, init 0):	RO	Threshold-based error status present
 *   _anon12	(size 4, offset 12, init 0):	RSVD	_
 *   ext_cnt	(size 8, offset 16, init 0):	RO	Num. extended MC regs present
 *   _anon24	(size 40, offset 24, init 0):	RSVD	_
 */
static inline ia32_mcg_cap_t ia32_mcg_cap_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_rawrd(__DN(t) *_dev)
{
    return((ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179)));
}

static inline ia32_mcg_cap_t ia32_mcg_cap_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_cap_t ia32_mcg_cap_rd(__DN(t) *_dev)
{
    return((ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179)));
}

static inline void ia32_mcg_cap_rawwr(__DN(t) *_dev, ia32_mcg_cap_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_cap_rawwr(__DN(t) *_dev, ia32_mcg_cap_t _regval)
{
    __DN(msr)::write64(_dev, 0x179, _regval);
}

// Register mcg_cap is not writeable
static inline dout_t& ia32_mcg_cap_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_cap_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    _os << ("Register mcg_cap (Global machine check capabilities): ");
    _os << ("\n");
    ((_os << (" count =\t")) << ia32_mcg_cap_count_extract(_regval)) << ("\t(Num. reporting banks available)\n");
    ((_os << (" ctl_p =\t")) << ia32_mcg_cap_ctl_p_extract(_regval)) << ("\t(Implements MCG_CTL MSR)\n");
    ((_os << (" exp_p =\t")) << ia32_mcg_cap_exp_p_extract(_regval)) << ("\t(Implements extended MC regs)\n");
    // _anon10 is anonymous
    ((_os << (" tes_p =\t")) << ia32_mcg_cap_tes_p_extract(_regval)) << ("\t(Threshold-based error status present)\n");
    // _anon12 is anonymous
    ((_os << (" ext_cnt =\t")) << ia32_mcg_cap_ext_cnt_extract(_regval)) << ("\t(Num. extended MC regs present)\n");
    // _anon24 is anonymous
    return(_os);
}

static inline uint8_t ia32_mcg_cap_count_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_count_rdf(__DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    return(ia32_mcg_cap_count_extract(_regval));
}

static inline uint8_t ia32_mcg_cap_ctl_p_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_ctl_p_rdf(__DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    return(ia32_mcg_cap_ctl_p_extract(_regval));
}

static inline uint8_t ia32_mcg_cap_exp_p_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_exp_p_rdf(__DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    return(ia32_mcg_cap_exp_p_extract(_regval));
}

static inline uint8_t ia32_mcg_cap_tes_p_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_tes_p_rdf(__DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    return(ia32_mcg_cap_tes_p_extract(_regval));
}

static inline uint8_t ia32_mcg_cap_ext_cnt_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_cap_ext_cnt_rdf(__DN(t) *_dev)
{
    ia32_mcg_cap_t _regval = (ia32_mcg_cap_t )(__DN(msr)::read64(_dev, 0x179));
    return(ia32_mcg_cap_ext_cnt_extract(_regval));
}

/*
 * Register mcg_status: Global machine check status
 * Type: ia32.mcg_status (Implicit type of Global machine check status register)
 *   ripv	(size 1, offset 0, init 0):	RO	Restart IP valid
 *   eipv	(size 1, offset 1, init 0):	RO	Error IP valid
 *   mcip	(size 1, offset 2, init 0):	RW	Machine check in progress
 *   _anon3	(size 61, offset 3, init 0):	RSVD	_
 */
static inline ia32_mcg_status_t ia32_mcg_status_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_status_t ia32_mcg_status_rawrd(__DN(t) *_dev)
{
    return((ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a)));
}

static inline ia32_mcg_status_t ia32_mcg_status_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_status_t ia32_mcg_status_rd(__DN(t) *_dev)
{
    return((ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a)));
}

static inline void ia32_mcg_status_rawwr(__DN(t) *_dev, ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_status_rawwr(__DN(t) *_dev, ia32_mcg_status_t _regval)
{
    __DN(msr)::write64(_dev, 0x17a, _regval);
}

static inline void ia32_mcg_status_wr(__DN(t) *_dev, ia32_mcg_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_status_wr(__DN(t) *_dev, ia32_mcg_status_t _regval)
{
    _regval = (_regval & 0x7);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffffff8 & ((ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a)))));
    __DN(msr)::write64(_dev, 0x17a, _regval);
}

static inline dout_t& ia32_mcg_status_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_status_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_mcg_status_t _regval = (ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a));
    _os << ("Register mcg_status (Global machine check status): ");
    _os << ("\n");
    ((_os << (" ripv =\t")) << ia32_mcg_status_ripv_extract(_regval)) << ("\t(Restart IP valid)\n");
    ((_os << (" eipv =\t")) << ia32_mcg_status_eipv_extract(_regval)) << ("\t(Error IP valid)\n");
    ((_os << (" mcip =\t")) << ia32_mcg_status_mcip_extract(_regval)) << ("\t(Machine check in progress)\n");
    // _anon3 is anonymous
    return(_os);
}

static inline uint8_t ia32_mcg_status_ripv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_ripv_rdf(__DN(t) *_dev)
{
    ia32_mcg_status_t _regval = (ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a));
    return(ia32_mcg_status_ripv_extract(_regval));
}

static inline uint8_t ia32_mcg_status_eipv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_eipv_rdf(__DN(t) *_dev)
{
    ia32_mcg_status_t _regval = (ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a));
    return(ia32_mcg_status_eipv_extract(_regval));
}

static inline uint8_t ia32_mcg_status_mcip_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mcg_status_mcip_rdf(__DN(t) *_dev)
{
    ia32_mcg_status_t _regval = (ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a));
    return(ia32_mcg_status_mcip_extract(_regval));
}

static inline void ia32_mcg_status_mcip_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mcg_status_mcip_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_mcg_status_t _regval = (ia32_mcg_status_t )(0x4 & (((ia32_mcg_status_t )(_fieldval)) << 2));
    _regval = (_regval | (0xfffffffffffffff8 & ((ia32_mcg_status_t )(__DN(msr)::read64(_dev, 0x17a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x17a, _regval);
    // No shadow register to write to
}

/*
 * Register mcg_ctl: Global machine check control
 * Type: ia32.mcg_ctl_val (primitive type)
 */
static inline ia32_mcg_ctl_val_t ia32_mcg_ctl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_ctl_val_t ia32_mcg_ctl_rawrd(__DN(t) *_dev)
{
    return((ia32_mcg_ctl_val_t )(__DN(msr)::read64(_dev, 0x17b)));
}

static inline ia32_mcg_ctl_val_t ia32_mcg_ctl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mcg_ctl_val_t ia32_mcg_ctl_rd(__DN(t) *_dev)
{
    return((ia32_mcg_ctl_val_t )(__DN(msr)::read64(_dev, 0x17b)));
}

static inline void ia32_mcg_ctl_rawwr(__DN(t) *_dev, ia32_mcg_ctl_val_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_ctl_rawwr(__DN(t) *_dev, ia32_mcg_ctl_val_t _regval)
{
    __DN(msr)::write64(_dev, 0x17b, _regval);
}

static inline void ia32_mcg_ctl_wr(__DN(t) *_dev, ia32_mcg_ctl_val_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_ctl_wr(__DN(t) *_dev, ia32_mcg_ctl_val_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x17b, _regval);
}

static inline dout_t& ia32_mcg_ctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_ctl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_mcg_ctl_val_t _regval = (ia32_mcg_ctl_val_t )(__DN(msr)::read64(_dev, 0x17b));
    _os << ("Register mcg_ctl (Global machine check control): ");
    _os << _regval;
    return(_os);
}

/*
 * Register mcg_rax: State of RAX at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rax_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rax_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x180)));
}

static inline uint64_t ia32_mcg_rax_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rax_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x180)));
}

static inline void ia32_mcg_rax_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rax_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x180, _regval);
}

static inline void ia32_mcg_rax_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rax_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x180, _regval);
}

static inline dout_t& ia32_mcg_rax_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rax_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x180));
    _os << ("Register mcg_rax (State of RAX at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rbx: State of RBX at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rbx_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rbx_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x181)));
}

static inline uint64_t ia32_mcg_rbx_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rbx_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x181)));
}

static inline void ia32_mcg_rbx_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rbx_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x181, _regval);
}

static inline void ia32_mcg_rbx_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rbx_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x181, _regval);
}

static inline dout_t& ia32_mcg_rbx_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rbx_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x181));
    _os << ("Register mcg_rbx (State of RBX at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rcx: State of RCX at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rcx_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rcx_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x182)));
}

static inline uint64_t ia32_mcg_rcx_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rcx_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x182)));
}

static inline void ia32_mcg_rcx_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rcx_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x182, _regval);
}

static inline void ia32_mcg_rcx_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rcx_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x182, _regval);
}

static inline dout_t& ia32_mcg_rcx_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rcx_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x182));
    _os << ("Register mcg_rcx (State of RCX at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rdx: State of RDX at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rdx_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rdx_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x183)));
}

static inline uint64_t ia32_mcg_rdx_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rdx_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x183)));
}

static inline void ia32_mcg_rdx_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rdx_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x183, _regval);
}

static inline void ia32_mcg_rdx_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rdx_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x183, _regval);
}

static inline dout_t& ia32_mcg_rdx_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rdx_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x183));
    _os << ("Register mcg_rdx (State of RDX at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rsi: State of RSI at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rsi_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rsi_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x184)));
}

static inline uint64_t ia32_mcg_rsi_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rsi_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x184)));
}

static inline void ia32_mcg_rsi_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rsi_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x184, _regval);
}

static inline void ia32_mcg_rsi_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rsi_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x184, _regval);
}

static inline dout_t& ia32_mcg_rsi_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rsi_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x184));
    _os << ("Register mcg_rsi (State of RSI at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rdi: State of RDI at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rdi_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rdi_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x185)));
}

static inline uint64_t ia32_mcg_rdi_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rdi_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x185)));
}

static inline void ia32_mcg_rdi_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rdi_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x185, _regval);
}

static inline void ia32_mcg_rdi_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rdi_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x185, _regval);
}

static inline dout_t& ia32_mcg_rdi_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rdi_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x185));
    _os << ("Register mcg_rdi (State of RDI at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rbp: State of RBP at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rbp_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rbp_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x186)));
}

static inline uint64_t ia32_mcg_rbp_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rbp_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x186)));
}

static inline void ia32_mcg_rbp_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rbp_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x186, _regval);
}

static inline void ia32_mcg_rbp_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rbp_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x186, _regval);
}

static inline dout_t& ia32_mcg_rbp_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rbp_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x186));
    _os << ("Register mcg_rbp (State of RBP at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rsp: State of RSP at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rsp_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rsp_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x187)));
}

static inline uint64_t ia32_mcg_rsp_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rsp_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x187)));
}

static inline void ia32_mcg_rsp_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rsp_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x187, _regval);
}

static inline void ia32_mcg_rsp_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rsp_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x187, _regval);
}

static inline dout_t& ia32_mcg_rsp_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rsp_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x187));
    _os << ("Register mcg_rsp (State of RSP at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rflags: State of RFLAGS at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rflags_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rflags_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x188)));
}

static inline uint64_t ia32_mcg_rflags_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rflags_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x188)));
}

static inline void ia32_mcg_rflags_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rflags_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x188, _regval);
}

static inline void ia32_mcg_rflags_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rflags_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x188, _regval);
}

static inline dout_t& ia32_mcg_rflags_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rflags_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x188));
    _os << ("Register mcg_rflags (State of RFLAGS at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_rip: State of RIP at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_rip_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rip_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x189)));
}

static inline uint64_t ia32_mcg_rip_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_rip_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x189)));
}

static inline void ia32_mcg_rip_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rip_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x189, _regval);
}

static inline void ia32_mcg_rip_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_rip_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x189, _regval);
}

static inline dout_t& ia32_mcg_rip_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_rip_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x189));
    _os << ("Register mcg_rip (State of RIP at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_misc: Page fault/assist during DS
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_misc_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_misc_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x18a)));
}

static inline uint64_t ia32_mcg_misc_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_misc_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x18a)));
}

static inline void ia32_mcg_misc_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_misc_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x18a, _regval);
}

static inline void ia32_mcg_misc_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_misc_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x18a, _regval);
}

static inline dout_t& ia32_mcg_misc_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_misc_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x18a));
    _os << ("Register mcg_misc (Page fault/assist during DS): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r8: State of R8 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r8_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r8_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x190)));
}

static inline uint64_t ia32_mcg_r8_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r8_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x190)));
}

static inline void ia32_mcg_r8_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r8_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x190, _regval);
}

static inline void ia32_mcg_r8_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r8_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x190, _regval);
}

static inline dout_t& ia32_mcg_r8_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r8_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x190));
    _os << ("Register mcg_r8 (State of R8 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r9: State of R9 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r9_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r9_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x191)));
}

static inline uint64_t ia32_mcg_r9_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r9_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x191)));
}

static inline void ia32_mcg_r9_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r9_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x191, _regval);
}

static inline void ia32_mcg_r9_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r9_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x191, _regval);
}

static inline dout_t& ia32_mcg_r9_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r9_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x191));
    _os << ("Register mcg_r9 (State of R9 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r10: State of R10 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r10_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r10_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x192)));
}

static inline uint64_t ia32_mcg_r10_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r10_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x192)));
}

static inline void ia32_mcg_r10_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r10_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x192, _regval);
}

static inline void ia32_mcg_r10_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r10_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x192, _regval);
}

static inline dout_t& ia32_mcg_r10_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r10_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x192));
    _os << ("Register mcg_r10 (State of R10 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r11: State of R11 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r11_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r11_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x193)));
}

static inline uint64_t ia32_mcg_r11_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r11_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x193)));
}

static inline void ia32_mcg_r11_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r11_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x193, _regval);
}

static inline void ia32_mcg_r11_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r11_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x193, _regval);
}

static inline dout_t& ia32_mcg_r11_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r11_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x193));
    _os << ("Register mcg_r11 (State of R11 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r12: State of R12 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r12_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r12_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x194)));
}

static inline uint64_t ia32_mcg_r12_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r12_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x194)));
}

static inline void ia32_mcg_r12_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r12_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x194, _regval);
}

static inline void ia32_mcg_r12_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r12_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x194, _regval);
}

static inline dout_t& ia32_mcg_r12_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r12_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x194));
    _os << ("Register mcg_r12 (State of R12 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r13: State of R13 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r13_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r13_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x195)));
}

static inline uint64_t ia32_mcg_r13_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r13_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x195)));
}

static inline void ia32_mcg_r13_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r13_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x195, _regval);
}

static inline void ia32_mcg_r13_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r13_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x195, _regval);
}

static inline dout_t& ia32_mcg_r13_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r13_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x195));
    _os << ("Register mcg_r13 (State of R13 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r14: State of R14 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r14_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r14_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x196)));
}

static inline uint64_t ia32_mcg_r14_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r14_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x196)));
}

static inline void ia32_mcg_r14_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r14_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x196, _regval);
}

static inline void ia32_mcg_r14_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r14_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x196, _regval);
}

static inline dout_t& ia32_mcg_r14_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r14_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x196));
    _os << ("Register mcg_r14 (State of R14 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mcg_r15: State of R15 at MC
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mcg_r15_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r15_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x197)));
}

static inline uint64_t ia32_mcg_r15_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mcg_r15_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x197)));
}

static inline void ia32_mcg_r15_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r15_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x197, _regval);
}

static inline void ia32_mcg_r15_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mcg_r15_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x197, _regval);
}

static inline dout_t& ia32_mcg_r15_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mcg_r15_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x197));
    _os << ("Register mcg_r15 (State of R15 at MC): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register array mc_ctl: Machine check control
 * Type: ia32.uint64 (primitive type)
 */
static const size_t ia32_mc_ctl_length = 5;
static inline uint64_t ia32_mc_ctl_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_ctl_rawrd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x400 + (_i * 4))));
}

static inline uint64_t ia32_mc_ctl_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_ctl_rd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x400 + (_i * 4))));
}

static inline void ia32_mc_ctl_rawwr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_ctl_rawwr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x400 + (_i * 4), _regval);
}

static inline void ia32_mc_ctl_wr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_ctl_wr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x400 + (_i * 4), _regval);
}

static inline dout_t& ia32_mc_ctl_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_ctl_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x400 + (_i * 4)));
    ((((_os << ("Register ")) << ("mc_ctl")) << _i) << ("Machine check control")) << (":");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

static inline dout_t& ia32_mc_ctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_ctl_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 5; _i++) {
        ia32_mc_ctl_pri(_os, _dev, _i);
    }
    return(_os);
}

/*
 * Register array mc_status: Machine check unit status
 * Type: ia32.mc_status (Implicit type of Machine check unit status register array)
 *   mca_ec	(size 16, offset 0, init 0):	RWZC	MCA error code
 *   ms_ec	(size 16, offset 16, init 0):	RWZC	Model-specific error code
 *   other	(size 21, offset 32, init 0):	RWZC	Other information
 *   tbes	(size 2, offset 53, init 0):	RWZC	Threshold-based error status
 *   _anon55	(size 2, offset 55, init 0):	MBZ	_
 *   pcc	(size 1, offset 57, init 0):	RWZC	Processor context corrupt
 *   addrv	(size 1, offset 58, init 0):	RWZC	MCi_ADDR register valid
 *   miscv	(size 1, offset 59, init 0):	RWZC	MCi_MISC register valid
 *   en	(size 1, offset 60, init 0):	RWZC	Error enabled
 *   uc	(size 1, offset 61, init 0):	RWZC	Error uncorrected
 *   over	(size 1, offset 62, init 0):	RWZC	Error overflow
 *   val	(size 1, offset 63, init 0):	RWZC	MCi_STATUS register valid
 */
static const size_t ia32_mc_status_length = 5;
static inline ia32_mc_status_t ia32_mc_status_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_rawrd(__DN(t) *_dev, int _i)
{
    return((ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4))));
}

static inline ia32_mc_status_t ia32_mc_status_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mc_status_t ia32_mc_status_rd(__DN(t) *_dev, int _i)
{
    return((ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4))));
}

static inline void ia32_mc_status_rawwr(__DN(t) *_dev, int _i, ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_status_rawwr(__DN(t) *_dev, int _i, ia32_mc_status_t _regval)
{
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
}

static inline void ia32_mc_status_wr(__DN(t) *_dev, int _i, ia32_mc_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_status_wr(__DN(t) *_dev, int _i, ia32_mc_status_t _regval)
{
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
}

static inline dout_t& ia32_mc_status_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_status_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    ((((_os << ("Register ")) << ("mc_status")) << _i) << ("Machine check unit status")) << (":");
    _os << ("\n");
    ((_os << (" mca_ec =\t")) << ia32_mc_status_mca_ec_extract(_regval)) << ("\t(MCA error code)\n");
    ((_os << (" ms_ec =\t")) << ia32_mc_status_ms_ec_extract(_regval)) << ("\t(Model-specific error code)\n");
    ((_os << (" other =\t")) << ia32_mc_status_other_extract(_regval)) << ("\t(Other information)\n");
    ((_os << (" tbes =\t")) << ia32_mc_status_tbes_extract(_regval)) << ("\t(Threshold-based error status)\n");
    // _anon55 is anonymous
    ((_os << (" pcc =\t")) << ia32_mc_status_pcc_extract(_regval)) << ("\t(Processor context corrupt)\n");
    ((_os << (" addrv =\t")) << ia32_mc_status_addrv_extract(_regval)) << ("\t(MCi_ADDR register valid)\n");
    ((_os << (" miscv =\t")) << ia32_mc_status_miscv_extract(_regval)) << ("\t(MCi_MISC register valid)\n");
    ((_os << (" en =\t")) << ia32_mc_status_en_extract(_regval)) << ("\t(Error enabled)\n");
    ((_os << (" uc =\t")) << ia32_mc_status_uc_extract(_regval)) << ("\t(Error uncorrected)\n");
    ((_os << (" over =\t")) << ia32_mc_status_over_extract(_regval)) << ("\t(Error overflow)\n");
    ((_os << (" val =\t")) << ia32_mc_status_val_extract(_regval)) << ("\t(MCi_STATUS register valid)\n");
    return(_os);
}

static inline dout_t& ia32_mc_status_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_status_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 5; _i++) {
        ia32_mc_status_pri(_os, _dev, _i);
    }
    return(_os);
}

static inline uint16_t ia32_mc_status_mca_ec_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint16_t ia32_mc_status_mca_ec_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_mca_ec_extract(_regval));
}

static inline uint16_t ia32_mc_status_ms_ec_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint16_t ia32_mc_status_ms_ec_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_ms_ec_extract(_regval));
}

static inline uint32_t ia32_mc_status_other_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint32_t ia32_mc_status_other_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_other_extract(_regval));
}

static inline ia32_tbtrk_t ia32_mc_status_tbes_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_tbtrk_t ia32_mc_status_tbes_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_tbes_extract(_regval));
}

static inline uint8_t ia32_mc_status_pcc_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_pcc_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_pcc_extract(_regval));
}

static inline uint8_t ia32_mc_status_addrv_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_addrv_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_addrv_extract(_regval));
}

static inline uint8_t ia32_mc_status_miscv_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_miscv_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_miscv_extract(_regval));
}

static inline uint8_t ia32_mc_status_en_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_en_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_en_extract(_regval));
}

static inline uint8_t ia32_mc_status_uc_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_uc_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_uc_extract(_regval));
}

static inline uint8_t ia32_mc_status_over_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_over_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_over_extract(_regval));
}

static inline uint8_t ia32_mc_status_val_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mc_status_val_rdf(__DN(t) *_dev, int _i)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(__DN(msr)::read64(_dev, 0x401 + (_i * 4)));
    return(ia32_mc_status_val_extract(_regval));
}

static inline void ia32_mc_status_mca_ec_wrf(__DN(t) *_dev, int _i, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_mca_ec_wrf(__DN(t) *_dev, int _i, uint16_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0xffff & (((ia32_mc_status_t )(_fieldval)) << 0));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_ms_ec_wrf(__DN(t) *_dev, int _i, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_ms_ec_wrf(__DN(t) *_dev, int _i, uint16_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0xffff0000 & (((ia32_mc_status_t )(_fieldval)) << 16));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_other_wrf(__DN(t) *_dev, int _i, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_other_wrf(__DN(t) *_dev, int _i, uint32_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x1fffff00000000 & (((ia32_mc_status_t )(_fieldval)) << 32));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_tbes_wrf(__DN(t) *_dev, int _i, ia32_tbtrk_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_tbes_wrf(__DN(t) *_dev, int _i, ia32_tbtrk_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x60000000000000 & (((ia32_mc_status_t )(_fieldval)) << 53));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_pcc_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_pcc_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x200000000000000 & (((ia32_mc_status_t )(_fieldval)) << 57));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_addrv_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_addrv_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x400000000000000 & (((ia32_mc_status_t )(_fieldval)) << 58));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_miscv_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_miscv_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x800000000000000 & (((ia32_mc_status_t )(_fieldval)) << 59));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_en_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_en_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x1000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 60));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_uc_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_uc_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x2000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 61));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_over_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_over_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x4000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 62));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

static inline void ia32_mc_status_val_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mc_status_val_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mc_status_t _regval = (ia32_mc_status_t )(0x8000000000000000 & (((ia32_mc_status_t )(_fieldval)) << 63));
    // No pre-read of register required
    // No read of register shadow required
    _regval = (_regval & 0xfe7fffffffffffff);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x401 + (_i * 4), _regval);
    // No shadow register to write to
}

/*
 * Register array mc_addr: Machine check addr
 * Type: ia32.uint64 (primitive type)
 */
static const size_t ia32_mc_addr_length = 5;
static inline uint64_t ia32_mc_addr_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_addr_rawrd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x402 + (_i * 4))));
}

static inline uint64_t ia32_mc_addr_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_addr_rd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x402 + (_i * 4))));
}

static inline void ia32_mc_addr_rawwr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_addr_rawwr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x402 + (_i * 4), _regval);
}

static inline void ia32_mc_addr_wr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_addr_wr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x402 + (_i * 4), _regval);
}

static inline dout_t& ia32_mc_addr_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_addr_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x402 + (_i * 4)));
    ((((_os << ("Register ")) << ("mc_addr")) << _i) << ("Machine check addr")) << (":");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

static inline dout_t& ia32_mc_addr_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_addr_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 5; _i++) {
        ia32_mc_addr_pri(_os, _dev, _i);
    }
    return(_os);
}

/*
 * Register array mc_misc: Machine check misc
 * Type: ia32.uint64 (primitive type)
 */
static const size_t ia32_mc_misc_length = 5;
static inline uint64_t ia32_mc_misc_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_misc_rawrd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x403 + (_i * 4))));
}

static inline uint64_t ia32_mc_misc_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mc_misc_rd(__DN(t) *_dev, int _i)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x403 + (_i * 4))));
}

static inline void ia32_mc_misc_rawwr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_misc_rawwr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x403 + (_i * 4), _regval);
}

static inline void ia32_mc_misc_wr(__DN(t) *_dev, int _i, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mc_misc_wr(__DN(t) *_dev, int _i, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x403 + (_i * 4), _regval);
}

static inline dout_t& ia32_mc_misc_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_misc_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x403 + (_i * 4)));
    ((((_os << ("Register ")) << ("mc_misc")) << _i) << ("Machine check misc")) << (":");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

static inline dout_t& ia32_mc_misc_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mc_misc_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 5; _i++) {
        ia32_mc_misc_pri(_os, _dev, _i);
    }
    return(_os);
}

/*
 * Register debugctl: Debug control
 * Type: ia32.debugctl (Implicit type of Debug control register)
 *   lbr	(size 1, offset 0, init 0):	RW	Last branch/int/exception
 *   btf	(size 1, offset 1, init 0):	RW	Single-step on branches
 *   _anon2	(size 4, offset 2, init 0):	RSVD	_
 *   tr	(size 1, offset 6, init 0):	RW	Trace messages enable
 *   bts	(size 1, offset 7, init 0):	RW	Branch trace store
 *   btint	(size 1, offset 8, init 0):	RW	Branch trace interrupt
 *   bts_off_os	(size 1, offset 9, init 0):	RW	BTS off in OS
 *   bts_off_usr	(size 1, offset 10, init 0):	RW	BTS off in user code
 *   freeze_lbrs_on_pmi	(size 1, offset 11, init 0):	RW	freeze_lbrs_on_pmi
 *   freeze_perfmon_on_pmi	(size 1, offset 12, init 0):	RW	freeze_perfmon_on_pmi
 *   _anon13	(size 19, offset 13, init 0):	RSVD	_
 */
static inline ia32_debugctl_t ia32_debugctl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_rawrd(__DN(t) *_dev)
{
    return((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)));
}

static inline ia32_debugctl_t ia32_debugctl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_debugctl_t ia32_debugctl_rd(__DN(t) *_dev)
{
    return((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)));
}

static inline void ia32_debugctl_rawwr(__DN(t) *_dev, ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline void ia32_debugctl_rawwr(__DN(t) *_dev, ia32_debugctl_t _regval)
{
    __DN(msr)::write32(_dev, 0x1d9, _regval);
}

static inline void ia32_debugctl_wr(__DN(t) *_dev, ia32_debugctl_t _regval) __attribute__ ((always_inline));
static inline void ia32_debugctl_wr(__DN(t) *_dev, ia32_debugctl_t _regval)
{
    _regval = (_regval & 0x1fc3);
    // No MB1 fields present
    _regval = (_regval | (0xffffe03c & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    __DN(msr)::write32(_dev, 0x1d9, _regval);
}

static inline dout_t& ia32_debugctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_debugctl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    _os << ("Register debugctl (Debug control): ");
    _os << ("\n");
    ((_os << (" lbr =\t")) << ia32_debugctl_lbr_extract(_regval)) << ("\t(Last branch/int/exception)\n");
    ((_os << (" btf =\t")) << ia32_debugctl_btf_extract(_regval)) << ("\t(Single-step on branches)\n");
    // _anon2 is anonymous
    ((_os << (" tr =\t")) << ia32_debugctl_tr_extract(_regval)) << ("\t(Trace messages enable)\n");
    ((_os << (" bts =\t")) << ia32_debugctl_bts_extract(_regval)) << ("\t(Branch trace store)\n");
    ((_os << (" btint =\t")) << ia32_debugctl_btint_extract(_regval)) << ("\t(Branch trace interrupt)\n");
    ((_os << (" bts_off_os =\t")) << ia32_debugctl_bts_off_os_extract(_regval)) << ("\t(BTS off in OS)\n");
    ((_os << (" bts_off_usr =\t")) << ia32_debugctl_bts_off_usr_extract(_regval)) << ("\t(BTS off in user code)\n");
    ((_os << (" freeze_lbrs_on_pmi =\t")) << ia32_debugctl_freeze_lbrs_on_pmi_extract(_regval)) << ("\t(freeze_lbrs_on_pmi)\n");
    ((_os << (" freeze_perfmon_on_pmi =\t")) << ia32_debugctl_freeze_perfmon_on_pmi_extract(_regval)) << ("\t(freeze_perfmon_on_pmi)\n");
    // _anon13 is anonymous
    return(_os);
}

static inline uint8_t ia32_debugctl_lbr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_lbr_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_lbr_extract(_regval));
}

static inline uint8_t ia32_debugctl_btf_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_btf_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_btf_extract(_regval));
}

static inline uint8_t ia32_debugctl_tr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_tr_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_tr_extract(_regval));
}

static inline uint8_t ia32_debugctl_bts_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_bts_extract(_regval));
}

static inline uint8_t ia32_debugctl_btint_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_btint_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_btint_extract(_regval));
}

static inline uint8_t ia32_debugctl_bts_off_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_off_os_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_bts_off_os_extract(_regval));
}

static inline uint8_t ia32_debugctl_bts_off_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_bts_off_usr_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_bts_off_usr_extract(_regval));
}

static inline uint8_t ia32_debugctl_freeze_lbrs_on_pmi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_freeze_lbrs_on_pmi_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_freeze_lbrs_on_pmi_extract(_regval));
}

static inline uint8_t ia32_debugctl_freeze_perfmon_on_pmi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_debugctl_freeze_perfmon_on_pmi_rdf(__DN(t) *_dev)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9));
    return(ia32_debugctl_freeze_perfmon_on_pmi_extract(_regval));
}

static inline void ia32_debugctl_lbr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_lbr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x1 & (((ia32_debugctl_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffe & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_btf_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_btf_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x2 & (((ia32_debugctl_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffd & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_tr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_tr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x40 & (((ia32_debugctl_t )(_fieldval)) << 6));
    _regval = (_regval | (0xffffffbf & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_bts_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_bts_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x80 & (((ia32_debugctl_t )(_fieldval)) << 7));
    _regval = (_regval | (0xffffff7f & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_btint_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_btint_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x100 & (((ia32_debugctl_t )(_fieldval)) << 8));
    _regval = (_regval | (0xfffffeff & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_bts_off_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_bts_off_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x200 & (((ia32_debugctl_t )(_fieldval)) << 9));
    _regval = (_regval | (0xfffffdff & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_bts_off_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_bts_off_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x400 & (((ia32_debugctl_t )(_fieldval)) << 10));
    _regval = (_regval | (0xfffffbff & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_freeze_lbrs_on_pmi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_freeze_lbrs_on_pmi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x800 & (((ia32_debugctl_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffff7ff & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

static inline void ia32_debugctl_freeze_perfmon_on_pmi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_debugctl_freeze_perfmon_on_pmi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_debugctl_t _regval = (ia32_debugctl_t )(0x1000 & (((ia32_debugctl_t )(_fieldval)) << 12));
    _regval = (_regval | (0xffffefff & ((ia32_debugctl_t )(__DN(msr)::read32(_dev, 0x1d9)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write32(_dev, 0x1d9, _regval);
    // No shadow register to write to
}

/*
 * Register tsc: Time stamp counter
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_tsc_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_tsc_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x10)));
}

static inline uint64_t ia32_tsc_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_tsc_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x10)));
}

static inline void ia32_tsc_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_tsc_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x10, _regval);
}

static inline void ia32_tsc_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_tsc_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x10, _regval);
}

static inline dout_t& ia32_tsc_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_tsc_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x10));
    _os << ("Register tsc (Time stamp counter): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register pmc0: Perfmon counter 0
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_pmc0_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_pmc0_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc1)));
}

static inline uint64_t ia32_pmc0_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_pmc0_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc1)));
}

static inline void ia32_pmc0_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_pmc0_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc1, _regval);
}

static inline void ia32_pmc0_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_pmc0_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc1, _regval);
}

static inline dout_t& ia32_pmc0_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_pmc0_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc1));
    _os << ("Register pmc0 (Perfmon counter 0): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register pmc1: Perfmon counter 1
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_pmc1_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_pmc1_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc2)));
}

static inline uint64_t ia32_pmc1_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_pmc1_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc2)));
}

static inline void ia32_pmc1_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_pmc1_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc2, _regval);
}

static inline void ia32_pmc1_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_pmc1_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc2, _regval);
}

static inline dout_t& ia32_pmc1_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_pmc1_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc2));
    _os << ("Register pmc1 (Perfmon counter 1): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register perfevtsel0: Perfmon event select 0
 * Type: ia32.perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   pc	(size 1, offset 19, init 0):	RW	Pin control
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
static inline ia32_perfevtsel_t ia32_perfevtsel0_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel0_rawrd(__DN(t) *_dev)
{
    return((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)));
}

static inline ia32_perfevtsel_t ia32_perfevtsel0_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel0_rd(__DN(t) *_dev)
{
    return((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)));
}

static inline void ia32_perfevtsel0_rawwr(__DN(t) *_dev, ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_rawwr(__DN(t) *_dev, ia32_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0x186, _regval);
}

static inline void ia32_perfevtsel0_wr(__DN(t) *_dev, ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_wr(__DN(t) *_dev, ia32_perfevtsel_t _regval)
{
    _regval = (_regval & 0xffdfffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffffff00200000 & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    __DN(msr)::write64(_dev, 0x186, _regval);
}

static inline dout_t& ia32_perfevtsel0_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfevtsel0_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    _os << ("Register perfevtsel0 (Perfmon event select 0): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    ((_os << (" pc =\t")) << ia32_perfevtsel_pc_extract(_regval)) << ("\t(Pin control)\n");
    ((_os << (" intr =\t")) << ia32_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    // _anon32 is anonymous
    return(_os);
}

static inline uint8_t ia32_perfevtsel0_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_evsel_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_umask_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_usr_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_os_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_e_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_pc_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_pc_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_pc_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_intr_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_en_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_inv_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_perfevtsel0_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel0_cmask_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186));
    return(ia32_perfevtsel_cmask_extract(_regval));
}

static inline void ia32_perfevtsel0_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff & (((ia32_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff00 & (((ia32_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x10000 & (((ia32_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x20000 & (((ia32_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x40000 & (((ia32_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_pc_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_pc_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x80000 & (((ia32_perfevtsel_t )(_fieldval)) << 19));
    _regval = (_regval | (0xfffffffffff7ffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x100000 & (((ia32_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x400000 & (((ia32_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x800000 & (((ia32_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel0_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel0_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff000000 & (((ia32_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x186)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x186, _regval);
    // No shadow register to write to
}

/*
 * Register perfevtsel1: Perfmon event select 1
 * Type: ia32.perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   pc	(size 1, offset 19, init 0):	RW	Pin control
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
static inline ia32_perfevtsel_t ia32_perfevtsel1_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel1_rawrd(__DN(t) *_dev)
{
    return((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)));
}

static inline ia32_perfevtsel_t ia32_perfevtsel1_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perfevtsel_t ia32_perfevtsel1_rd(__DN(t) *_dev)
{
    return((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)));
}

static inline void ia32_perfevtsel1_rawwr(__DN(t) *_dev, ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_rawwr(__DN(t) *_dev, ia32_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0x187, _regval);
}

static inline void ia32_perfevtsel1_wr(__DN(t) *_dev, ia32_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_wr(__DN(t) *_dev, ia32_perfevtsel_t _regval)
{
    _regval = (_regval & 0xffdfffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffffff00200000 & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    __DN(msr)::write64(_dev, 0x187, _regval);
}

static inline dout_t& ia32_perfevtsel1_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfevtsel1_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    _os << ("Register perfevtsel1 (Perfmon event select 1): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    ((_os << (" pc =\t")) << ia32_perfevtsel_pc_extract(_regval)) << ("\t(Pin control)\n");
    ((_os << (" intr =\t")) << ia32_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    // _anon32 is anonymous
    return(_os);
}

static inline uint8_t ia32_perfevtsel1_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_evsel_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_umask_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_usr_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_os_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_e_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_pc_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_pc_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_pc_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_intr_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_en_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_inv_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_perfevtsel1_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perfevtsel1_cmask_rdf(__DN(t) *_dev)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187));
    return(ia32_perfevtsel_cmask_extract(_regval));
}

static inline void ia32_perfevtsel1_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff & (((ia32_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff00 & (((ia32_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x10000 & (((ia32_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x20000 & (((ia32_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x40000 & (((ia32_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_pc_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_pc_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x80000 & (((ia32_perfevtsel_t )(_fieldval)) << 19));
    _regval = (_regval | (0xfffffffffff7ffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x100000 & (((ia32_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x400000 & (((ia32_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0x800000 & (((ia32_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

static inline void ia32_perfevtsel1_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perfevtsel1_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perfevtsel_t _regval = (ia32_perfevtsel_t )(0xff000000 & (((ia32_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_perfevtsel_t )(__DN(msr)::read64(_dev, 0x187)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x187, _regval);
    // No shadow register to write to
}

/*
 * Register fixed_ctr0: Fixed-funct. counter 0
 * Type: ia32.fixed_ctr (Fixed counter)
 *   v	(size 40, offset 0, init 0):	RW	Value
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
static inline ia32_fixed_ctr_t ia32_fixed_ctr0_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr0_rawrd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309)));
}

static inline ia32_fixed_ctr_t ia32_fixed_ctr0_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr0_rd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309)));
}

static inline void ia32_fixed_ctr0_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr0_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    __DN(msr)::write64(_dev, 0x309, _regval);
}

static inline void ia32_fixed_ctr0_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr0_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    _regval = (_regval & 0xffffffffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309)))));
    __DN(msr)::write64(_dev, 0x309, _regval);
}

static inline dout_t& ia32_fixed_ctr0_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fixed_ctr0_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309));
    _os << ("Register fixed_ctr0 (Fixed-funct. counter 0): ");
    _os << ("\n");
    ((_os << (" v =\t")) << ia32_fixed_ctr_v_extract(_regval)) << ("\t(Value)\n");
    // _anon40 is anonymous
    return(_os);
}

static inline uint64_t ia32_fixed_ctr0_v_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_fixed_ctr0_v_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309));
    return(ia32_fixed_ctr_v_extract(_regval));
}

static inline void ia32_fixed_ctr0_v_wrf(__DN(t) *_dev, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr0_v_wrf(__DN(t) *_dev, uint64_t _fieldval)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(0xffffffffff & (((ia32_fixed_ctr_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x309)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x309, _regval);
    // No shadow register to write to
}

/*
 * Register fixed_ctr1: Fixed-funct. counter 1
 * Type: ia32.fixed_ctr (Fixed counter)
 *   v	(size 40, offset 0, init 0):	RW	Value
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
static inline ia32_fixed_ctr_t ia32_fixed_ctr1_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr1_rawrd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a)));
}

static inline ia32_fixed_ctr_t ia32_fixed_ctr1_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr1_rd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a)));
}

static inline void ia32_fixed_ctr1_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr1_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    __DN(msr)::write64(_dev, 0x30a, _regval);
}

static inline void ia32_fixed_ctr1_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr1_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    _regval = (_regval & 0xffffffffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a)))));
    __DN(msr)::write64(_dev, 0x30a, _regval);
}

static inline dout_t& ia32_fixed_ctr1_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fixed_ctr1_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a));
    _os << ("Register fixed_ctr1 (Fixed-funct. counter 1): ");
    _os << ("\n");
    ((_os << (" v =\t")) << ia32_fixed_ctr_v_extract(_regval)) << ("\t(Value)\n");
    // _anon40 is anonymous
    return(_os);
}

static inline uint64_t ia32_fixed_ctr1_v_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_fixed_ctr1_v_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a));
    return(ia32_fixed_ctr_v_extract(_regval));
}

static inline void ia32_fixed_ctr1_v_wrf(__DN(t) *_dev, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr1_v_wrf(__DN(t) *_dev, uint64_t _fieldval)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(0xffffffffff & (((ia32_fixed_ctr_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x30a, _regval);
    // No shadow register to write to
}

/*
 * Register fixed_ctr2: Fixed-funct. counter 2
 * Type: ia32.fixed_ctr (Fixed counter)
 *   v	(size 40, offset 0, init 0):	RW	Value
 *   _anon40	(size 24, offset 40, init 0):	RSVD	_
 */
static inline ia32_fixed_ctr_t ia32_fixed_ctr2_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr2_rawrd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b)));
}

static inline ia32_fixed_ctr_t ia32_fixed_ctr2_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_t ia32_fixed_ctr2_rd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b)));
}

static inline void ia32_fixed_ctr2_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr2_rawwr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    __DN(msr)::write64(_dev, 0x30b, _regval);
}

static inline void ia32_fixed_ctr2_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr2_wr(__DN(t) *_dev, ia32_fixed_ctr_t _regval)
{
    _regval = (_regval & 0xffffffffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b)))));
    __DN(msr)::write64(_dev, 0x30b, _regval);
}

static inline dout_t& ia32_fixed_ctr2_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fixed_ctr2_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b));
    _os << ("Register fixed_ctr2 (Fixed-funct. counter 2): ");
    _os << ("\n");
    ((_os << (" v =\t")) << ia32_fixed_ctr_v_extract(_regval)) << ("\t(Value)\n");
    // _anon40 is anonymous
    return(_os);
}

static inline uint64_t ia32_fixed_ctr2_v_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_fixed_ctr2_v_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b));
    return(ia32_fixed_ctr_v_extract(_regval));
}

static inline void ia32_fixed_ctr2_v_wrf(__DN(t) *_dev, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr2_v_wrf(__DN(t) *_dev, uint64_t _fieldval)
{
    ia32_fixed_ctr_t _regval = (ia32_fixed_ctr_t )(0xffffffffff & (((ia32_fixed_ctr_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffff0000000000 & ((ia32_fixed_ctr_t )(__DN(msr)::read64(_dev, 0x30b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x30b, _regval);
    // No shadow register to write to
}

/*
 * Register fixed_ctr_ctl: Fixed counter control
 * Type: ia32.fixed_ctr_ctl (Implicit type of Fixed counter control register)
 *   enos0	(size 1, offset 0, init 0):	RW	Enable 0 for OS
 *   enusrs0	(size 1, offset 1, init 0):	RW	Enable 0 for user
 *   _anon2	(size 1, offset 2, init 0):	RSVD	_
 *   pmi0	(size 1, offset 3, init 0):	RW	Enable PMI on overflow 0
 *   enos1	(size 1, offset 4, init 0):	RW	Enable 1 for OS
 *   enusrs1	(size 1, offset 5, init 0):	RW	Enable 1 for user
 *   _anon6	(size 1, offset 6, init 0):	RSVD	_
 *   pmi1	(size 1, offset 7, init 0):	RW	Enable PMI on overflow 1
 *   enos2	(size 1, offset 8, init 0):	RW	Enable 2 for OS
 *   enusrs2	(size 1, offset 9, init 0):	RW	Enable 2 for user
 *   _anon10	(size 1, offset 10, init 0):	RSVD	_
 *   pmi2	(size 1, offset 11, init 0):	RW	Enable PMI on overflow 2
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_rawrd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)));
}

static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fixed_ctr_ctl_t ia32_fixed_ctr_ctl_rd(__DN(t) *_dev)
{
    return((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)));
}

static inline void ia32_fixed_ctr_ctl_rawwr(__DN(t) *_dev, ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_rawwr(__DN(t) *_dev, ia32_fixed_ctr_ctl_t _regval)
{
    __DN(msr)::write64(_dev, 0x38d, _regval);
}

static inline void ia32_fixed_ctr_ctl_wr(__DN(t) *_dev, ia32_fixed_ctr_ctl_t _regval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_wr(__DN(t) *_dev, ia32_fixed_ctr_ctl_t _regval)
{
    _regval = (_regval & 0xbbb);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffff444 & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    __DN(msr)::write64(_dev, 0x38d, _regval);
}

static inline dout_t& ia32_fixed_ctr_ctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fixed_ctr_ctl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    _os << ("Register fixed_ctr_ctl (Fixed counter control): ");
    _os << ("\n");
    ((_os << (" enos0 =\t")) << ia32_fixed_ctr_ctl_enos0_extract(_regval)) << ("\t(Enable 0 for OS)\n");
    ((_os << (" enusrs0 =\t")) << ia32_fixed_ctr_ctl_enusrs0_extract(_regval)) << ("\t(Enable 0 for user)\n");
    // _anon2 is anonymous
    ((_os << (" pmi0 =\t")) << ia32_fixed_ctr_ctl_pmi0_extract(_regval)) << ("\t(Enable PMI on overflow 0)\n");
    ((_os << (" enos1 =\t")) << ia32_fixed_ctr_ctl_enos1_extract(_regval)) << ("\t(Enable 1 for OS)\n");
    ((_os << (" enusrs1 =\t")) << ia32_fixed_ctr_ctl_enusrs1_extract(_regval)) << ("\t(Enable 1 for user)\n");
    // _anon6 is anonymous
    ((_os << (" pmi1 =\t")) << ia32_fixed_ctr_ctl_pmi1_extract(_regval)) << ("\t(Enable PMI on overflow 1)\n");
    ((_os << (" enos2 =\t")) << ia32_fixed_ctr_ctl_enos2_extract(_regval)) << ("\t(Enable 2 for OS)\n");
    ((_os << (" enusrs2 =\t")) << ia32_fixed_ctr_ctl_enusrs2_extract(_regval)) << ("\t(Enable 2 for user)\n");
    // _anon10 is anonymous
    ((_os << (" pmi2 =\t")) << ia32_fixed_ctr_ctl_pmi2_extract(_regval)) << ("\t(Enable PMI on overflow 2)\n");
    // _anon12 is anonymous
    return(_os);
}

static inline uint8_t ia32_fixed_ctr_ctl_enos0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos0_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enos0_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs0_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enusrs0_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi0_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_pmi0_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_enos1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos1_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enos1_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs1_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enusrs1_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi1_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_pmi1_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_enos2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enos2_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enos2_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_enusrs2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_enusrs2_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_enusrs2_extract(_regval));
}

static inline uint8_t ia32_fixed_ctr_ctl_pmi2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_fixed_ctr_ctl_pmi2_rdf(__DN(t) *_dev)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d));
    return(ia32_fixed_ctr_ctl_pmi2_extract(_regval));
}

static inline void ia32_fixed_ctr_ctl_enos0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enos0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x1 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_enusrs0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enusrs0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x2 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffffd & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_pmi0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_pmi0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x8 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 3));
    _regval = (_regval | (0xfffffffffffffff7 & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_enos1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enos1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x10 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 4));
    _regval = (_regval | (0xffffffffffffffef & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_enusrs1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enusrs1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x20 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 5));
    _regval = (_regval | (0xffffffffffffffdf & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_pmi1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_pmi1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x80 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 7));
    _regval = (_regval | (0xffffffffffffff7f & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_enos2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enos2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x100 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 8));
    _regval = (_regval | (0xfffffffffffffeff & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_enusrs2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_enusrs2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x200 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 9));
    _regval = (_regval | (0xfffffffffffffdff & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

static inline void ia32_fixed_ctr_ctl_pmi2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fixed_ctr_ctl_pmi2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_fixed_ctr_ctl_t _regval = (ia32_fixed_ctr_ctl_t )(0x800 & (((ia32_fixed_ctr_ctl_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff7ff & ((ia32_fixed_ctr_ctl_t )(__DN(msr)::read64(_dev, 0x38d)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38d, _regval);
    // No shadow register to write to
}

/*
 * Register perf_global_status: Perfmon global status
 * Type: ia32.perf_global (Perfmon global status/overflow)
 *   pmc0	(size 1, offset 0, init 0):	RO	PMC0 overflow
 *   pmc1	(size 1, offset 1, init 0):	RO	PMC1 overflow
 *   _anon2	(size 30, offset 2, init 0):	RSVD	_
 *   ctr0	(size 1, offset 32, init 0):	RO	Fixed CTR0 overflow
 *   ctr1	(size 1, offset 33, init 0):	RO	Fixed CTR1 overflow
 *   ctr2	(size 1, offset 34, init 0):	RO	Fixed CTR2 overflow
 *   _anon35	(size 27, offset 35, init 0):	RSVD	_
 *   ovfbuf	(size 1, offset 62, init 0):	RO	Overflow buffer
 *   condchgd	(size 1, offset 63, init 0):	RO	Condition changed
 */
static inline ia32_perf_global_t ia32_perf_global_status_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_status_rawrd(__DN(t) *_dev)
{
    return((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e)));
}

static inline ia32_perf_global_t ia32_perf_global_status_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_status_rd(__DN(t) *_dev)
{
    return((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e)));
}

static inline void ia32_perf_global_status_rawwr(__DN(t) *_dev, ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_global_status_rawwr(__DN(t) *_dev, ia32_perf_global_t _regval)
{
    __DN(msr)::write64(_dev, 0x38e, _regval);
}

// Register perf_global_status is not writeable
static inline dout_t& ia32_perf_global_status_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perf_global_status_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    _os << ("Register perf_global_status (Perfmon global status): ");
    _os << ("\n");
    ((_os << (" pmc0 =\t")) << ia32_perf_global_pmc0_extract(_regval)) << ("\t(PMC0 overflow)\n");
    ((_os << (" pmc1 =\t")) << ia32_perf_global_pmc1_extract(_regval)) << ("\t(PMC1 overflow)\n");
    // _anon2 is anonymous
    ((_os << (" ctr0 =\t")) << ia32_perf_global_ctr0_extract(_regval)) << ("\t(Fixed CTR0 overflow)\n");
    ((_os << (" ctr1 =\t")) << ia32_perf_global_ctr1_extract(_regval)) << ("\t(Fixed CTR1 overflow)\n");
    ((_os << (" ctr2 =\t")) << ia32_perf_global_ctr2_extract(_regval)) << ("\t(Fixed CTR2 overflow)\n");
    // _anon35 is anonymous
    ((_os << (" ovfbuf =\t")) << ia32_perf_global_ovfbuf_extract(_regval)) << ("\t(Overflow buffer)\n");
    ((_os << (" condchgd =\t")) << ia32_perf_global_condchgd_extract(_regval)) << ("\t(Condition changed)\n");
    return(_os);
}

static inline uint8_t ia32_perf_global_status_pmc0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_pmc0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_pmc0_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_pmc1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_pmc1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_pmc1_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_ctr0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_ctr0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_ctr0_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_ctr1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_ctr1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_ctr1_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_ctr2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_ctr2_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_ctr2_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_ovfbuf_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_ovfbuf_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_ovfbuf_extract(_regval));
}

static inline uint8_t ia32_perf_global_status_condchgd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_status_condchgd_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x38e));
    return(ia32_perf_global_condchgd_extract(_regval));
}

/*
 * Register perf_global_over: Perfmon global overlflow control
 * Type: ia32.perf_global (Perfmon global status/overflow)
 *   pmc0	(size 1, offset 0, init 0):	RWZC	PMC0 overflow
 *   pmc1	(size 1, offset 1, init 0):	RWZC	PMC1 overflow
 *   _anon2	(size 30, offset 2, init 0):	RSVD	_
 *   ctr0	(size 1, offset 32, init 0):	RWZC	Fixed CTR0 overflow
 *   ctr1	(size 1, offset 33, init 0):	RWZC	Fixed CTR1 overflow
 *   ctr2	(size 1, offset 34, init 0):	RWZC	Fixed CTR2 overflow
 *   _anon35	(size 27, offset 35, init 0):	RSVD	_
 *   ovfbuf	(size 1, offset 62, init 0):	RWZC	Overflow buffer
 *   condchgd	(size 1, offset 63, init 0):	RWZC	Condition changed
 */
static inline ia32_perf_global_t ia32_perf_global_over_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_over_rawrd(__DN(t) *_dev)
{
    return((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)));
}

static inline ia32_perf_global_t ia32_perf_global_over_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_t ia32_perf_global_over_rd(__DN(t) *_dev)
{
    return((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)));
}

static inline void ia32_perf_global_over_rawwr(__DN(t) *_dev, ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_rawwr(__DN(t) *_dev, ia32_perf_global_t _regval)
{
    __DN(msr)::write64(_dev, 0x390, _regval);
}

static inline void ia32_perf_global_over_wr(__DN(t) *_dev, ia32_perf_global_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_wr(__DN(t) *_dev, ia32_perf_global_t _regval)
{
    _regval = (_regval & 0xc000000700000003);
    // No MB1 fields present
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    __DN(msr)::write64(_dev, 0x390, _regval);
}

static inline dout_t& ia32_perf_global_over_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perf_global_over_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    _os << ("Register perf_global_over (Perfmon global overlflow control): ");
    _os << ("\n");
    ((_os << (" pmc0 =\t")) << ia32_perf_global_pmc0_extract(_regval)) << ("\t(PMC0 overflow)\n");
    ((_os << (" pmc1 =\t")) << ia32_perf_global_pmc1_extract(_regval)) << ("\t(PMC1 overflow)\n");
    // _anon2 is anonymous
    ((_os << (" ctr0 =\t")) << ia32_perf_global_ctr0_extract(_regval)) << ("\t(Fixed CTR0 overflow)\n");
    ((_os << (" ctr1 =\t")) << ia32_perf_global_ctr1_extract(_regval)) << ("\t(Fixed CTR1 overflow)\n");
    ((_os << (" ctr2 =\t")) << ia32_perf_global_ctr2_extract(_regval)) << ("\t(Fixed CTR2 overflow)\n");
    // _anon35 is anonymous
    ((_os << (" ovfbuf =\t")) << ia32_perf_global_ovfbuf_extract(_regval)) << ("\t(Overflow buffer)\n");
    ((_os << (" condchgd =\t")) << ia32_perf_global_condchgd_extract(_regval)) << ("\t(Condition changed)\n");
    return(_os);
}

static inline uint8_t ia32_perf_global_over_pmc0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_pmc0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_pmc0_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_pmc1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_pmc1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_pmc1_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_ctr0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_ctr0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_ctr0_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_ctr1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_ctr1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_ctr1_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_ctr2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_ctr2_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_ctr2_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_ovfbuf_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_ovfbuf_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_ovfbuf_extract(_regval));
}

static inline uint8_t ia32_perf_global_over_condchgd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_over_condchgd_rdf(__DN(t) *_dev)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390));
    return(ia32_perf_global_condchgd_extract(_regval));
}

static inline void ia32_perf_global_over_pmc0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_pmc0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x1 & (((ia32_perf_global_t )(_fieldval)) << 0));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_pmc1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_pmc1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x2 & (((ia32_perf_global_t )(_fieldval)) << 1));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_ctr0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_ctr0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x100000000 & (((ia32_perf_global_t )(_fieldval)) << 32));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_ctr1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_ctr1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x200000000 & (((ia32_perf_global_t )(_fieldval)) << 33));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_ctr2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_ctr2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x400000000 & (((ia32_perf_global_t )(_fieldval)) << 34));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_ovfbuf_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_ovfbuf_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x4000000000000000 & (((ia32_perf_global_t )(_fieldval)) << 62));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_over_condchgd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_over_condchgd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_t _regval = (ia32_perf_global_t )(0x8000000000000000 & (((ia32_perf_global_t )(_fieldval)) << 63));
    _regval = (_regval | (0x3ffffff8fffffffc & ((ia32_perf_global_t )(__DN(msr)::read64(_dev, 0x390)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x390, _regval);
    // No shadow register to write to
}

/*
 * Register perf_global_ctrl: Perfmon global control
 * Type: ia32.perf_global_ctrl (Implicit type of Perfmon global control register)
 *   pmc0	(size 1, offset 0, init 0):	RW	PMC0 enable
 *   pmc1	(size 1, offset 1, init 0):	RW	PMC1 enable
 *   _anon2	(size 30, offset 2, init 0):	RSVD	_
 *   ctr0	(size 1, offset 32, init 0):	RW	Fixed CTR0 enable
 *   ctr1	(size 1, offset 33, init 0):	RW	Fixed CTR1 enable
 *   ctr2	(size 1, offset 34, init 0):	RW	Fixed CTR2 enable
 *   _anon35	(size 29, offset 35, init 0):	RSVD	_
 */
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_rawrd(__DN(t) *_dev)
{
    return((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)));
}

static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_global_ctrl_t ia32_perf_global_ctrl_rd(__DN(t) *_dev)
{
    return((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)));
}

static inline void ia32_perf_global_ctrl_rawwr(__DN(t) *_dev, ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_rawwr(__DN(t) *_dev, ia32_perf_global_ctrl_t _regval)
{
    __DN(msr)::write64(_dev, 0x38f, _regval);
}

static inline void ia32_perf_global_ctrl_wr(__DN(t) *_dev, ia32_perf_global_ctrl_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_wr(__DN(t) *_dev, ia32_perf_global_ctrl_t _regval)
{
    _regval = (_regval & 0x700000003);
    // No MB1 fields present
    _regval = (_regval | (0xfffffff8fffffffc & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    __DN(msr)::write64(_dev, 0x38f, _regval);
}

static inline dout_t& ia32_perf_global_ctrl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perf_global_ctrl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    _os << ("Register perf_global_ctrl (Perfmon global control): ");
    _os << ("\n");
    ((_os << (" pmc0 =\t")) << ia32_perf_global_ctrl_pmc0_extract(_regval)) << ("\t(PMC0 enable)\n");
    ((_os << (" pmc1 =\t")) << ia32_perf_global_ctrl_pmc1_extract(_regval)) << ("\t(PMC1 enable)\n");
    // _anon2 is anonymous
    ((_os << (" ctr0 =\t")) << ia32_perf_global_ctrl_ctr0_extract(_regval)) << ("\t(Fixed CTR0 enable)\n");
    ((_os << (" ctr1 =\t")) << ia32_perf_global_ctrl_ctr1_extract(_regval)) << ("\t(Fixed CTR1 enable)\n");
    ((_os << (" ctr2 =\t")) << ia32_perf_global_ctrl_ctr2_extract(_regval)) << ("\t(Fixed CTR2 enable)\n");
    // _anon35 is anonymous
    return(_os);
}

static inline uint8_t ia32_perf_global_ctrl_pmc0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_pmc0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    return(ia32_perf_global_ctrl_pmc0_extract(_regval));
}

static inline uint8_t ia32_perf_global_ctrl_pmc1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_pmc1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    return(ia32_perf_global_ctrl_pmc1_extract(_regval));
}

static inline uint8_t ia32_perf_global_ctrl_ctr0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr0_rdf(__DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    return(ia32_perf_global_ctrl_ctr0_extract(_regval));
}

static inline uint8_t ia32_perf_global_ctrl_ctr1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr1_rdf(__DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    return(ia32_perf_global_ctrl_ctr1_extract(_regval));
}

static inline uint8_t ia32_perf_global_ctrl_ctr2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_global_ctrl_ctr2_rdf(__DN(t) *_dev)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f));
    return(ia32_perf_global_ctrl_ctr2_extract(_regval));
}

static inline void ia32_perf_global_ctrl_pmc0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_pmc0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(0x1 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38f, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_ctrl_pmc1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_pmc1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(0x2 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffffd & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38f, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_ctrl_ctr0_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_ctr0_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(0x100000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffffeffffffff & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38f, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_ctrl_ctr1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_ctr1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(0x200000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 33));
    _regval = (_regval | (0xfffffffdffffffff & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38f, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_global_ctrl_ctr2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_global_ctrl_ctr2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_global_ctrl_t _regval = (ia32_perf_global_ctrl_t )(0x400000000 & (((ia32_perf_global_ctrl_t )(_fieldval)) << 34));
    _regval = (_regval | (0xfffffffbffffffff & ((ia32_perf_global_ctrl_t )(__DN(msr)::read64(_dev, 0x38f)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x38f, _regval);
    // No shadow register to write to
}

/*
 * Register pebs_enable: Precise event-based sampling enable
 * Type: ia32.pebs_enable (Implicit type of Precise event-based sampling enable register)
 *   en	(size 1, offset 0, init 0):	RW	enable
 *   _anon1	(size 63, offset 1, init 0):	RSVD	_
 */
static inline ia32_pebs_enable_t ia32_pebs_enable_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pebs_enable_t ia32_pebs_enable_rawrd(__DN(t) *_dev)
{
    return((ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1)));
}

static inline ia32_pebs_enable_t ia32_pebs_enable_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pebs_enable_t ia32_pebs_enable_rd(__DN(t) *_dev)
{
    return((ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1)));
}

static inline void ia32_pebs_enable_rawwr(__DN(t) *_dev, ia32_pebs_enable_t _regval) __attribute__ ((always_inline));
static inline void ia32_pebs_enable_rawwr(__DN(t) *_dev, ia32_pebs_enable_t _regval)
{
    __DN(msr)::write64(_dev, 0x3f1, _regval);
}

static inline void ia32_pebs_enable_wr(__DN(t) *_dev, ia32_pebs_enable_t _regval) __attribute__ ((always_inline));
static inline void ia32_pebs_enable_wr(__DN(t) *_dev, ia32_pebs_enable_t _regval)
{
    _regval = (_regval & 0x1);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1)))));
    __DN(msr)::write64(_dev, 0x3f1, _regval);
}

static inline dout_t& ia32_pebs_enable_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_pebs_enable_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_pebs_enable_t _regval = (ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1));
    _os << ("Register pebs_enable (Precise event-based sampling enable): ");
    _os << ("\n");
    ((_os << (" en =\t")) << ia32_pebs_enable_en_extract(_regval)) << ("\t(enable)\n");
    // _anon1 is anonymous
    return(_os);
}

static inline uint8_t ia32_pebs_enable_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_pebs_enable_en_rdf(__DN(t) *_dev)
{
    ia32_pebs_enable_t _regval = (ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1));
    return(ia32_pebs_enable_en_extract(_regval));
}

static inline void ia32_pebs_enable_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_pebs_enable_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_pebs_enable_t _regval = (ia32_pebs_enable_t )(0x1 & (((ia32_pebs_enable_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_pebs_enable_t )(__DN(msr)::read64(_dev, 0x3f1)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x3f1, _regval);
    // No shadow register to write to
}

/*
 * Register efer: Extended features enable
 * Type: ia32.efer (Implicit type of Extended features enable register)
 *   sce	(size 1, offset 0, init 0):	RW	SYSCALL enable
 *   _anon1	(size 7, offset 1, init 0):	RSVD	_
 *   lme	(size 1, offset 8, init 0):	RW	Long mode enable
 *   _anon9	(size 1, offset 9, init 0):	RSVD	_
 *   lma	(size 1, offset 10, init 0):	RW	Long mode active
 *   nxe	(size 1, offset 11, init 0):	RW	No-execute enable
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
static inline ia32_efer_t ia32_efer_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_rawrd(__DN(t) *_dev)
{
    return((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)));
}

static inline ia32_efer_t ia32_efer_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_efer_t ia32_efer_rd(__DN(t) *_dev)
{
    return((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)));
}

static inline void ia32_efer_rawwr(__DN(t) *_dev, ia32_efer_t _regval) __attribute__ ((always_inline));
static inline void ia32_efer_rawwr(__DN(t) *_dev, ia32_efer_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
}

static inline void ia32_efer_wr(__DN(t) *_dev, ia32_efer_t _regval) __attribute__ ((always_inline));
static inline void ia32_efer_wr(__DN(t) *_dev, ia32_efer_t _regval)
{
    _regval = (_regval & 0xd01);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffff2fe & ((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)))));
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
}

static inline dout_t& ia32_efer_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_efer_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_efer_t _regval = (ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080));
    _os << ("Register efer (Extended features enable): ");
    _os << ("\n");
    ((_os << (" sce =\t")) << ia32_efer_sce_extract(_regval)) << ("\t(SYSCALL enable)\n");
    // _anon1 is anonymous
    ((_os << (" lme =\t")) << ia32_efer_lme_extract(_regval)) << ("\t(Long mode enable)\n");
    // _anon9 is anonymous
    ((_os << (" lma =\t")) << ia32_efer_lma_extract(_regval)) << ("\t(Long mode active)\n");
    ((_os << (" nxe =\t")) << ia32_efer_nxe_extract(_regval)) << ("\t(No-execute enable)\n");
    // _anon12 is anonymous
    return(_os);
}

static inline uint8_t ia32_efer_sce_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_sce_rdf(__DN(t) *_dev)
{
    ia32_efer_t _regval = (ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080));
    return(ia32_efer_sce_extract(_regval));
}

static inline uint8_t ia32_efer_lme_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_lme_rdf(__DN(t) *_dev)
{
    ia32_efer_t _regval = (ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080));
    return(ia32_efer_lme_extract(_regval));
}

static inline uint8_t ia32_efer_lma_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_lma_rdf(__DN(t) *_dev)
{
    ia32_efer_t _regval = (ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080));
    return(ia32_efer_lma_extract(_regval));
}

static inline uint8_t ia32_efer_nxe_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_efer_nxe_rdf(__DN(t) *_dev)
{
    ia32_efer_t _regval = (ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080));
    return(ia32_efer_nxe_extract(_regval));
}

static inline void ia32_efer_sce_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_efer_sce_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_efer_t _regval = (ia32_efer_t )(0x1 & (((ia32_efer_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
    // No shadow register to write to
}

static inline void ia32_efer_lme_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_efer_lme_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_efer_t _regval = (ia32_efer_t )(0x100 & (((ia32_efer_t )(_fieldval)) << 8));
    _regval = (_regval | (0xfffffffffffffeff & ((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
    // No shadow register to write to
}

static inline void ia32_efer_lma_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_efer_lma_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_efer_t _regval = (ia32_efer_t )(0x400 & (((ia32_efer_t )(_fieldval)) << 10));
    _regval = (_regval | (0xfffffffffffffbff & ((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
    // No shadow register to write to
}

static inline void ia32_efer_nxe_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_efer_nxe_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_efer_t _regval = (ia32_efer_t )(0x800 & (((ia32_efer_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff7ff & ((ia32_efer_t )(__DN(msr)::read64(_dev, 0xc0000080)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000080, _regval);
    // No shadow register to write to
}

/*
 * Register star: Syscall target address
 * Type: ia32.star (Implicit type of Syscall target address register)
 *   _anon0	(size 32, offset 0, init 0):	RSVD	_
 *   call	(size 16, offset 32, init 0):	RW	SYSCALL CS and SS
 *   ret	(size 16, offset 48, init 0):	RW	SYSRET CS and SS
 */
static inline ia32_star_t ia32_star_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_star_t ia32_star_rawrd(__DN(t) *_dev)
{
    return((ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081)));
}

static inline ia32_star_t ia32_star_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_star_t ia32_star_rd(__DN(t) *_dev)
{
    return((ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081)));
}

static inline void ia32_star_rawwr(__DN(t) *_dev, ia32_star_t _regval) __attribute__ ((always_inline));
static inline void ia32_star_rawwr(__DN(t) *_dev, ia32_star_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000081, _regval);
}

static inline void ia32_star_wr(__DN(t) *_dev, ia32_star_t _regval) __attribute__ ((always_inline));
static inline void ia32_star_wr(__DN(t) *_dev, ia32_star_t _regval)
{
    _regval = (_regval & 0xffffffff00000000);
    // No MB1 fields present
    _regval = (_regval | (0xffffffff & ((ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081)))));
    __DN(msr)::write64(_dev, 0xc0000081, _regval);
}

static inline dout_t& ia32_star_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_star_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_star_t _regval = (ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081));
    _os << ("Register star (Syscall target address): ");
    _os << ("\n");
    // _anon0 is anonymous
    ((_os << (" call =\t")) << ia32_star_call_extract(_regval)) << ("\t(SYSCALL CS and SS)\n");
    ((_os << (" ret =\t")) << ia32_star_ret_extract(_regval)) << ("\t(SYSRET CS and SS)\n");
    return(_os);
}

static inline uint16_t ia32_star_call_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint16_t ia32_star_call_rdf(__DN(t) *_dev)
{
    ia32_star_t _regval = (ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081));
    return(ia32_star_call_extract(_regval));
}

static inline uint16_t ia32_star_ret_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint16_t ia32_star_ret_rdf(__DN(t) *_dev)
{
    ia32_star_t _regval = (ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081));
    return(ia32_star_ret_extract(_regval));
}

static inline void ia32_star_call_wrf(__DN(t) *_dev, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_star_call_wrf(__DN(t) *_dev, uint16_t _fieldval)
{
    ia32_star_t _regval = (ia32_star_t )(0xffff00000000 & (((ia32_star_t )(_fieldval)) << 32));
    _regval = (_regval | (0xffff0000ffffffff & ((ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000081, _regval);
    // No shadow register to write to
}

static inline void ia32_star_ret_wrf(__DN(t) *_dev, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_star_ret_wrf(__DN(t) *_dev, uint16_t _fieldval)
{
    ia32_star_t _regval = (ia32_star_t )(0xffff000000000000 & (((ia32_star_t )(_fieldval)) << 48));
    _regval = (_regval | (0xffffffffffff & ((ia32_star_t )(__DN(msr)::read64(_dev, 0xc0000081)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000081, _regval);
    // No shadow register to write to
}

/*
 * Register lstar: Long mode Syscall target address
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_lstar_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_lstar_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000082)));
}

static inline uint64_t ia32_lstar_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_lstar_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000082)));
}

static inline void ia32_lstar_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_lstar_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000082, _regval);
}

static inline void ia32_lstar_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_lstar_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0000082, _regval);
}

static inline dout_t& ia32_lstar_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_lstar_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0000082));
    _os << ("Register lstar (Long mode Syscall target address): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register fmask: SYSCALL EFLAGS mask
 * Type: ia32.fmask (Implicit type of SYSCALL EFLAGS mask register)
 *   v	(size 32, offset 0, init 0):	RW	Value
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
static inline ia32_fmask_t ia32_fmask_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fmask_t ia32_fmask_rawrd(__DN(t) *_dev)
{
    return((ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084)));
}

static inline ia32_fmask_t ia32_fmask_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_fmask_t ia32_fmask_rd(__DN(t) *_dev)
{
    return((ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084)));
}

static inline void ia32_fmask_rawwr(__DN(t) *_dev, ia32_fmask_t _regval) __attribute__ ((always_inline));
static inline void ia32_fmask_rawwr(__DN(t) *_dev, ia32_fmask_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000084, _regval);
}

static inline void ia32_fmask_wr(__DN(t) *_dev, ia32_fmask_t _regval) __attribute__ ((always_inline));
static inline void ia32_fmask_wr(__DN(t) *_dev, ia32_fmask_t _regval)
{
    _regval = (_regval & 0xffffffff);
    // No MB1 fields present
    _regval = (_regval | (0xffffffff00000000 & ((ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084)))));
    __DN(msr)::write64(_dev, 0xc0000084, _regval);
}

static inline dout_t& ia32_fmask_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fmask_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_fmask_t _regval = (ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084));
    _os << ("Register fmask (SYSCALL EFLAGS mask): ");
    _os << ("\n");
    ((_os << (" v =\t")) << ia32_fmask_v_extract(_regval)) << ("\t(Value)\n");
    // _anon32 is anonymous
    return(_os);
}

static inline uint32_t ia32_fmask_v_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint32_t ia32_fmask_v_rdf(__DN(t) *_dev)
{
    ia32_fmask_t _regval = (ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084));
    return(ia32_fmask_v_extract(_regval));
}

static inline void ia32_fmask_v_wrf(__DN(t) *_dev, uint32_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_fmask_v_wrf(__DN(t) *_dev, uint32_t _fieldval)
{
    ia32_fmask_t _regval = (ia32_fmask_t )(0xffffffff & (((ia32_fmask_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffff00000000 & ((ia32_fmask_t )(__DN(msr)::read64(_dev, 0xc0000084)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0000084, _regval);
    // No shadow register to write to
}

/*
 * Register fs_base: FS base
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_fs_base_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_fs_base_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000100)));
}

static inline uint64_t ia32_fs_base_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_fs_base_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000100)));
}

static inline void ia32_fs_base_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_fs_base_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000100, _regval);
}

static inline void ia32_fs_base_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_fs_base_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0000100, _regval);
}

static inline dout_t& ia32_fs_base_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_fs_base_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0000100));
    _os << ("Register fs_base (FS base): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register gs_base: GS base
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_gs_base_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_gs_base_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000101)));
}

static inline uint64_t ia32_gs_base_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_gs_base_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000101)));
}

static inline void ia32_gs_base_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_gs_base_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000101, _regval);
}

static inline void ia32_gs_base_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_gs_base_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0000101, _regval);
}

static inline dout_t& ia32_gs_base_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_gs_base_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0000101));
    _os << ("Register gs_base (GS base): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register kernel_gs_base: Swap target of GS base
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_kernel_gs_base_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_kernel_gs_base_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000102)));
}

static inline uint64_t ia32_kernel_gs_base_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_kernel_gs_base_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0000102)));
}

static inline void ia32_kernel_gs_base_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_kernel_gs_base_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0000102, _regval);
}

static inline void ia32_kernel_gs_base_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_kernel_gs_base_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0000102, _regval);
}

static inline dout_t& ia32_kernel_gs_base_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_kernel_gs_base_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0000102));
    _os << ("Register kernel_gs_base (Swap target of GS base): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrrcap: MTRR Capabilities
 * Type: ia32.mtrrcap (Implicit type of MTRR Capabilities register)
 *   vcnt	(size 8, offset 0, init 0):	RO	Number of variable range registers
 *   fix	(size 1, offset 8, init 0):	RO	Fixed range registers supported
 *   _anon9	(size 1, offset 9, init 0):	RSVD	_
 *   wc	(size 1, offset 10, init 0):	RO	Write-combining memory type supported
 *   _anon11	(size 53, offset 11, init 0):	RSVD	_
 */
static inline ia32_mtrrcap_t ia32_mtrrcap_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mtrrcap_t ia32_mtrrcap_rawrd(__DN(t) *_dev)
{
    return((ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe)));
}

static inline ia32_mtrrcap_t ia32_mtrrcap_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mtrrcap_t ia32_mtrrcap_rd(__DN(t) *_dev)
{
    return((ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe)));
}

static inline void ia32_mtrrcap_rawwr(__DN(t) *_dev, ia32_mtrrcap_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrrcap_rawwr(__DN(t) *_dev, ia32_mtrrcap_t _regval)
{
    __DN(msr)::write64(_dev, 0xfe, _regval);
}

// Register mtrrcap is not writeable
static inline dout_t& ia32_mtrrcap_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrrcap_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_mtrrcap_t _regval = (ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe));
    _os << ("Register mtrrcap (MTRR Capabilities): ");
    _os << ("\n");
    ((_os << (" vcnt =\t")) << ia32_mtrrcap_vcnt_extract(_regval)) << ("\t(Number of variable range registers)\n");
    ((_os << (" fix =\t")) << ia32_mtrrcap_fix_extract(_regval)) << ("\t(Fixed range registers supported)\n");
    // _anon9 is anonymous
    ((_os << (" wc =\t")) << ia32_mtrrcap_wc_extract(_regval)) << ("\t(Write-combining memory type supported)\n");
    // _anon11 is anonymous
    return(_os);
}

static inline uint8_t ia32_mtrrcap_vcnt_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_vcnt_rdf(__DN(t) *_dev)
{
    ia32_mtrrcap_t _regval = (ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe));
    return(ia32_mtrrcap_vcnt_extract(_regval));
}

static inline uint8_t ia32_mtrrcap_fix_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_fix_rdf(__DN(t) *_dev)
{
    ia32_mtrrcap_t _regval = (ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe));
    return(ia32_mtrrcap_fix_extract(_regval));
}

static inline uint8_t ia32_mtrrcap_wc_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrrcap_wc_rdf(__DN(t) *_dev)
{
    ia32_mtrrcap_t _regval = (ia32_mtrrcap_t )(__DN(msr)::read64(_dev, 0xfe));
    return(ia32_mtrrcap_wc_extract(_regval));
}

/*
 * Register mtrr_def_type: MTRR type definition
 * Type: ia32.mtrr_def_type (Implicit type of MTRR type definition register)
 *   tpe	(size 8, offset 0, init 0):	RW	Default memory type
 *   _anon8	(size 2, offset 8, init 0):	RSVD	_
 *   fe	(size 1, offset 10, init 0):	RW	Fixed-range MTRRs enable/disable
 *   e	(size 1, offset 11, init 0):	RW	MTRR enable/disable
 *   _anon12	(size 52, offset 12, init 0):	RSVD	_
 */
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_rawrd(__DN(t) *_dev)
{
    return((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)));
}

static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_mtrr_def_type_t ia32_mtrr_def_type_rd(__DN(t) *_dev)
{
    return((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)));
}

static inline void ia32_mtrr_def_type_rawwr(__DN(t) *_dev, ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_def_type_rawwr(__DN(t) *_dev, ia32_mtrr_def_type_t _regval)
{
    __DN(msr)::write64(_dev, 0x2ff, _regval);
}

static inline void ia32_mtrr_def_type_wr(__DN(t) *_dev, ia32_mtrr_def_type_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_def_type_wr(__DN(t) *_dev, ia32_mtrr_def_type_t _regval)
{
    _regval = (_regval & 0xcff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffff300 & ((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)))));
    __DN(msr)::write64(_dev, 0x2ff, _regval);
}

static inline dout_t& ia32_mtrr_def_type_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_def_type_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff));
    _os << ("Register mtrr_def_type (MTRR type definition): ");
    _os << ("\n");
    ((_os << (" tpe =\t")) << ia32_mtrr_def_type_tpe_extract(_regval)) << ("\t(Default memory type)\n");
    // _anon8 is anonymous
    ((_os << (" fe =\t")) << ia32_mtrr_def_type_fe_extract(_regval)) << ("\t(Fixed-range MTRRs enable/disable)\n");
    ((_os << (" e =\t")) << ia32_mtrr_def_type_e_extract(_regval)) << ("\t(MTRR enable/disable)\n");
    // _anon12 is anonymous
    return(_os);
}

static inline uint8_t ia32_mtrr_def_type_tpe_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_tpe_rdf(__DN(t) *_dev)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff));
    return(ia32_mtrr_def_type_tpe_extract(_regval));
}

static inline uint8_t ia32_mtrr_def_type_fe_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_fe_rdf(__DN(t) *_dev)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff));
    return(ia32_mtrr_def_type_fe_extract(_regval));
}

static inline uint8_t ia32_mtrr_def_type_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_def_type_e_rdf(__DN(t) *_dev)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff));
    return(ia32_mtrr_def_type_e_extract(_regval));
}

static inline void ia32_mtrr_def_type_tpe_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_def_type_tpe_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(0xff & (((ia32_mtrr_def_type_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x2ff, _regval);
    // No shadow register to write to
}

static inline void ia32_mtrr_def_type_fe_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_def_type_fe_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(0x400 & (((ia32_mtrr_def_type_t )(_fieldval)) << 10));
    _regval = (_regval | (0xfffffffffffffbff & ((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x2ff, _regval);
    // No shadow register to write to
}

static inline void ia32_mtrr_def_type_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_def_type_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_mtrr_def_type_t _regval = (ia32_mtrr_def_type_t )(0x800 & (((ia32_mtrr_def_type_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff7ff & ((ia32_mtrr_def_type_t )(__DN(msr)::read64(_dev, 0x2ff)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x2ff, _regval);
    // No shadow register to write to
}

/*
 * Register array mtrr_physbase: MTRR physical base
 * Type: ia32.mtrr_physbase (Implicit type of MTRR physical base register array)
 *   tpe	(size 8, offset 0, init 0):	RW	Type
 *   _anon8	(size 4, offset 8, init 0):	RSVD	_
 *   base	(size 52, offset 12, init 0):	RW	Physical base address
 */
static const size_t ia32_mtrr_physbase_length = 8;
static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_rawrd(__DN(t) *_dev, int _i)
{
    return((ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2))));
}

static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mtrr_physbase_t ia32_mtrr_physbase_rd(__DN(t) *_dev, int _i)
{
    return((ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2))));
}

static inline void ia32_mtrr_physbase_rawwr(__DN(t) *_dev, int _i, ia32_mtrr_physbase_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physbase_rawwr(__DN(t) *_dev, int _i, ia32_mtrr_physbase_t _regval)
{
    __DN(msr)::write64(_dev, 0x200 + (_i * 2), _regval);
}

static inline void ia32_mtrr_physbase_wr(__DN(t) *_dev, int _i, ia32_mtrr_physbase_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physbase_wr(__DN(t) *_dev, int _i, ia32_mtrr_physbase_t _regval)
{
    _regval = (_regval & 0xfffffffffffff0ff);
    // No MB1 fields present
    _regval = (_regval | (0xf00 & ((ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2))))));
    __DN(msr)::write64(_dev, 0x200 + (_i * 2), _regval);
}

static inline dout_t& ia32_mtrr_physbase_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_physbase_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    ia32_mtrr_physbase_t _regval = (ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2)));
    ((((_os << ("Register ")) << ("mtrr_physbase")) << _i) << ("MTRR physical base")) << (":");
    _os << ("\n");
    ((_os << (" tpe =\t")) << ia32_mtrr_physbase_tpe_extract(_regval)) << ("\t(Type)\n");
    // _anon8 is anonymous
    ((_os << (" base =\t")) << ia32_mtrr_physbase_base_extract(_regval)) << ("\t(Physical base address)\n");
    return(_os);
}

static inline dout_t& ia32_mtrr_physbase_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_physbase_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 8; _i++) {
        ia32_mtrr_physbase_pri(_os, _dev, _i);
    }
    return(_os);
}

static inline uint8_t ia32_mtrr_physbase_tpe_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_physbase_tpe_rdf(__DN(t) *_dev, int _i)
{
    ia32_mtrr_physbase_t _regval = (ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2)));
    return(ia32_mtrr_physbase_tpe_extract(_regval));
}

static inline uint64_t ia32_mtrr_physbase_base_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_physbase_base_rdf(__DN(t) *_dev, int _i)
{
    ia32_mtrr_physbase_t _regval = (ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2)));
    return(ia32_mtrr_physbase_base_extract(_regval));
}

static inline void ia32_mtrr_physbase_tpe_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physbase_tpe_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mtrr_physbase_t _regval = (ia32_mtrr_physbase_t )(0xff & (((ia32_mtrr_physbase_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2))))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x200 + (_i * 2), _regval);
    // No shadow register to write to
}

static inline void ia32_mtrr_physbase_base_wrf(__DN(t) *_dev, int _i, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physbase_base_wrf(__DN(t) *_dev, int _i, uint64_t _fieldval)
{
    ia32_mtrr_physbase_t _regval = (ia32_mtrr_physbase_t )(0xfffffffffffff000 & (((ia32_mtrr_physbase_t )(_fieldval)) << 12));
    _regval = (_regval | (0xfff & ((ia32_mtrr_physbase_t )(__DN(msr)::read64(_dev, 0x200 + (_i * 2))))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x200 + (_i * 2), _regval);
    // No shadow register to write to
}

/*
 * Register array mtrr_physmask: MTRR physical mask
 * Type: ia32.mtrr_physmask (Implicit type of MTRR physical mask register array)
 *   _anon0	(size 11, offset 0, init 0):	RSVD	_
 *   v	(size 1, offset 11, init 0):	RW	Valid
 *   mask	(size 52, offset 12, init 0):	RW	Physical mask
 */
static const size_t ia32_mtrr_physmask_length = 8;
static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_rawrd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_rawrd(__DN(t) *_dev, int _i)
{
    return((ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2))));
}

static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_rd(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline ia32_mtrr_physmask_t ia32_mtrr_physmask_rd(__DN(t) *_dev, int _i)
{
    return((ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2))));
}

static inline void ia32_mtrr_physmask_rawwr(__DN(t) *_dev, int _i, ia32_mtrr_physmask_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physmask_rawwr(__DN(t) *_dev, int _i, ia32_mtrr_physmask_t _regval)
{
    __DN(msr)::write64(_dev, 0x201 + (_i * 2), _regval);
}

static inline void ia32_mtrr_physmask_wr(__DN(t) *_dev, int _i, ia32_mtrr_physmask_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physmask_wr(__DN(t) *_dev, int _i, ia32_mtrr_physmask_t _regval)
{
    _regval = (_regval & 0xfffffffffffff800);
    // No MB1 fields present
    _regval = (_regval | (0x7ff & ((ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2))))));
    __DN(msr)::write64(_dev, 0x201 + (_i * 2), _regval);
}

static inline dout_t& ia32_mtrr_physmask_pri(dout_t& _os, __DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_physmask_pri(dout_t& _os, __DN(t) *_dev, int _i)
{
    ia32_mtrr_physmask_t _regval = (ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2)));
    ((((_os << ("Register ")) << ("mtrr_physmask")) << _i) << ("MTRR physical mask")) << (":");
    _os << ("\n");
    // _anon0 is anonymous
    ((_os << (" v =\t")) << ia32_mtrr_physmask_v_extract(_regval)) << ("\t(Valid)\n");
    ((_os << (" mask =\t")) << ia32_mtrr_physmask_mask_extract(_regval)) << ("\t(Physical mask)\n");
    return(_os);
}

static inline dout_t& ia32_mtrr_physmask_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_physmask_pr(dout_t& _os, __DN(t) *_dev)
{
    int _i;
    for( _i = 0; _i < 8; _i++) {
        ia32_mtrr_physmask_pri(_os, _dev, _i);
    }
    return(_os);
}

static inline uint8_t ia32_mtrr_physmask_v_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint8_t ia32_mtrr_physmask_v_rdf(__DN(t) *_dev, int _i)
{
    ia32_mtrr_physmask_t _regval = (ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2)));
    return(ia32_mtrr_physmask_v_extract(_regval));
}

static inline uint64_t ia32_mtrr_physmask_mask_rdf(__DN(t) *_dev, int _i) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_physmask_mask_rdf(__DN(t) *_dev, int _i)
{
    ia32_mtrr_physmask_t _regval = (ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2)));
    return(ia32_mtrr_physmask_mask_extract(_regval));
}

static inline void ia32_mtrr_physmask_v_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physmask_v_wrf(__DN(t) *_dev, int _i, uint8_t _fieldval)
{
    ia32_mtrr_physmask_t _regval = (ia32_mtrr_physmask_t )(0x800 & (((ia32_mtrr_physmask_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff7ff & ((ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2))))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x201 + (_i * 2), _regval);
    // No shadow register to write to
}

static inline void ia32_mtrr_physmask_mask_wrf(__DN(t) *_dev, int _i, uint64_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_mtrr_physmask_mask_wrf(__DN(t) *_dev, int _i, uint64_t _fieldval)
{
    ia32_mtrr_physmask_t _regval = (ia32_mtrr_physmask_t )(0xfffffffffffff000 & (((ia32_mtrr_physmask_t )(_fieldval)) << 12));
    _regval = (_regval | (0xfff & ((ia32_mtrr_physmask_t )(__DN(msr)::read64(_dev, 0x201 + (_i * 2))))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x201 + (_i * 2), _regval);
    // No shadow register to write to
}

/*
 * Register mtrr_fix64k_00000: MTRR fix64k_00000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix64k_00000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix64k_00000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x250)));
}

static inline uint64_t ia32_mtrr_fix64k_00000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix64k_00000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x250)));
}

static inline void ia32_mtrr_fix64k_00000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix64k_00000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x250, _regval);
}

static inline void ia32_mtrr_fix64k_00000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix64k_00000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x250, _regval);
}

static inline dout_t& ia32_mtrr_fix64k_00000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix64k_00000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x250));
    _os << ("Register mtrr_fix64k_00000 (MTRR fix64k_00000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix16k_80000: MTRR fix16k_80000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix16k_80000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix16k_80000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x258)));
}

static inline uint64_t ia32_mtrr_fix16k_80000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix16k_80000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x258)));
}

static inline void ia32_mtrr_fix16k_80000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix16k_80000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x258, _regval);
}

static inline void ia32_mtrr_fix16k_80000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix16k_80000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x258, _regval);
}

static inline dout_t& ia32_mtrr_fix16k_80000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix16k_80000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x258));
    _os << ("Register mtrr_fix16k_80000 (MTRR fix16k_80000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix16k_a0000: MTRR fix16k_a0000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix16k_a0000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix16k_a0000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x259)));
}

static inline uint64_t ia32_mtrr_fix16k_a0000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix16k_a0000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x259)));
}

static inline void ia32_mtrr_fix16k_a0000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix16k_a0000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x259, _regval);
}

static inline void ia32_mtrr_fix16k_a0000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix16k_a0000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x259, _regval);
}

static inline dout_t& ia32_mtrr_fix16k_a0000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix16k_a0000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x259));
    _os << ("Register mtrr_fix16k_a0000 (MTRR fix16k_a0000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_c0000: MTRR fix4k_c0000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_c0000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_c0000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x268)));
}

static inline uint64_t ia32_mtrr_fix4k_c0000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_c0000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x268)));
}

static inline void ia32_mtrr_fix4k_c0000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_c0000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x268, _regval);
}

static inline void ia32_mtrr_fix4k_c0000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_c0000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x268, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_c0000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_c0000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x268));
    _os << ("Register mtrr_fix4k_c0000 (MTRR fix4k_c0000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_c8000: MTRR fix4k_c8000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_c8000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_c8000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x269)));
}

static inline uint64_t ia32_mtrr_fix4k_c8000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_c8000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x269)));
}

static inline void ia32_mtrr_fix4k_c8000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_c8000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x269, _regval);
}

static inline void ia32_mtrr_fix4k_c8000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_c8000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x269, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_c8000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_c8000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x269));
    _os << ("Register mtrr_fix4k_c8000 (MTRR fix4k_c8000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_d0000: MTRR fix4k_d0000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_d0000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_d0000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26a)));
}

static inline uint64_t ia32_mtrr_fix4k_d0000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_d0000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26a)));
}

static inline void ia32_mtrr_fix4k_d0000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_d0000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26a, _regval);
}

static inline void ia32_mtrr_fix4k_d0000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_d0000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26a, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_d0000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_d0000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26a));
    _os << ("Register mtrr_fix4k_d0000 (MTRR fix4k_d0000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_d8000: MTRR fix4k_d8000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_d8000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_d8000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26b)));
}

static inline uint64_t ia32_mtrr_fix4k_d8000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_d8000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26b)));
}

static inline void ia32_mtrr_fix4k_d8000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_d8000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26b, _regval);
}

static inline void ia32_mtrr_fix4k_d8000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_d8000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26b, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_d8000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_d8000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26b));
    _os << ("Register mtrr_fix4k_d8000 (MTRR fix4k_d8000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_e0000: MTRR fix4k_e0000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_e0000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_e0000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26c)));
}

static inline uint64_t ia32_mtrr_fix4k_e0000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_e0000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26c)));
}

static inline void ia32_mtrr_fix4k_e0000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_e0000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26c, _regval);
}

static inline void ia32_mtrr_fix4k_e0000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_e0000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26c, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_e0000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_e0000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26c));
    _os << ("Register mtrr_fix4k_e0000 (MTRR fix4k_e0000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_e8000: MTRR fix4k_e8000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_e8000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_e8000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26d)));
}

static inline uint64_t ia32_mtrr_fix4k_e8000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_e8000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26d)));
}

static inline void ia32_mtrr_fix4k_e8000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_e8000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26d, _regval);
}

static inline void ia32_mtrr_fix4k_e8000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_e8000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26d, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_e8000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_e8000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26d));
    _os << ("Register mtrr_fix4k_e8000 (MTRR fix4k_e8000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_f0000: MTRR fix4k_f0000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_f0000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_f0000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26e)));
}

static inline uint64_t ia32_mtrr_fix4k_f0000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_f0000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26e)));
}

static inline void ia32_mtrr_fix4k_f0000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_f0000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26e, _regval);
}

static inline void ia32_mtrr_fix4k_f0000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_f0000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26e, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_f0000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_f0000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26e));
    _os << ("Register mtrr_fix4k_f0000 (MTRR fix4k_f0000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register mtrr_fix4k_f8000: MTRR fix4k_f8000
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mtrr_fix4k_f8000_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_f8000_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26f)));
}

static inline uint64_t ia32_mtrr_fix4k_f8000_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mtrr_fix4k_f8000_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0x26f)));
}

static inline void ia32_mtrr_fix4k_f8000_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_f8000_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0x26f, _regval);
}

static inline void ia32_mtrr_fix4k_f8000_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mtrr_fix4k_f8000_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x26f, _regval);
}

static inline dout_t& ia32_mtrr_fix4k_f8000_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mtrr_fix4k_f8000_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0x26f));
    _os << ("Register mtrr_fix4k_f8000 (MTRR fix4k_f8000): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register cr_pat: Page attribute table control
 * Type: ia32.cr_pat (Implicit type of Page attribute table control register)
 *   pa0	(size 8, offset 0, init 0):	RW	pa0
 *   pa1	(size 8, offset 8, init 0):	RW	pa1
 *   pa2	(size 8, offset 16, init 0):	RW	pa2
 *   pa3	(size 8, offset 24, init 0):	RW	pa3
 *   pa4	(size 8, offset 32, init 0):	RW	pa4
 *   pa5	(size 8, offset 40, init 0):	RW	pa5
 *   pa6	(size 8, offset 48, init 0):	RW	pa6
 *   pa7	(size 8, offset 56, init 0):	RW	pa7
 */
static inline ia32_cr_pat_t ia32_cr_pat_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_rawrd(__DN(t) *_dev)
{
    return((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)));
}

static inline ia32_cr_pat_t ia32_cr_pat_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_cr_pat_t ia32_cr_pat_rd(__DN(t) *_dev)
{
    return((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)));
}

static inline void ia32_cr_pat_rawwr(__DN(t) *_dev, ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_rawwr(__DN(t) *_dev, ia32_cr_pat_t _regval)
{
    __DN(msr)::write64(_dev, 0x277, _regval);
}

static inline void ia32_cr_pat_wr(__DN(t) *_dev, ia32_cr_pat_t _regval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_wr(__DN(t) *_dev, ia32_cr_pat_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0x277, _regval);
}

static inline dout_t& ia32_cr_pat_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_cr_pat_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    _os << ("Register cr_pat (Page attribute table control): ");
    _os << ("\n");
    ((_os << (" pa0 =\t")) << ia32_cr_pat_pa0_extract(_regval)) << ("\t(pa0)\n");
    ((_os << (" pa1 =\t")) << ia32_cr_pat_pa1_extract(_regval)) << ("\t(pa1)\n");
    ((_os << (" pa2 =\t")) << ia32_cr_pat_pa2_extract(_regval)) << ("\t(pa2)\n");
    ((_os << (" pa3 =\t")) << ia32_cr_pat_pa3_extract(_regval)) << ("\t(pa3)\n");
    ((_os << (" pa4 =\t")) << ia32_cr_pat_pa4_extract(_regval)) << ("\t(pa4)\n");
    ((_os << (" pa5 =\t")) << ia32_cr_pat_pa5_extract(_regval)) << ("\t(pa5)\n");
    ((_os << (" pa6 =\t")) << ia32_cr_pat_pa6_extract(_regval)) << ("\t(pa6)\n");
    ((_os << (" pa7 =\t")) << ia32_cr_pat_pa7_extract(_regval)) << ("\t(pa7)\n");
    return(_os);
}

static inline ia32_pat_val_t ia32_cr_pat_pa0_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa0_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa0_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa1_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa1_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa2_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa2_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa3_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa3_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa3_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa4_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa4_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa4_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa5_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa5_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa5_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa6_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa6_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa6_extract(_regval));
}

static inline ia32_pat_val_t ia32_cr_pat_pa7_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_pat_val_t ia32_cr_pat_pa7_rdf(__DN(t) *_dev)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277));
    return(ia32_cr_pat_pa7_extract(_regval));
}

static inline void ia32_cr_pat_pa0_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa0_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff & (((ia32_cr_pat_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa1_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa1_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff00 & (((ia32_cr_pat_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa2_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa2_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff0000 & (((ia32_cr_pat_t )(_fieldval)) << 16));
    _regval = (_regval | (0xffffffffff00ffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa3_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa3_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff000000 & (((ia32_cr_pat_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa4_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa4_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff00000000 & (((ia32_cr_pat_t )(_fieldval)) << 32));
    _regval = (_regval | (0xffffff00ffffffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa5_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa5_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff0000000000 & (((ia32_cr_pat_t )(_fieldval)) << 40));
    _regval = (_regval | (0xffff00ffffffffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa6_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa6_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff000000000000 & (((ia32_cr_pat_t )(_fieldval)) << 48));
    _regval = (_regval | (0xff00ffffffffffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

static inline void ia32_cr_pat_pa7_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_cr_pat_pa7_wrf(__DN(t) *_dev, ia32_pat_val_t _fieldval)
{
    ia32_cr_pat_t _regval = (ia32_cr_pat_t )(0xff00000000000000 & (((ia32_cr_pat_t )(_fieldval)) << 56));
    _regval = (_regval | (0xffffffffffffff & ((ia32_cr_pat_t )(__DN(msr)::read64(_dev, 0x277)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x277, _regval);
    // No shadow register to write to
}

/*
 * Register mperf: Measured performance
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_mperf_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mperf_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xe7)));
}

static inline uint64_t ia32_mperf_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_mperf_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xe7)));
}

static inline void ia32_mperf_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mperf_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xe7, _regval);
}

static inline void ia32_mperf_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_mperf_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xe7, _regval);
}

static inline dout_t& ia32_mperf_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_mperf_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xe7));
    _os << ("Register mperf (Measured performance): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register aperf: Actual performance
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_aperf_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_aperf_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xe8)));
}

static inline uint64_t ia32_aperf_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_aperf_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xe8)));
}

static inline void ia32_aperf_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_aperf_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xe8, _regval);
}

static inline void ia32_aperf_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_aperf_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xe8, _regval);
}

static inline dout_t& ia32_aperf_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_aperf_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xe8));
    _os << ("Register aperf (Actual performance): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register perf_ctl: Performance control
 * Type: ia32.perf_pnt (Performance point)
 *   eist	(size 16, offset 0, init 0):	RW	EIST transition target
 *   _anon16	(size 16, offset 16, init 0):	RSVD	_
 *   ida	(size 1, offset 32, init 0):	RW	IDA disengage
 *   _anon33	(size 31, offset 33, init 0):	RSVD	_
 */
static inline ia32_perf_pnt_t ia32_perf_ctl_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_ctl_rawrd(__DN(t) *_dev)
{
    return((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198)));
}

static inline ia32_perf_pnt_t ia32_perf_ctl_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_ctl_rd(__DN(t) *_dev)
{
    return((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198)));
}

static inline void ia32_perf_ctl_rawwr(__DN(t) *_dev, ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_ctl_rawwr(__DN(t) *_dev, ia32_perf_pnt_t _regval)
{
    __DN(msr)::write64(_dev, 0x198, _regval);
}

static inline void ia32_perf_ctl_wr(__DN(t) *_dev, ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_ctl_wr(__DN(t) *_dev, ia32_perf_pnt_t _regval)
{
    _regval = (_regval & 0x10000ffff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffeffff0000 & ((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198)))));
    __DN(msr)::write64(_dev, 0x198, _regval);
}

static inline dout_t& ia32_perf_ctl_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perf_ctl_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198));
    _os << ("Register perf_ctl (Performance control): ");
    _os << ("\n");
    ((_os << (" eist =\t")) << ia32_perf_pnt_eist_extract(_regval)) << ("\t(EIST transition target)\n");
    // _anon16 is anonymous
    ((_os << (" ida =\t")) << ia32_perf_pnt_ida_extract(_regval)) << ("\t(IDA disengage)\n");
    // _anon33 is anonymous
    return(_os);
}

static inline uint16_t ia32_perf_ctl_eist_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint16_t ia32_perf_ctl_eist_rdf(__DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198));
    return(ia32_perf_pnt_eist_extract(_regval));
}

static inline uint8_t ia32_perf_ctl_ida_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_ctl_ida_rdf(__DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198));
    return(ia32_perf_pnt_ida_extract(_regval));
}

static inline void ia32_perf_ctl_eist_wrf(__DN(t) *_dev, uint16_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_ctl_eist_wrf(__DN(t) *_dev, uint16_t _fieldval)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(0xffff & (((ia32_perf_pnt_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffff0000 & ((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x198, _regval);
    // No shadow register to write to
}

static inline void ia32_perf_ctl_ida_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_perf_ctl_ida_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(0x100000000 & (((ia32_perf_pnt_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffffeffffffff & ((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x198)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x198, _regval);
    // No shadow register to write to
}

/*
 * Register perf_status: Performance status
 * Type: ia32.perf_pnt (Performance point)
 *   eist	(size 16, offset 0, init 0):	RO	EIST transition target
 *   _anon16	(size 16, offset 16, init 0):	RSVD	_
 *   ida	(size 1, offset 32, init 0):	RO	IDA disengage
 *   _anon33	(size 31, offset 33, init 0):	RSVD	_
 */
static inline ia32_perf_pnt_t ia32_perf_status_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_status_rawrd(__DN(t) *_dev)
{
    return((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x199)));
}

static inline ia32_perf_pnt_t ia32_perf_status_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_perf_pnt_t ia32_perf_status_rd(__DN(t) *_dev)
{
    return((ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x199)));
}

static inline void ia32_perf_status_rawwr(__DN(t) *_dev, ia32_perf_pnt_t _regval) __attribute__ ((always_inline));
static inline void ia32_perf_status_rawwr(__DN(t) *_dev, ia32_perf_pnt_t _regval)
{
    __DN(msr)::write64(_dev, 0x199, _regval);
}

// Register perf_status is not writeable
static inline dout_t& ia32_perf_status_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perf_status_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x199));
    _os << ("Register perf_status (Performance status): ");
    _os << ("\n");
    ((_os << (" eist =\t")) << ia32_perf_pnt_eist_extract(_regval)) << ("\t(EIST transition target)\n");
    // _anon16 is anonymous
    ((_os << (" ida =\t")) << ia32_perf_pnt_ida_extract(_regval)) << ("\t(IDA disengage)\n");
    // _anon33 is anonymous
    return(_os);
}

static inline uint16_t ia32_perf_status_eist_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint16_t ia32_perf_status_eist_rdf(__DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x199));
    return(ia32_perf_pnt_eist_extract(_regval));
}

static inline uint8_t ia32_perf_status_ida_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_perf_status_ida_rdf(__DN(t) *_dev)
{
    ia32_perf_pnt_t _regval = (ia32_perf_pnt_t )(__DN(msr)::read64(_dev, 0x199));
    return(ia32_perf_pnt_ida_extract(_regval));
}

/*
 * Register clock_modulation: Clock modulation
 * Type: ia32.clock_modulation (Implicit type of Clock modulation register)
 *   _anon0	(size 1, offset 0, init 0):	RSVD	_
 *   dc	(size 2, offset 1, init 0):	RW	On-Demand clock modulation duty cycle (x12.5%)
 *   en	(size 1, offset 3, init 0):	RW	Enable
 *   _anon4	(size 60, offset 4, init 0):	RSVD	_
 */
static inline ia32_clock_modulation_t ia32_clock_modulation_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_clock_modulation_t ia32_clock_modulation_rawrd(__DN(t) *_dev)
{
    return((ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a)));
}

static inline ia32_clock_modulation_t ia32_clock_modulation_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_clock_modulation_t ia32_clock_modulation_rd(__DN(t) *_dev)
{
    return((ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a)));
}

static inline void ia32_clock_modulation_rawwr(__DN(t) *_dev, ia32_clock_modulation_t _regval) __attribute__ ((always_inline));
static inline void ia32_clock_modulation_rawwr(__DN(t) *_dev, ia32_clock_modulation_t _regval)
{
    __DN(msr)::write64(_dev, 0x19a, _regval);
}

static inline void ia32_clock_modulation_wr(__DN(t) *_dev, ia32_clock_modulation_t _regval) __attribute__ ((always_inline));
static inline void ia32_clock_modulation_wr(__DN(t) *_dev, ia32_clock_modulation_t _regval)
{
    _regval = (_regval & 0xe);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffffffff1 & ((ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a)))));
    __DN(msr)::write64(_dev, 0x19a, _regval);
}

static inline dout_t& ia32_clock_modulation_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_clock_modulation_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_clock_modulation_t _regval = (ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a));
    _os << ("Register clock_modulation (Clock modulation): ");
    _os << ("\n");
    // _anon0 is anonymous
    ((_os << (" dc =\t")) << ia32_clock_modulation_dc_extract(_regval)) << ("\t(On-Demand clock modulation duty cycle (x12.5%))\n");
    ((_os << (" en =\t")) << ia32_clock_modulation_en_extract(_regval)) << ("\t(Enable)\n");
    // _anon4 is anonymous
    return(_os);
}

static inline uint8_t ia32_clock_modulation_dc_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_clock_modulation_dc_rdf(__DN(t) *_dev)
{
    ia32_clock_modulation_t _regval = (ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a));
    return(ia32_clock_modulation_dc_extract(_regval));
}

static inline uint8_t ia32_clock_modulation_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_clock_modulation_en_rdf(__DN(t) *_dev)
{
    ia32_clock_modulation_t _regval = (ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a));
    return(ia32_clock_modulation_en_extract(_regval));
}

static inline void ia32_clock_modulation_dc_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_clock_modulation_dc_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_clock_modulation_t _regval = (ia32_clock_modulation_t )(0x6 & (((ia32_clock_modulation_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffff9 & ((ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19a, _regval);
    // No shadow register to write to
}

static inline void ia32_clock_modulation_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_clock_modulation_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_clock_modulation_t _regval = (ia32_clock_modulation_t )(0x8 & (((ia32_clock_modulation_t )(_fieldval)) << 3));
    _regval = (_regval | (0xfffffffffffffff7 & ((ia32_clock_modulation_t )(__DN(msr)::read64(_dev, 0x19a)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19a, _regval);
    // No shadow register to write to
}

/*
 * Register therm_interrupt: Thermal monitor interrupt
 * Type: ia32.therm_interrupt (Implicit type of Thermal monitor interrupt register)
 *   ht	(size 1, offset 0, init 0):	RW	High-temperature enable
 *   lt	(size 1, offset 1, init 0):	RW	Low-temperature enable
 *   prochot	(size 1, offset 2, init 0):	RW	PROCHOT# enable
 *   forcpr	(size 1, offset 3, init 0):	RW	FORCEPR# enable
 *   over	(size 1, offset 4, init 0):	RW	Overheat enable
 *   _anon5	(size 3, offset 5, init 0):	RSVD	_
 *   tt1	(size 7, offset 8, init 0):	RW	Thermal threshold 1 value
 *   tt1int	(size 1, offset 15, init 0):	RW	Thermal threshold 1 enable
 *   tt2	(size 7, offset 16, init 0):	RW	Thermal threshold 2 value
 *   tt2int	(size 1, offset 23, init 0):	RW	Thermal threshold 2 enable
 *   _anon24	(size 40, offset 24, init 0):	RSVD	_
 */
static inline ia32_therm_interrupt_t ia32_therm_interrupt_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_rawrd(__DN(t) *_dev)
{
    return((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)));
}

static inline ia32_therm_interrupt_t ia32_therm_interrupt_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_therm_interrupt_t ia32_therm_interrupt_rd(__DN(t) *_dev)
{
    return((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)));
}

static inline void ia32_therm_interrupt_rawwr(__DN(t) *_dev, ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_rawwr(__DN(t) *_dev, ia32_therm_interrupt_t _regval)
{
    __DN(msr)::write64(_dev, 0x19b, _regval);
}

static inline void ia32_therm_interrupt_wr(__DN(t) *_dev, ia32_therm_interrupt_t _regval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_wr(__DN(t) *_dev, ia32_therm_interrupt_t _regval)
{
    _regval = (_regval & 0xffff1f);
    // No MB1 fields present
    _regval = (_regval | (0xffffffffff0000e0 & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    __DN(msr)::write64(_dev, 0x19b, _regval);
}

static inline dout_t& ia32_therm_interrupt_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_therm_interrupt_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    _os << ("Register therm_interrupt (Thermal monitor interrupt): ");
    _os << ("\n");
    ((_os << (" ht =\t")) << ia32_therm_interrupt_ht_extract(_regval)) << ("\t(High-temperature enable)\n");
    ((_os << (" lt =\t")) << ia32_therm_interrupt_lt_extract(_regval)) << ("\t(Low-temperature enable)\n");
    ((_os << (" prochot =\t")) << ia32_therm_interrupt_prochot_extract(_regval)) << ("\t(PROCHOT# enable)\n");
    ((_os << (" forcpr =\t")) << ia32_therm_interrupt_forcpr_extract(_regval)) << ("\t(FORCEPR# enable)\n");
    ((_os << (" over =\t")) << ia32_therm_interrupt_over_extract(_regval)) << ("\t(Overheat enable)\n");
    // _anon5 is anonymous
    ((_os << (" tt1 =\t")) << ia32_therm_interrupt_tt1_extract(_regval)) << ("\t(Thermal threshold 1 value)\n");
    ((_os << (" tt1int =\t")) << ia32_therm_interrupt_tt1int_extract(_regval)) << ("\t(Thermal threshold 1 enable)\n");
    ((_os << (" tt2 =\t")) << ia32_therm_interrupt_tt2_extract(_regval)) << ("\t(Thermal threshold 2 value)\n");
    ((_os << (" tt2int =\t")) << ia32_therm_interrupt_tt2int_extract(_regval)) << ("\t(Thermal threshold 2 enable)\n");
    // _anon24 is anonymous
    return(_os);
}

static inline uint8_t ia32_therm_interrupt_ht_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_ht_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_ht_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_lt_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_lt_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_lt_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_prochot_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_prochot_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_prochot_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_forcpr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_forcpr_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_forcpr_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_over_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_over_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_over_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_tt1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt1_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_tt1_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_tt1int_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt1int_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_tt1int_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_tt2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt2_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_tt2_extract(_regval));
}

static inline uint8_t ia32_therm_interrupt_tt2int_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_interrupt_tt2int_rdf(__DN(t) *_dev)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b));
    return(ia32_therm_interrupt_tt2int_extract(_regval));
}

static inline void ia32_therm_interrupt_ht_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_ht_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x1 & (((ia32_therm_interrupt_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffe & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_lt_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_lt_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x2 & (((ia32_therm_interrupt_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffffd & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_prochot_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_prochot_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x4 & (((ia32_therm_interrupt_t )(_fieldval)) << 2));
    _regval = (_regval | (0xfffffffffffffffb & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_forcpr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_forcpr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x8 & (((ia32_therm_interrupt_t )(_fieldval)) << 3));
    _regval = (_regval | (0xfffffffffffffff7 & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_over_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_over_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x10 & (((ia32_therm_interrupt_t )(_fieldval)) << 4));
    _regval = (_regval | (0xffffffffffffffef & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_tt1_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_tt1_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x7f00 & (((ia32_therm_interrupt_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff80ff & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_tt1int_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_tt1int_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x8000 & (((ia32_therm_interrupt_t )(_fieldval)) << 15));
    _regval = (_regval | (0xffffffffffff7fff & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_tt2_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_tt2_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x7f0000 & (((ia32_therm_interrupt_t )(_fieldval)) << 16));
    _regval = (_regval | (0xffffffffff80ffff & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_interrupt_tt2int_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_interrupt_tt2int_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_interrupt_t _regval = (ia32_therm_interrupt_t )(0x800000 & (((ia32_therm_interrupt_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_therm_interrupt_t )(__DN(msr)::read64(_dev, 0x19b)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19b, _regval);
    // No shadow register to write to
}

/*
 * Register therm_status: Thermal status
 * Type: ia32.therm_status (Implicit type of Thermal status register)
 *   therm	(size 1, offset 0, init 0):	RO	Status flag
 *   thermlg	(size 1, offset 1, init 0):	RWZC	Log flag
 *   porf	(size 1, offset 2, init 0):	RO	PROCHOT# or FORCEPR# asserted
 *   porflg	(size 1, offset 3, init 0):	RWZC	PROCHOT# or FORCEPR# log
 *   cts	(size 1, offset 4, init 0):	RO	Critical temperature status
 *   ctslg	(size 1, offset 5, init 0):	RWZC	Critical temperature log
 *   tt1	(size 1, offset 6, init 0):	RO	Thermal threshold status 1
 *   tt1lg	(size 1, offset 7, init 0):	RWZC	Thermal threshold log 1
 *   tt2	(size 1, offset 8, init 0):	RO	Thermal threshold status 2
 *   tt2lg	(size 1, offset 9, init 0):	RWZC	Thermal threshold log 2
 *   _anon10	(size 6, offset 10, init 0):	RSVD	_
 *   dig	(size 7, offset 16, init 0):	RO	Digital readout in Celsius
 *   _anon23	(size 4, offset 23, init 0):	RSVD	_
 *   res	(size 4, offset 27, init 0):	RO	Resolution in degrees Celsius
 *   rv	(size 1, offset 31, init 0):	RO	Reading valid
 *   _anon32	(size 32, offset 32, init 0):	RSVD	_
 */
static inline ia32_therm_status_t ia32_therm_status_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_rawrd(__DN(t) *_dev)
{
    return((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)));
}

static inline ia32_therm_status_t ia32_therm_status_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_therm_status_t ia32_therm_status_rd(__DN(t) *_dev)
{
    return((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)));
}

static inline void ia32_therm_status_rawwr(__DN(t) *_dev, ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_therm_status_rawwr(__DN(t) *_dev, ia32_therm_status_t _regval)
{
    __DN(msr)::write64(_dev, 0x19c, _regval);
}

static inline void ia32_therm_status_wr(__DN(t) *_dev, ia32_therm_status_t _regval) __attribute__ ((always_inline));
static inline void ia32_therm_status_wr(__DN(t) *_dev, ia32_therm_status_t _regval)
{
    _regval = (_regval & 0xf87f03ff);
    // No MB1 fields present
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    __DN(msr)::write64(_dev, 0x19c, _regval);
}

static inline dout_t& ia32_therm_status_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_therm_status_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    _os << ("Register therm_status (Thermal status): ");
    _os << ("\n");
    ((_os << (" therm =\t")) << ia32_therm_status_therm_extract(_regval)) << ("\t(Status flag)\n");
    ((_os << (" thermlg =\t")) << ia32_therm_status_thermlg_extract(_regval)) << ("\t(Log flag)\n");
    ((_os << (" porf =\t")) << ia32_therm_status_porf_extract(_regval)) << ("\t(PROCHOT# or FORCEPR# asserted)\n");
    ((_os << (" porflg =\t")) << ia32_therm_status_porflg_extract(_regval)) << ("\t(PROCHOT# or FORCEPR# log)\n");
    ((_os << (" cts =\t")) << ia32_therm_status_cts_extract(_regval)) << ("\t(Critical temperature status)\n");
    ((_os << (" ctslg =\t")) << ia32_therm_status_ctslg_extract(_regval)) << ("\t(Critical temperature log)\n");
    ((_os << (" tt1 =\t")) << ia32_therm_status_tt1_extract(_regval)) << ("\t(Thermal threshold status 1)\n");
    ((_os << (" tt1lg =\t")) << ia32_therm_status_tt1lg_extract(_regval)) << ("\t(Thermal threshold log 1)\n");
    ((_os << (" tt2 =\t")) << ia32_therm_status_tt2_extract(_regval)) << ("\t(Thermal threshold status 2)\n");
    ((_os << (" tt2lg =\t")) << ia32_therm_status_tt2lg_extract(_regval)) << ("\t(Thermal threshold log 2)\n");
    // _anon10 is anonymous
    ((_os << (" dig =\t")) << ia32_therm_status_dig_extract(_regval)) << ("\t(Digital readout in Celsius)\n");
    // _anon23 is anonymous
    ((_os << (" res =\t")) << ia32_therm_status_res_extract(_regval)) << ("\t(Resolution in degrees Celsius)\n");
    ((_os << (" rv =\t")) << ia32_therm_status_rv_extract(_regval)) << ("\t(Reading valid)\n");
    // _anon32 is anonymous
    return(_os);
}

static inline uint8_t ia32_therm_status_therm_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_therm_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_therm_extract(_regval));
}

static inline uint8_t ia32_therm_status_thermlg_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_thermlg_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_thermlg_extract(_regval));
}

static inline uint8_t ia32_therm_status_porf_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_porf_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_porf_extract(_regval));
}

static inline uint8_t ia32_therm_status_porflg_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_porflg_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_porflg_extract(_regval));
}

static inline uint8_t ia32_therm_status_cts_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_cts_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_cts_extract(_regval));
}

static inline uint8_t ia32_therm_status_ctslg_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_ctslg_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_ctslg_extract(_regval));
}

static inline uint8_t ia32_therm_status_tt1_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt1_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_tt1_extract(_regval));
}

static inline uint8_t ia32_therm_status_tt1lg_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt1lg_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_tt1lg_extract(_regval));
}

static inline uint8_t ia32_therm_status_tt2_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt2_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_tt2_extract(_regval));
}

static inline uint8_t ia32_therm_status_tt2lg_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_tt2lg_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_tt2lg_extract(_regval));
}

static inline uint8_t ia32_therm_status_dig_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_dig_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_dig_extract(_regval));
}

static inline uint8_t ia32_therm_status_res_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_res_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_res_extract(_regval));
}

static inline uint8_t ia32_therm_status_rv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_therm_status_rv_rdf(__DN(t) *_dev)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c));
    return(ia32_therm_status_rv_extract(_regval));
}

static inline void ia32_therm_status_thermlg_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_status_thermlg_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(0x2 & (((ia32_therm_status_t )(_fieldval)) << 1));
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19c, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_status_porflg_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_status_porflg_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(0x8 & (((ia32_therm_status_t )(_fieldval)) << 3));
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19c, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_status_ctslg_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_status_ctslg_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(0x20 & (((ia32_therm_status_t )(_fieldval)) << 5));
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19c, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_status_tt1lg_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_status_tt1lg_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(0x80 & (((ia32_therm_status_t )(_fieldval)) << 7));
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19c, _regval);
    // No shadow register to write to
}

static inline void ia32_therm_status_tt2lg_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_therm_status_tt2lg_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_therm_status_t _regval = (ia32_therm_status_t )(0x200 & (((ia32_therm_status_t )(_fieldval)) << 9));
    _regval = (_regval | (0xffffffff0780fc00 & ((ia32_therm_status_t )(__DN(msr)::read64(_dev, 0x19c)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0x19c, _regval);
    // No shadow register to write to
}

/*
 * Register perfctr0: Performance Counter 0
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_perfctr0_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr0_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010004)));
}

static inline uint64_t ia32_perfctr0_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr0_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010004)));
}

static inline void ia32_perfctr0_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr0_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010004, _regval);
}

static inline void ia32_perfctr0_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr0_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0010004, _regval);
}

static inline dout_t& ia32_perfctr0_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfctr0_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0010004));
    _os << ("Register perfctr0 (Performance Counter 0): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register perfctr1: Performance Counter 1
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_perfctr1_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr1_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010005)));
}

static inline uint64_t ia32_perfctr1_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr1_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010005)));
}

static inline void ia32_perfctr1_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr1_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010005, _regval);
}

static inline void ia32_perfctr1_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr1_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0010005, _regval);
}

static inline dout_t& ia32_perfctr1_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfctr1_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0010005));
    _os << ("Register perfctr1 (Performance Counter 1): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register perfctr2: Performance Counter 2
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_perfctr2_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr2_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010006)));
}

static inline uint64_t ia32_perfctr2_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr2_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010006)));
}

static inline void ia32_perfctr2_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr2_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010006, _regval);
}

static inline void ia32_perfctr2_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr2_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0010006, _regval);
}

static inline dout_t& ia32_perfctr2_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfctr2_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0010006));
    _os << ("Register perfctr2 (Performance Counter 2): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register perfctr3: Performance Counter 3
 * Type: ia32.uint64 (primitive type)
 */
static inline uint64_t ia32_perfctr3_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr3_rawrd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010007)));
}

static inline uint64_t ia32_perfctr3_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint64_t ia32_perfctr3_rd(__DN(t) *_dev)
{
    return((uint64_t )(__DN(msr)::read64(_dev, 0xc0010007)));
}

static inline void ia32_perfctr3_rawwr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr3_rawwr(__DN(t) *_dev, uint64_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010007, _regval);
}

static inline void ia32_perfctr3_wr(__DN(t) *_dev, uint64_t _regval) __attribute__ ((always_inline));
static inline void ia32_perfctr3_wr(__DN(t) *_dev, uint64_t _regval)
{
    // No MB0 or RSVD fields present
    // No MB1 fields present
    // No pre-read of register required
    __DN(msr)::write64(_dev, 0xc0010007, _regval);
}

static inline dout_t& ia32_perfctr3_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_perfctr3_pr(dout_t& _os, __DN(t) *_dev)
{
    uint64_t _regval = (uint64_t )(__DN(msr)::read64(_dev, 0xc0010007));
    _os << ("Register perfctr3 (Performance Counter 3): ");
    ((_os << ("\t")) << _regval) << ("");
    return(_os);
}

/*
 * Register amd_perfevtsel0: Performance Event Select 0
 * Type: ia32.amd_perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   evsel_hi	(size 4, offset 32, init 0):	RW	Event select Hi
 *   _anon36	(size 4, offset 36, init 0):	RSVD	_
 *   guestonly	(size 1, offset 40, init 0):	RW	Guest only counter
 *   hostonly	(size 1, offset 41, init 0):	RW	Host only counter
 *   _anon42	(size 22, offset 42, init 0):	RSVD	_
 */
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel0_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel0_rawrd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel0_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel0_rd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)));
}

static inline void ia32_amd_perfevtsel0_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
}

static inline void ia32_amd_perfevtsel0_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    _regval = (_regval & 0x30fffd7ffff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffcf000280000 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
}

static inline dout_t& ia32_amd_perfevtsel0_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_amd_perfevtsel0_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    _os << ("Register amd_perfevtsel0 (Performance Event Select 0): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_amd_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_amd_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_amd_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_amd_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_amd_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    // _anon19 is anonymous
    ((_os << (" intr =\t")) << ia32_amd_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_amd_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_amd_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_amd_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    ((_os << (" evsel_hi =\t")) << ia32_amd_perfevtsel_evsel_hi_extract(_regval)) << ("\t(Event select Hi)\n");
    // _anon36 is anonymous
    ((_os << (" guestonly =\t")) << ia32_amd_perfevtsel_guestonly_extract(_regval)) << ("\t(Guest only counter)\n");
    ((_os << (" hostonly =\t")) << ia32_amd_perfevtsel_hostonly_extract(_regval)) << ("\t(Host only counter)\n");
    // _anon42 is anonymous
    return(_os);
}

static inline uint8_t ia32_amd_perfevtsel0_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_evsel_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_umask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_usr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_os_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_e_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_intr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_en_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_inv_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_cmask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_cmask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_evsel_hi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_evsel_hi_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_evsel_hi_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_guestonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_guestonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_guestonly_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel0_hostonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel0_hostonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000));
    return(ia32_amd_perfevtsel_hostonly_extract(_regval));
}

static inline void ia32_amd_perfevtsel0_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff & (((ia32_amd_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff00 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x40000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x100000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x400000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x800000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xf00000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffff0ffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 40));
    _regval = (_regval | (0xfffffeffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel0_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel0_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 41));
    _regval = (_regval | (0xfffffdffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010000)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010000, _regval);
    // No shadow register to write to
}

/*
 * Register amd_perfevtsel1: Performance Event Select 1
 * Type: ia32.amd_perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   evsel_hi	(size 4, offset 32, init 0):	RW	Event select Hi
 *   _anon36	(size 4, offset 36, init 0):	RSVD	_
 *   guestonly	(size 1, offset 40, init 0):	RW	Guest only counter
 *   hostonly	(size 1, offset 41, init 0):	RW	Host only counter
 *   _anon42	(size 22, offset 42, init 0):	RSVD	_
 */
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel1_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel1_rawrd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel1_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel1_rd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)));
}

static inline void ia32_amd_perfevtsel1_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
}

static inline void ia32_amd_perfevtsel1_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    _regval = (_regval & 0x30fffd7ffff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffcf000280000 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
}

static inline dout_t& ia32_amd_perfevtsel1_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_amd_perfevtsel1_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    _os << ("Register amd_perfevtsel1 (Performance Event Select 1): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_amd_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_amd_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_amd_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_amd_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_amd_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    // _anon19 is anonymous
    ((_os << (" intr =\t")) << ia32_amd_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_amd_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_amd_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_amd_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    ((_os << (" evsel_hi =\t")) << ia32_amd_perfevtsel_evsel_hi_extract(_regval)) << ("\t(Event select Hi)\n");
    // _anon36 is anonymous
    ((_os << (" guestonly =\t")) << ia32_amd_perfevtsel_guestonly_extract(_regval)) << ("\t(Guest only counter)\n");
    ((_os << (" hostonly =\t")) << ia32_amd_perfevtsel_hostonly_extract(_regval)) << ("\t(Host only counter)\n");
    // _anon42 is anonymous
    return(_os);
}

static inline uint8_t ia32_amd_perfevtsel1_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_evsel_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_umask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_usr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_os_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_e_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_intr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_en_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_inv_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_cmask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_cmask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_evsel_hi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_evsel_hi_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_evsel_hi_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_guestonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_guestonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_guestonly_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel1_hostonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel1_hostonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001));
    return(ia32_amd_perfevtsel_hostonly_extract(_regval));
}

static inline void ia32_amd_perfevtsel1_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff & (((ia32_amd_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff00 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x40000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x100000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x400000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x800000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xf00000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffff0ffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 40));
    _regval = (_regval | (0xfffffeffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel1_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel1_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 41));
    _regval = (_regval | (0xfffffdffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010001)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010001, _regval);
    // No shadow register to write to
}

/*
 * Register amd_perfevtsel2: Performance Event Select 2
 * Type: ia32.amd_perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   evsel_hi	(size 4, offset 32, init 0):	RW	Event select Hi
 *   _anon36	(size 4, offset 36, init 0):	RSVD	_
 *   guestonly	(size 1, offset 40, init 0):	RW	Guest only counter
 *   hostonly	(size 1, offset 41, init 0):	RW	Host only counter
 *   _anon42	(size 22, offset 42, init 0):	RSVD	_
 */
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel2_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel2_rawrd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel2_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel2_rd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)));
}

static inline void ia32_amd_perfevtsel2_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
}

static inline void ia32_amd_perfevtsel2_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    _regval = (_regval & 0x30fffd7ffff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffcf000280000 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
}

static inline dout_t& ia32_amd_perfevtsel2_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_amd_perfevtsel2_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    _os << ("Register amd_perfevtsel2 (Performance Event Select 2): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_amd_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_amd_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_amd_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_amd_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_amd_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    // _anon19 is anonymous
    ((_os << (" intr =\t")) << ia32_amd_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_amd_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_amd_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_amd_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    ((_os << (" evsel_hi =\t")) << ia32_amd_perfevtsel_evsel_hi_extract(_regval)) << ("\t(Event select Hi)\n");
    // _anon36 is anonymous
    ((_os << (" guestonly =\t")) << ia32_amd_perfevtsel_guestonly_extract(_regval)) << ("\t(Guest only counter)\n");
    ((_os << (" hostonly =\t")) << ia32_amd_perfevtsel_hostonly_extract(_regval)) << ("\t(Host only counter)\n");
    // _anon42 is anonymous
    return(_os);
}

static inline uint8_t ia32_amd_perfevtsel2_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_evsel_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_umask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_usr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_os_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_e_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_intr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_en_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_inv_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_cmask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_cmask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_evsel_hi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_evsel_hi_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_evsel_hi_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_guestonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_guestonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_guestonly_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel2_hostonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel2_hostonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002));
    return(ia32_amd_perfevtsel_hostonly_extract(_regval));
}

static inline void ia32_amd_perfevtsel2_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff & (((ia32_amd_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff00 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x40000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x100000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x400000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x800000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xf00000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffff0ffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 40));
    _regval = (_regval | (0xfffffeffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel2_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel2_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 41));
    _regval = (_regval | (0xfffffdffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010002)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010002, _regval);
    // No shadow register to write to
}

/*
 * Register amd_perfevtsel3: Performance Event Select 3
 * Type: ia32.amd_perfevtsel (Perfmon event select)
 *   evsel	(size 8, offset 0, init 0):	RW	Event select
 *   umask	(size 8, offset 8, init 0):	RW	Unit mask
 *   usr	(size 1, offset 16, init 0):	RW	User mode
 *   os	(size 1, offset 17, init 0):	RW	OS mode
 *   e	(size 1, offset 18, init 0):	RW	Edge detect
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   intr	(size 1, offset 20, init 0):	RW	APIC interrupt enable
 *   _anon21	(size 1, offset 21, init 0):	RSVD	_
 *   en	(size 1, offset 22, init 0):	RW	Enable counters
 *   inv	(size 1, offset 23, init 0):	RW	Invert counter mask
 *   cmask	(size 8, offset 24, init 0):	RW	Counter mask
 *   evsel_hi	(size 4, offset 32, init 0):	RW	Event select Hi
 *   _anon36	(size 4, offset 36, init 0):	RSVD	_
 *   guestonly	(size 1, offset 40, init 0):	RW	Guest only counter
 *   hostonly	(size 1, offset 41, init 0):	RW	Host only counter
 *   _anon42	(size 22, offset 42, init 0):	RSVD	_
 */
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel3_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel3_rawrd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)));
}

static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel3_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_perfevtsel_t ia32_amd_perfevtsel3_rd(__DN(t) *_dev)
{
    return((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)));
}

static inline void ia32_amd_perfevtsel3_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_rawwr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
}

static inline void ia32_amd_perfevtsel3_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_wr(__DN(t) *_dev, ia32_amd_perfevtsel_t _regval)
{
    _regval = (_regval & 0x30fffd7ffff);
    // No MB1 fields present
    _regval = (_regval | (0xfffffcf000280000 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
}

static inline dout_t& ia32_amd_perfevtsel3_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_amd_perfevtsel3_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    _os << ("Register amd_perfevtsel3 (Performance Event Select 3): ");
    _os << ("\n");
    ((_os << (" evsel =\t")) << ia32_amd_perfevtsel_evsel_extract(_regval)) << ("\t(Event select)\n");
    ((_os << (" umask =\t")) << ia32_amd_perfevtsel_umask_extract(_regval)) << ("\t(Unit mask)\n");
    ((_os << (" usr =\t")) << ia32_amd_perfevtsel_usr_extract(_regval)) << ("\t(User mode)\n");
    ((_os << (" os =\t")) << ia32_amd_perfevtsel_os_extract(_regval)) << ("\t(OS mode)\n");
    ((_os << (" e =\t")) << ia32_amd_perfevtsel_e_extract(_regval)) << ("\t(Edge detect)\n");
    // _anon19 is anonymous
    ((_os << (" intr =\t")) << ia32_amd_perfevtsel_intr_extract(_regval)) << ("\t(APIC interrupt enable)\n");
    // _anon21 is anonymous
    ((_os << (" en =\t")) << ia32_amd_perfevtsel_en_extract(_regval)) << ("\t(Enable counters)\n");
    ((_os << (" inv =\t")) << ia32_amd_perfevtsel_inv_extract(_regval)) << ("\t(Invert counter mask)\n");
    ((_os << (" cmask =\t")) << ia32_amd_perfevtsel_cmask_extract(_regval)) << ("\t(Counter mask)\n");
    ((_os << (" evsel_hi =\t")) << ia32_amd_perfevtsel_evsel_hi_extract(_regval)) << ("\t(Event select Hi)\n");
    // _anon36 is anonymous
    ((_os << (" guestonly =\t")) << ia32_amd_perfevtsel_guestonly_extract(_regval)) << ("\t(Guest only counter)\n");
    ((_os << (" hostonly =\t")) << ia32_amd_perfevtsel_hostonly_extract(_regval)) << ("\t(Host only counter)\n");
    // _anon42 is anonymous
    return(_os);
}

static inline uint8_t ia32_amd_perfevtsel3_evsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_evsel_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_evsel_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_umask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_umask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_umask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_usr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_usr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_usr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_os_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_os_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_os_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_e_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_e_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_e_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_intr_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_intr_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_intr_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_en_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_en_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_en_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_inv_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_inv_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_inv_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_cmask_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_cmask_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_cmask_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_evsel_hi_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_evsel_hi_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_evsel_hi_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_guestonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_guestonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_guestonly_extract(_regval));
}

static inline uint8_t ia32_amd_perfevtsel3_hostonly_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_perfevtsel3_hostonly_rdf(__DN(t) *_dev)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003));
    return(ia32_amd_perfevtsel_hostonly_extract(_regval));
}

static inline void ia32_amd_perfevtsel3_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_evsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff & (((ia32_amd_perfevtsel_t )(_fieldval)) << 0));
    _regval = (_regval | (0xffffffffffffff00 & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_umask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_umask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff00 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 8));
    _regval = (_regval | (0xffffffffffff00ff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_usr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_usr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 16));
    _regval = (_regval | (0xfffffffffffeffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_os_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_os_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_e_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_e_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x40000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_intr_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_intr_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x100000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffefffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_en_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_en_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x400000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 22));
    _regval = (_regval | (0xffffffffffbfffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_inv_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_inv_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x800000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7fffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_cmask_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xff000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 24));
    _regval = (_regval | (0xffffffff00ffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_evsel_hi_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0xf00000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 32));
    _regval = (_regval | (0xfffffff0ffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_guestonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x10000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 40));
    _regval = (_regval | (0xfffffeffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_perfevtsel3_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_perfevtsel3_hostonly_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_perfevtsel_t _regval = (ia32_amd_perfevtsel_t )(0x20000000000 & (((ia32_amd_perfevtsel_t )(_fieldval)) << 41));
    _regval = (_regval | (0xfffffdffffffffff & ((ia32_amd_perfevtsel_t )(__DN(msr)::read64(_dev, 0xc0010003)))));
    // No read of register shadow required
    // No MB0 fields present
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010003, _regval);
    // No shadow register to write to
}

/*
 * Register amd_hwcr: Hardware Configuration
 * Type: ia32.amd_hwcr (Implicit type of Hardware Configuration register)
 *   smmlock	(size 1, offset 0, init 0):	RW	SMM code lock
 *   slowfence	(size 1, offset 1, init 0):	RW	Slow SFENCE Enable
 *   _anon2	(size 1, offset 2, init 0):	MBZ	_
 *   tlbcachedis	(size 1, offset 3, init 0):	RW	Cacheable Memory Disable
 *   invd_wbinvd	(size 1, offset 4, init 0):	RW	INVD to WBINVD conversion
 *   _anon5	(size 1, offset 5, init 0):	RSVD	_
 *   ffdis	(size 1, offset 6, init 0):	RW	TLB flush filter disable
 *   dislock	(size 1, offset 7, init 0):	RW	Disable x86 LOCK prefix functionality
 *   ignneem	(size 1, offset 8, init 0):	RW	IGNNE port emulation enable
 *   monmwaitdis	(size 1, offset 9, init 0):	RW	MONITOR and MWAIT disable
 *   monmwaituseren	(size 1, offset 10, init 0):	RW	MONITOR/MWAIT user mode enable
 *   limitcpuidstdmaxval	(size 1, offset 11, init 0):	RW	Limit CPUID standard maximum value
 *   hltxspcycen	(size 1, offset 12, init 0):	RW	Halt-exit special bus cycle enable
 *   smispcycdis	(size 1, offset 13, init 0):	RW	SMI special bus cycle disable
 *   rsmspcycdis	(size 1, offset 14, init 0):	RW	RSM special bus cycle disable
 *   ssedis	(size 1, offset 15, init 0):	RW	SSE instructions disable
 *   _anon16	(size 1, offset 16, init 0):	RSVD	_
 *   wrap32dis	(size 1, offset 17, init 0):	RW	32-bit address wrap disable
 *   mcstatuswren	(size 1, offset 18, init 0):	RW	Machine check status write enable
 *   _anon19	(size 1, offset 19, init 0):	RSVD	_
 *   iocfggpfault	(size 1, offset 20, init 0):	RW	IO-space configuration cause GP fault
 *   misalignssedis	(size 1, offset 21, init 0):	RW	Misaligned SSE mode disable
 *   _anon22	(size 1, offset 22, init 0):	RSVD	_
 *   forceusrdwrszprb	(size 1, offset 23, init 0):	RW	Force probes for upstream RdSized/WrSized
 *   tscfreqsel	(size 1, offset 24, init 0):	RW	TSC frequency select
 *   _anon25	(size 39, offset 25, init 0):	RSVD	_
 */
static inline ia32_amd_hwcr_t ia32_amd_hwcr_rawrd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_rawrd(__DN(t) *_dev)
{
    return((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)));
}

static inline ia32_amd_hwcr_t ia32_amd_hwcr_rd(__DN(t) *_dev) __attribute__ ((always_inline));
static inline ia32_amd_hwcr_t ia32_amd_hwcr_rd(__DN(t) *_dev)
{
    return((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)));
}

static inline void ia32_amd_hwcr_rawwr(__DN(t) *_dev, ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_rawwr(__DN(t) *_dev, ia32_amd_hwcr_t _regval)
{
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
}

static inline void ia32_amd_hwcr_wr(__DN(t) *_dev, ia32_amd_hwcr_t _regval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_wr(__DN(t) *_dev, ia32_amd_hwcr_t _regval)
{
    _regval = (_regval & 0x1b6ffdb);
    // No MB1 fields present
    _regval = (_regval | (0xfffffffffe490020 & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
}

static inline dout_t& ia32_amd_hwcr_pr(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& ia32_amd_hwcr_pr(dout_t& _os, __DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    _os << ("Register amd_hwcr (Hardware Configuration): ");
    _os << ("\n");
    ((_os << (" smmlock =\t")) << ia32_amd_hwcr_smmlock_extract(_regval)) << ("\t(SMM code lock)\n");
    ((_os << (" slowfence =\t")) << ia32_amd_hwcr_slowfence_extract(_regval)) << ("\t(Slow SFENCE Enable)\n");
    // _anon2 is anonymous
    ((_os << (" tlbcachedis =\t")) << ia32_amd_hwcr_tlbcachedis_extract(_regval)) << ("\t(Cacheable Memory Disable)\n");
    ((_os << (" invd_wbinvd =\t")) << ia32_amd_hwcr_invd_wbinvd_extract(_regval)) << ("\t(INVD to WBINVD conversion)\n");
    // _anon5 is anonymous
    ((_os << (" ffdis =\t")) << ia32_amd_hwcr_ffdis_extract(_regval)) << ("\t(TLB flush filter disable)\n");
    ((_os << (" dislock =\t")) << ia32_amd_hwcr_dislock_extract(_regval)) << ("\t(Disable x86 LOCK prefix functionality)\n");
    ((_os << (" ignneem =\t")) << ia32_amd_hwcr_ignneem_extract(_regval)) << ("\t(IGNNE port emulation enable)\n");
    ((_os << (" monmwaitdis =\t")) << ia32_amd_hwcr_monmwaitdis_extract(_regval)) << ("\t(MONITOR and MWAIT disable)\n");
    ((_os << (" monmwaituseren =\t")) << ia32_amd_hwcr_monmwaituseren_extract(_regval)) << ("\t(MONITOR/MWAIT user mode enable)\n");
    ((_os << (" limitcpuidstdmaxval =\t")) << ia32_amd_hwcr_limitcpuidstdmaxval_extract(_regval)) << ("\t(Limit CPUID standard maximum value)\n");
    ((_os << (" hltxspcycen =\t")) << ia32_amd_hwcr_hltxspcycen_extract(_regval)) << ("\t(Halt-exit special bus cycle enable)\n");
    ((_os << (" smispcycdis =\t")) << ia32_amd_hwcr_smispcycdis_extract(_regval)) << ("\t(SMI special bus cycle disable)\n");
    ((_os << (" rsmspcycdis =\t")) << ia32_amd_hwcr_rsmspcycdis_extract(_regval)) << ("\t(RSM special bus cycle disable)\n");
    ((_os << (" ssedis =\t")) << ia32_amd_hwcr_ssedis_extract(_regval)) << ("\t(SSE instructions disable)\n");
    // _anon16 is anonymous
    ((_os << (" wrap32dis =\t")) << ia32_amd_hwcr_wrap32dis_extract(_regval)) << ("\t(32-bit address wrap disable)\n");
    ((_os << (" mcstatuswren =\t")) << ia32_amd_hwcr_mcstatuswren_extract(_regval)) << ("\t(Machine check status write enable)\n");
    // _anon19 is anonymous
    ((_os << (" iocfggpfault =\t")) << ia32_amd_hwcr_iocfggpfault_extract(_regval)) << ("\t(IO-space configuration cause GP fault)\n");
    ((_os << (" misalignssedis =\t")) << ia32_amd_hwcr_misalignssedis_extract(_regval)) << ("\t(Misaligned SSE mode disable)\n");
    // _anon22 is anonymous
    ((_os << (" forceusrdwrszprb =\t")) << ia32_amd_hwcr_forceusrdwrszprb_extract(_regval)) << ("\t(Force probes for upstream RdSized/WrSized)\n");
    ((_os << (" tscfreqsel =\t")) << ia32_amd_hwcr_tscfreqsel_extract(_regval)) << ("\t(TSC frequency select)\n");
    // _anon25 is anonymous
    return(_os);
}

static inline uint8_t ia32_amd_hwcr_smmlock_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_smmlock_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_smmlock_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_slowfence_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_slowfence_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_slowfence_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_tlbcachedis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_tlbcachedis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_tlbcachedis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_invd_wbinvd_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_invd_wbinvd_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_invd_wbinvd_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_ffdis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ffdis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_ffdis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_dislock_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_dislock_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_dislock_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_ignneem_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ignneem_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_ignneem_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_monmwaitdis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_monmwaitdis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_monmwaitdis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_monmwaituseren_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_monmwaituseren_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_monmwaituseren_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_limitcpuidstdmaxval_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_limitcpuidstdmaxval_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_limitcpuidstdmaxval_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_hltxspcycen_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_hltxspcycen_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_hltxspcycen_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_smispcycdis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_smispcycdis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_smispcycdis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_rsmspcycdis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_rsmspcycdis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_rsmspcycdis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_ssedis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_ssedis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_ssedis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_wrap32dis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_wrap32dis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_wrap32dis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_mcstatuswren_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_mcstatuswren_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_mcstatuswren_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_iocfggpfault_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_iocfggpfault_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_iocfggpfault_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_misalignssedis_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_misalignssedis_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_misalignssedis_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_forceusrdwrszprb_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_forceusrdwrszprb_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_forceusrdwrszprb_extract(_regval));
}

static inline uint8_t ia32_amd_hwcr_tscfreqsel_rdf(__DN(t) *_dev) __attribute__ ((always_inline));
static inline uint8_t ia32_amd_hwcr_tscfreqsel_rdf(__DN(t) *_dev)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015));
    return(ia32_amd_hwcr_tscfreqsel_extract(_regval));
}

static inline void ia32_amd_hwcr_smmlock_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_smmlock_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x1 & (((ia32_amd_hwcr_t )(_fieldval)) << 0));
    _regval = (_regval | (0xfffffffffffffffa & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_slowfence_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_slowfence_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x2 & (((ia32_amd_hwcr_t )(_fieldval)) << 1));
    _regval = (_regval | (0xfffffffffffffff9 & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_tlbcachedis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_tlbcachedis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x8 & (((ia32_amd_hwcr_t )(_fieldval)) << 3));
    _regval = (_regval | (0xfffffffffffffff3 & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_invd_wbinvd_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_invd_wbinvd_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x10 & (((ia32_amd_hwcr_t )(_fieldval)) << 4));
    _regval = (_regval | (0xffffffffffffffeb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_ffdis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_ffdis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x40 & (((ia32_amd_hwcr_t )(_fieldval)) << 6));
    _regval = (_regval | (0xffffffffffffffbb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_dislock_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_dislock_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x80 & (((ia32_amd_hwcr_t )(_fieldval)) << 7));
    _regval = (_regval | (0xffffffffffffff7b & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_ignneem_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_ignneem_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x100 & (((ia32_amd_hwcr_t )(_fieldval)) << 8));
    _regval = (_regval | (0xfffffffffffffefb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_monmwaitdis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_monmwaitdis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x200 & (((ia32_amd_hwcr_t )(_fieldval)) << 9));
    _regval = (_regval | (0xfffffffffffffdfb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_monmwaituseren_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_monmwaituseren_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x400 & (((ia32_amd_hwcr_t )(_fieldval)) << 10));
    _regval = (_regval | (0xfffffffffffffbfb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_limitcpuidstdmaxval_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_limitcpuidstdmaxval_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x800 & (((ia32_amd_hwcr_t )(_fieldval)) << 11));
    _regval = (_regval | (0xfffffffffffff7fb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_hltxspcycen_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_hltxspcycen_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x1000 & (((ia32_amd_hwcr_t )(_fieldval)) << 12));
    _regval = (_regval | (0xffffffffffffeffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_smispcycdis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_smispcycdis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x2000 & (((ia32_amd_hwcr_t )(_fieldval)) << 13));
    _regval = (_regval | (0xffffffffffffdffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_rsmspcycdis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_rsmspcycdis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x4000 & (((ia32_amd_hwcr_t )(_fieldval)) << 14));
    _regval = (_regval | (0xffffffffffffbffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_ssedis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_ssedis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x8000 & (((ia32_amd_hwcr_t )(_fieldval)) << 15));
    _regval = (_regval | (0xffffffffffff7ffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_wrap32dis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_wrap32dis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x20000 & (((ia32_amd_hwcr_t )(_fieldval)) << 17));
    _regval = (_regval | (0xfffffffffffdfffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_mcstatuswren_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_mcstatuswren_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x40000 & (((ia32_amd_hwcr_t )(_fieldval)) << 18));
    _regval = (_regval | (0xfffffffffffbfffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_iocfggpfault_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_iocfggpfault_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x100000 & (((ia32_amd_hwcr_t )(_fieldval)) << 20));
    _regval = (_regval | (0xffffffffffeffffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_misalignssedis_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_misalignssedis_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x200000 & (((ia32_amd_hwcr_t )(_fieldval)) << 21));
    _regval = (_regval | (0xffffffffffdffffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_forceusrdwrszprb_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_forceusrdwrszprb_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x800000 & (((ia32_amd_hwcr_t )(_fieldval)) << 23));
    _regval = (_regval | (0xffffffffff7ffffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline void ia32_amd_hwcr_tscfreqsel_wrf(__DN(t) *_dev, uint8_t _fieldval) __attribute__ ((always_inline));
static inline void ia32_amd_hwcr_tscfreqsel_wrf(__DN(t) *_dev, uint8_t _fieldval)
{
    ia32_amd_hwcr_t _regval = (ia32_amd_hwcr_t )(0x1000000 & (((ia32_amd_hwcr_t )(_fieldval)) << 24));
    _regval = (_regval | (0xfffffffffefffffb & ((ia32_amd_hwcr_t )(__DN(msr)::read64(_dev, 0xc0010015)))));
    // No read of register shadow required
    _regval = (_regval & 0xfffffffffffffffb);
    // No MB1 fields present
    __DN(msr)::write64(_dev, 0xc0010015, _regval);
    // No shadow register to write to
}

static inline dout_t& operator<<(dout_t& _os, __DN(t) *_dev) __attribute__ ((always_inline));
static inline dout_t& operator<<(dout_t& _os, __DN(t) *_dev)
{
    _os << ("-------------------------\n");
    _os << ("Dump of device ia32 (ia32 / Intel64 core architecture):\n");
    ia32_mon_filter_size_pr(_os, _dev);
    ia32_platform_id_pr(_os, _dev);
    ia32_apic_base_pr(_os, _dev);
    ia32_feature_cntl_pr(_os, _dev);
    ia32_bios_updt_trig_pr(_os, _dev);
    ia32_bios_sign_id_pr(_os, _dev);
    ia32_smm_monitor_ctl_pr(_os, _dev);
    ia32_misc_enable_pr(_os, _dev);
    ia32_p5_mc_addr_pr(_os, _dev);
    ia32_p5_mc_type_pr(_os, _dev);
    ia32_mcg_cap_pr(_os, _dev);
    ia32_mcg_status_pr(_os, _dev);
    ia32_mcg_ctl_pr(_os, _dev);
    ia32_mcg_rax_pr(_os, _dev);
    ia32_mcg_rbx_pr(_os, _dev);
    ia32_mcg_rcx_pr(_os, _dev);
    ia32_mcg_rdx_pr(_os, _dev);
    ia32_mcg_rsi_pr(_os, _dev);
    ia32_mcg_rdi_pr(_os, _dev);
    ia32_mcg_rbp_pr(_os, _dev);
    ia32_mcg_rsp_pr(_os, _dev);
    ia32_mcg_rflags_pr(_os, _dev);
    ia32_mcg_rip_pr(_os, _dev);
    ia32_mcg_misc_pr(_os, _dev);
    ia32_mcg_r8_pr(_os, _dev);
    ia32_mcg_r9_pr(_os, _dev);
    ia32_mcg_r10_pr(_os, _dev);
    ia32_mcg_r11_pr(_os, _dev);
    ia32_mcg_r12_pr(_os, _dev);
    ia32_mcg_r13_pr(_os, _dev);
    ia32_mcg_r14_pr(_os, _dev);
    ia32_mcg_r15_pr(_os, _dev);
    ia32_mc_ctl_pr(_os, _dev);
    ia32_mc_status_pr(_os, _dev);
    ia32_mc_addr_pr(_os, _dev);
    ia32_mc_misc_pr(_os, _dev);
    ia32_debugctl_pr(_os, _dev);
    ia32_tsc_pr(_os, _dev);
    ia32_pmc0_pr(_os, _dev);
    ia32_pmc1_pr(_os, _dev);
    ia32_perfevtsel0_pr(_os, _dev);
    ia32_perfevtsel1_pr(_os, _dev);
    ia32_fixed_ctr0_pr(_os, _dev);
    ia32_fixed_ctr1_pr(_os, _dev);
    ia32_fixed_ctr2_pr(_os, _dev);
    ia32_fixed_ctr_ctl_pr(_os, _dev);
    ia32_perf_global_status_pr(_os, _dev);
    ia32_perf_global_over_pr(_os, _dev);
    ia32_perf_global_ctrl_pr(_os, _dev);
    ia32_pebs_enable_pr(_os, _dev);
    ia32_efer_pr(_os, _dev);
    ia32_star_pr(_os, _dev);
    ia32_lstar_pr(_os, _dev);
    ia32_fmask_pr(_os, _dev);
    ia32_fs_base_pr(_os, _dev);
    ia32_gs_base_pr(_os, _dev);
    ia32_kernel_gs_base_pr(_os, _dev);
    ia32_mtrrcap_pr(_os, _dev);
    ia32_mtrr_def_type_pr(_os, _dev);
    ia32_mtrr_physbase_pr(_os, _dev);
    ia32_mtrr_physmask_pr(_os, _dev);
    ia32_mtrr_fix64k_00000_pr(_os, _dev);
    ia32_mtrr_fix16k_80000_pr(_os, _dev);
    ia32_mtrr_fix16k_a0000_pr(_os, _dev);
    ia32_mtrr_fix4k_c0000_pr(_os, _dev);
    ia32_mtrr_fix4k_c8000_pr(_os, _dev);
    ia32_mtrr_fix4k_d0000_pr(_os, _dev);
    ia32_mtrr_fix4k_d8000_pr(_os, _dev);
    ia32_mtrr_fix4k_e0000_pr(_os, _dev);
    ia32_mtrr_fix4k_e8000_pr(_os, _dev);
    ia32_mtrr_fix4k_f0000_pr(_os, _dev);
    ia32_mtrr_fix4k_f8000_pr(_os, _dev);
    ia32_cr_pat_pr(_os, _dev);
    ia32_mperf_pr(_os, _dev);
    ia32_aperf_pr(_os, _dev);
    ia32_perf_ctl_pr(_os, _dev);
    ia32_perf_status_pr(_os, _dev);
    ia32_clock_modulation_pr(_os, _dev);
    ia32_therm_interrupt_pr(_os, _dev);
    ia32_therm_status_pr(_os, _dev);
    ia32_perfctr0_pr(_os, _dev);
    ia32_perfctr1_pr(_os, _dev);
    ia32_perfctr2_pr(_os, _dev);
    ia32_perfctr3_pr(_os, _dev);
    ia32_amd_perfevtsel0_pr(_os, _dev);
    ia32_amd_perfevtsel1_pr(_os, _dev);
    ia32_amd_perfevtsel2_pr(_os, _dev);
    ia32_amd_perfevtsel3_pr(_os, _dev);
    ia32_amd_hwcr_pr(_os, _dev);
    _os << ("End of dump of device ia32\n");
    _os << ("-------------------------\n");
    return(_os);
}

#undef __DN
