/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00225c18
SCORE: code=64.2340 functions=64.2340 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225c18/FUN_00225c18.s", FUN_00225c18);
#else
#include "types.h"
extern u8 D_001D60B8[];
extern s32 FillTransferWords();
extern s32 func_00225D88();
s32 FUN_00225c18(s32 arg0) {
    s32 *temp_5_27;
    s32 *temp_8_7;
    s32 *var_16_10;
    s32 *var_7_11;
    s32 temp_3_28;
    s32 var_2_18;
    s32 var_6_9;

    temp_8_7 = D_001D60B8 + 4;
    var_6_9 = 0;
    var_16_10 = D_001D60B8;
    var_7_11 = temp_8_7;
loop_1:
    if (arg0 != 0) {
        var_2_18 = *var_7_11 ^ 1;
    } else {
        var_2_18 = *var_7_11;
    }
    if (!(var_2_18 & 1)) {
        temp_5_27 = temp_8_7 + (var_6_9 * 2);
        if (*var_16_10 != 0) {
            temp_3_28 = *temp_5_27;
            var_6_9 += 1;
            if (!(temp_3_28 & 2)) {
                *temp_5_27 = temp_3_28 | 2;
                FillTransferWords(*var_16_10, 0xDEADBEEF, func_00225D88(*var_16_10, temp_5_27, var_6_9, var_7_11, temp_8_7));
                return *var_16_10;
            }
            goto block_9;
        }
    }
    var_6_9 += 1;
block_9:
    var_16_10 += 2;
    var_7_11 += 2;
    if (var_6_9 >= 5) {
        return 0;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
