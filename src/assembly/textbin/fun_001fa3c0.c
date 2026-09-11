/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa3c0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 8.7500%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa3c0/FUN_001fa3c0.s", FUN_001fa3c0);
#else
#include "types.h"

void FUN_001fa3c0(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf9, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vmul.w $vf3, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vmul.xyz $vf4, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vmulw.xyz $vf5, $vf2, $vf1w  */
    /* m2c-unknown:  unknown instruction: vmulw.xyz $vf6, $vf1, $vf2w  */
    /* m2c-unknown:  unknown instruction: vopmula.xyz $acc, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: vopmsub.xyz $vf7, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf4, $vf4y  */
    /* m2c-unknown:  unknown instruction: vmaddz.x $vf4, $vf9, $vf4z  */
    /* m2c-unknown:  unknown instruction: vadd.xyz $vf8, $vf5, $vf6  */
    /* m2c-unknown:  unknown instruction: vadd.xyz $vf8, $vf8, $vf7  */
    /* m2c-unknown:  unknown instruction: vsubx.w $vf8, $vf3, $vf4x  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf8, ($a0)  */
}
#endif /* NON_MATCHING */
