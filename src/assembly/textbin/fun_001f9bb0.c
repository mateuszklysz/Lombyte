/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9bb0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9bb0/FUN_001f9bb0.s", FUN_001f9bb0);
#else
#include "types.h"

s32 FUN_001f9bb0(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a1)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf3, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: vadd.w $vf4, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf5, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vmul.xyz $vf3, $vf3, $vf3  */
    /* m2c-unknown:  unknown instruction: vmul.w $vf4, $vf4, $vf4  */
    /* m2c-unknown:  unknown instruction: vaddax.y $acc, $vf3, $vf3x  */
    /* m2c-unknown:  unknown instruction: vmaddaz.y $acc, $vf5, $vf3z  */
    /* m2c-unknown:  unknown instruction: vmsubw.y $vf3, $vf5, $vf4w  */
    if (0 /*  unknown instruction: qmfc2.ni $v0, $vf3  */ < 0) {
        return 1;
    }
    return 0;
}
#endif /* NON_MATCHING */
