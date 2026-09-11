/*
STATE: C_NON_MATCHING
SYMBOL: FastDecTimer__FRi
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `FastDecTimer__FRi`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_dec_timer/FUN_001f9740.s", FUN_001f9740);
#else
#include "types.h"

s32 FUN_001f9740(s32 *arg0) {
    s32 temp_1_9;
    s32 var_2_6;

    var_2_6 = 1;
    if (*arg0 != 0) {
        temp_1_9 = 0 /*  unknown instruction: pmaxw $at, $at, $v0  */ - 1;
        var_2_6 = 0;
        *arg0 = temp_1_9;
        if (temp_1_9 <= 0) {
            var_2_6 = 2;
        }
    }
    return var_2_6;
}
#endif /* NON_MATCHING */
