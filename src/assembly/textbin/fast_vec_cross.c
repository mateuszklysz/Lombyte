/*
STATE: C_NON_MATCHING
SYMBOL: FastVecCross
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `FastVecCross`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_vec_cross/FUN_001f9ad8.s", FUN_001f9ad8);
#else
#include "types.h"

void FUN_001f9ad8(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vopmula.xyz $acc, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vopmsub.xyz $vf3, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf3, ($a0)  */
}
#endif /* NON_MATCHING */
