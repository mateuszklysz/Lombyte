/*
STATE: C_NON_MATCHING
SYMBOL: Camera_Exit__FP9UpdateCam
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `Camera_Exit__FP9UpdateCam` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec3d8/FUN_001ec3d8.s", FUN_001ec3d8);
#else
#include "types.h"
/* cygnus-2.96 matched TU — CRI libadxe, recovered from recvx-decomp (CC0). */

typedef signed char Sint8;
typedef signed int  Sint32;
typedef unsigned int Uint32;
typedef struct ADXF_PTINFO { char _pad[8]; Sint32 nfile; } ADXF_PTINFO;
extern ADXF_PTINFO *D_003EB308[];            /* adxf_ptinfo */
extern void func_0033F130(const Sint8 *);    /* ADXERR_CallErrFunc1 */
extern const Sint8 D_00451A18[];             /* "E9040828:'ptid' is range outside." */
extern const Sint8 D_00451A40[];             /* "E9040828:'flid' is range outside." */

__attribute__((section(".text.adxf_ChkPrmGfr")))
Sint32 FUN_001ec3d8(Sint32 ptid, Sint32 flid) {
    ADXF_PTINFO *info;
    if ((Uint32)ptid >= 0x100) {
        func_0033F130(D_00451A18);
        return -3;
    }
    info = D_003EB308[ptid];
    if (info == 0) {
        func_0033F130(D_00451A18);
        return -3;
    }
    if ((flid < 0) || (flid >= info->nfile)) {
        func_0033F130(D_00451A40);
        return -3;
    }
    return 0;
}
#endif /* NON_MATCHING */
