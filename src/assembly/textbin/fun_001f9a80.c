/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9a80
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9a80/FUN_001f9a80.s", FUN_001f9a80);
#else
#include "types.h"

void FUN_001f9a80(s32 arg0, s32 arg1, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
