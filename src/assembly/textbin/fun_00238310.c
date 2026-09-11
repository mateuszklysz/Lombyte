/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00238310
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 52.7652%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00238310/FUN_00238310.s", FUN_00238310);
#else
#include "types.h"
extern s32 D_0015F438;
extern u8 D_001E6018[];
extern u8 D_001E6118[];
extern s32 func_001F5450();
extern s32 func_001F96F8();
extern s32 func_001FA6C0();
extern s32 func_001FA6D0();
extern s32 func_001FF960();
extern s32 func_001FFA10();
void FUN_00238310(u8 *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 sp10;
    s64 sp18;
    s32 sp20;
    s32 temp_16_100;
    s32 temp_16_76;
    s32 temp_17_66;
    s32 temp_17_92;
    s32 temp_18_36;
    s32 temp_3_49;
    s32 var_20_28;
    s32 var_23_18;
    s32 var_30_20;
    s32 var_5_35;
    u32 *temp_19_53;
    u32 temp_18_89;
    u32 temp_2_87;
    u8 *var_21_8;
    u8 temp_2_32;

    sp10 = arg1;
    var_21_8 = arg0;
    var_23_18 = arg2;
    var_30_20 = 0;
    var_20_28 = sp10;
    sp18 = func_001FFA10(func_001FF960(0xE935, 0));
loop_1:
    temp_2_32 = *var_21_8;
    var_5_35 = 0;
    if (temp_2_32 != 0) {
        temp_18_36 = temp_2_32 - 0x20;
        var_21_8 += 1;
        var_30_20 = ((temp_18_36 ^ 0x42) == 0) ? 1 : var_30_20;
        if (temp_18_36 == 0xEA) {
            var_20_28 = sp10;
            var_23_18 += 9;
        }
        if ((temp_18_36 < 0x3B) && ((temp_3_49 = temp_18_36 * 4, sp20 = temp_3_49, temp_19_53 = temp_3_49 + D_001E6018, (*temp_19_53 != -1U)) || (temp_18_36 == 0))) {
            if (var_30_20 != 0) {
                var_30_20 = 0;
                temp_17_66 = func_001F96F8(0x1E, 0);
                temp_16_76 = (s32) D_0015F438 % (s32) (temp_17_66 + func_001F96F8(0xA));
                var_5_35 = (temp_16_76 >= func_001F96F8(0xA)) ? 0 : 1;
            }
            if ((temp_18_36 != 0) && (var_5_35 == 0)) {
                temp_2_87 = *temp_19_53;
                temp_18_89 = temp_2_87 >> 0x14;
                temp_17_92 = (s32) (temp_2_87 & 0xFFFF) >> 4;
                if ((var_20_28 + 9) > 0) {
                    if (var_20_28 < 0x100) {
                        temp_16_100 = func_001FA6D0(func_001FA6C0(9, var_5_35) * fparg0);
                        func_001F5450(var_20_28, var_23_18, temp_16_100, func_001FA6D0(func_001FA6C0(9) * fparg0), temp_17_92, temp_18_89, 9, 9, (0x8040 << 0x10) | 0x4040, sp18);
                    }
                }
            }
            var_20_28 += func_001FA6D0(func_001FA6C0(*(sp20 + D_001E6118)) * fparg0);
        }
        goto loop_1;
    }
}
#endif /* NON_MATCHING */
