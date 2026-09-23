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
extern s32 func_001FA6D0(f32);
extern s32 func_001FF960();
extern s32 func_001FFA10();
void FUN_00238310(u8 *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 sp10;
    s64 sp18;
    s32 sp20;
    s32 temp_16_74;
    s32 temp_16_98;
    s32 temp_17_64;
    s32 temp_17_90;
    s32 temp_18_34;
    s32 temp_3_47;
    s32 var_20_26;
    s32 var_23_16;
    s32 var_30_18;
    s32 var_5_33;
    u32 *temp_19_51;
    u32 temp_18_87;
    u32 temp_2_85;
    u8 *var_21_6;
    u8 temp_2_30;

    sp10 = arg1;
    var_21_6 = arg0;
    var_23_16 = arg2;
    var_30_18 = 0;
    var_20_26 = sp10;
    sp18 = func_001FFA10(func_001FF960(0xE935, 0));
loop_1:
    temp_2_30 = *var_21_6;
    var_5_33 = 0;
    if (temp_2_30 != 0) {
        temp_18_34 = temp_2_30 - 0x20;
        var_21_6 += 1;
        var_30_18 = ((temp_18_34 ^ 0x42) == 0) ? 1 : var_30_18;
        if (temp_18_34 == 0xEA) {
            var_20_26 = sp10;
            var_23_16 += 9;
        }
        if ((temp_18_34 < 0x3B) && ((temp_3_47 = temp_18_34 * 4, sp20 = temp_3_47, temp_19_51 = temp_3_47 + D_001E6018, (*temp_19_51 != -1U)) || (temp_18_34 == 0))) {
            if (var_30_18 != 0) {
                var_30_18 = 0;
                temp_17_64 = func_001F96F8(0x1E, 0);
    __asm__ volatile ("" : "+r" (temp_17_64));
                temp_16_74 = (s32) *(s32 *)0x15F438 % (s32) (temp_17_64 + func_001F96F8(0xA));
                var_5_33 = (temp_16_74 >= func_001F96F8(0xA)) ? 0 : 1;
            }
            if ((temp_18_34 != 0) && (var_5_33 == 0)) {
                temp_2_85 = *temp_19_51;
                temp_18_87 = temp_2_85 >> 0x14;
                temp_17_90 = (s32) (temp_2_85 & 0xFFFF) >> 4;
                if ((var_20_26 + 9) > 0) {
                    if (var_20_26 < 0x100) {
                        temp_16_98 = func_001FA6D0(func_001FA6C0(9, var_5_33) * fparg0);
                        func_001F5450(var_20_26, var_23_16, temp_16_98, func_001FA6D0(func_001FA6C0(9) * fparg0), temp_17_90, temp_18_87, 9, 9, (0x8040 << 0x10) | 0x4040, sp18);
                    }
                }
            }
            var_20_26 += func_001FA6D0(func_001FA6C0(*(sp20 + D_001E6118)) * fparg0);
        }
        goto loop_1;
    }
}
#endif /* NON_MATCHING */
