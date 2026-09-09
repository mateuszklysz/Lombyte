/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.9362%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225c18/FUN_00225c18.s", FUN_00225c18);
#else
#include "types.h"
extern u8 D_001D60B8[];
extern s32 func_001F97E8();
extern s32 func_00225D88();
s32 FUN_00225c18(s32 arg0) {
    s32 *temp_5_29;
    s32 *temp_8_9;
    s32 *var_16_12;
    s32 *var_7_13;
    s32 temp_3_30;
    s32 var_2_20;
    s32 var_6_11;

    temp_8_9 = D_001D60B8 + 4;
    var_6_11 = 0;
    var_16_12 = D_001D60B8;
    var_7_13 = temp_8_9;
loop_1:
    if (arg0 != 0) {
        var_2_20 = *var_7_13 ^ 1;
    } else {
        var_2_20 = *var_7_13;
    }
    if (!(var_2_20 & 1)) {
        temp_5_29 = (var_6_11 * 8) + temp_8_9;
        if (*var_16_12 != 0) {
            temp_3_30 = *temp_5_29;
            var_6_11 += 1;
            if (!(temp_3_30 & 2)) {
                *temp_5_29 = temp_3_30 | 2;
                func_001F97E8(*var_16_12, 0xDEADBEEF, func_00225D88(*var_16_12, temp_5_29, var_6_11, var_7_13, temp_8_9));
                return *var_16_12;
            }
            goto block_9;
        }
    }
    var_6_11 += 1;
block_9:
    var_16_12 += 8;
    var_7_13 += 8;
    if (var_6_11 >= 5) {
        return 0;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
