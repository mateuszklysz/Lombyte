/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001280a8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001280a8/FUN_001280a8.s", FUN_001280a8);
#else
#include "types.h"

void FUN_001280a8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_4_7;
    s32 temp_9_8;
    s32 var_2_19;
    s32 var_4_11;

    temp_4_7 = *arg0;
    temp_9_8 = 0x10 << arg1;
    var_4_11 = (arg4 != 0) ? (temp_4_7 >> 1) : temp_4_7;
    if (arg2 > 0) {
        var_4_11 = var_4_11 + 1 + (((arg2 - 1) << arg1) + arg3);
        var_2_19 = var_4_11 * 2;
        if (var_4_11 >= temp_9_8) {
            var_4_11 -= temp_9_8 * 2;
            goto block_6;
        }
    } else {
        var_2_19 = var_4_11 * 2;
        if (arg2 < 0) {
            var_4_11 = (var_4_11 - 1) - ((~arg2 << arg1) + arg3);
            if (var_4_11 < (0 - temp_9_8)) {
                var_4_11 += temp_9_8 * 2;
            }
block_6:
            var_2_19 = var_4_11 * 2;
        }
    }
    *arg0 = (arg4 == 0) ? var_4_11 : var_2_19;
}
#endif /* NON_MATCHING */
