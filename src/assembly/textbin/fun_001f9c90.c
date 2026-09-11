/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9c90
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 5.3846%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9c90/FUN_001f9c90.s", FUN_001f9c90);
#else
#include "types.h"

s32 FUN_001f9c90(s32 arg0, s32 arg1, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf3, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vmul.xyz $vf2, $vf1, $vf1  */
    /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf2, $vf2y  */
    /* m2c-unknown:  unknown instruction: vmaddz.x $vf2, $vf3, $vf2z  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf3  */
    /* m2c-unknown:  unknown instruction: vwaitq  */
    /* m2c-unknown:  unknown instruction: vaddq.x $vf2, $vf0, $q  */
    /* m2c-unknown:  unknown instruction: vsubq.x $vf4, $vf3, $q  */
    if ((0 /*  unknown instruction: qmfc2.ni $at, $vf2  */ != 0) && ((0 /*  unknown instruction: qmfc2.ni $v0, $vf4  */ << 0x20) <= 0)) {
        /* m2c-unknown:  unknown instruction: vdiv $q, $vf3x, $vf2x  */
        /* m2c-unknown:  unknown instruction: vwaitq  */
        /* m2c-unknown:  unknown instruction: vmulq.xyz $vf1, $vf1, $q  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
        return 1;
    }
    return 0;
}
#endif /* NON_MATCHING */
