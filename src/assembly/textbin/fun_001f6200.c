/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f6200
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f6200/FUN_001f6200.s", FUN_001f6200);
#else
#include "types.h"

s32 FUN_001f6200(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_8_5;
    s32 var_9_12;
    s8 temp_4_17;
    u8 *var_7_10;
    u8 var_2_11;

    var_8_5 = 0;
    if (arg1 != 0) {
        var_7_10 = arg0;
        if (*arg0 != 0) {
            var_2_11 = *var_7_10;
            var_9_12 = 1;
loop_3:
            var_7_10 += 1;
            temp_4_17 = *(s32 *)((u8 *)((var_2_11 * 4) + arg2) + 0x3);
            var_8_5 = (temp_4_17 != 0) ? (var_8_5 + temp_4_17) : var_8_5;
            if (var_9_12 != arg1) {
                var_2_11 = *var_7_10;
                var_9_12 += 1;
                if (var_2_11 != 0) {
                    goto loop_3;
                }
            }
        }
    }
    return var_8_5;
}
#endif /* NON_MATCHING */
