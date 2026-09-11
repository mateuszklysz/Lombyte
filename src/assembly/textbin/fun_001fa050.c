/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa050
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa050/FUN_001fa050.s", FUN_001fa050);
#else
#include "types.h"

void FUN_001fa050(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: vcallms 0xd18  */
    /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf20  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf20, ($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf21, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf22, 0x20($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf23, 0x30($a0)  */
}
#endif /* NON_MATCHING */
