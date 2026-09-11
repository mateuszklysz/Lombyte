/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9c48
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9c48/FUN_001f9c48.s", FUN_001f9c48);
#else
#include "types.h"

void FUN_001f9c48(s32 arg0, s32 arg1, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: vmul.xy $vf2, $vf1, $vf1  */
    /* m2c-unknown:  unknown instruction: vaddy.x $vf2, $vf2, $vf2y  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf3  */
    /* m2c-unknown:  unknown instruction: vrsqrt $q, $vf3x, $vf2x  */
    if ((0 /*  unknown instruction: qmfc2.ni $at, $vf2  */ << 0x20) != 0) {
        /* m2c-unknown:  unknown instruction: vwaitq  */
        /* m2c-unknown:  unknown instruction: vmulq.xy $vf1, $vf1, $q  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
        return;
    }
    /* m2c-unknown:  unknown instruction: vadd.xy $vf1, $vf0, $vf0  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
