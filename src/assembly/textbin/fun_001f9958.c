/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9958
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9958/FUN_001f9958.s", FUN_001f9958);
#else
#include "types.h"

s32 FUN_001f9958(s32 arg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    return 0 /*  unknown instruction: cfc2.ni $v0, $vi18  */ & 0x3F;
}
#endif /* NON_MATCHING */
