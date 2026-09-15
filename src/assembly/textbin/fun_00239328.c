/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 47.4931%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239328/FUN_00239328.s", FUN_00239328);
#else
#include "types.h"
extern u8 D_001E6620[];
extern u8 D_001E6640[];
extern s32 SubtractIntegerWithClamp();
extern s32 func_001F44B8();
extern s32 func_001F55D8(f32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
extern s32 func_001FA6C0();
extern s32 func_00213260();
extern s32 func_00233980();
void FUN_00239328(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 temp_16_164;
    f32 temp_f0_126;
    f32 temp_f0_147;
    f32 temp_f0_78;
    f32 temp_f20_166;
    f32 temp_f20_63;
    f32 temp_f21_58;
    s32 *temp_16_110;
    s32 *temp_19_131;
    s32 *temp_20_43;
    s32 *temp_5_29;
    s32 temp_16_142;
    s32 temp_16_146;
    s32 temp_16_66;
    s32 temp_4_132;
    s32 temp_4_30;
    s32 temp_5_141;
    s32 var_16_46;
    s32 var_21_34;
    s32 var_2_32;
    s32 var_3_26;
    s64 temp_16_70;

    func_00233980(0x47, 0x32003);
    var_3_26 = arg0 * 4;
    temp_5_29 = ((s32 *)D_001E6620 + arg0);
    temp_4_30 = *temp_5_29;
    var_2_32 = temp_4_30 + 2;
    if (temp_4_30 == 0) {
        var_21_34 = var_3_26;
        if (arg0 == 0) {
            var_2_32 = temp_4_30 + 2;
            if (*(s32 *)D_001E6620 != 0) {
                goto block_3;
            }
            goto block_4;
        }
    } else {
block_3:
        *temp_5_29 = var_2_32;
        var_3_26 = arg0 * 4;
block_4:
        temp_20_43 = var_3_26 + D_001E6620;
        var_21_34 = var_3_26;
        var_16_46 = *temp_20_43;
        if (arg0 == 0) {
            var_16_46 = (var_16_46 <= 0x17) ? 0x18 : var_16_46;
        }
        temp_f21_58 = (f32) func_00213260(0xC8, temp_5_29);
        temp_f20_63 = (f32) func_00213260(0xC8);
        temp_16_66 = 0x80 - SubtractIntegerWithClamp(var_16_46 - 0x80);
        func_00233980(8, 0);
        temp_16_70 = temp_16_66 * 2;
        func_00233980(0x42, (((temp_16_70 < 0x81) ? temp_16_70 : 0x80) << 0x20) | 0x68);
        temp_f0_78 = fparg0 + temp_f21_58;
        func_001F55D8(temp_f0_78, temp_f0_78, 0 /*  Read from unset register $f2  */, temp_f0_78, 0x808080, func_001F44B8(0x1A), 0, 0.0f, fparg0, fparg1);
        if (*temp_20_43 >= 0x100) {
            *temp_20_43 = 0;
        }
    }
    temp_16_110 = var_21_34 + D_001E6620;
    if ((*temp_16_110 == 0) && (func_00213260(0x2BC) == 0)) {
        *temp_16_110 = 2;
    }
    func_00233980(8, 0);
    temp_f0_126 = func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    if (arg0 > 0) {
        temp_19_131 = var_21_34 + D_001E6640;
        temp_4_132 = *temp_19_131;
        if (temp_4_132 != 0) {
            *temp_19_131 = temp_4_132 + 2;
            temp_5_141 = *temp_19_131;
            temp_16_142 = 0x100 - SubtractIntegerWithClamp(temp_4_132 - 0xFE);
            temp_16_146 = (temp_16_142 >= 0x51) ? 0x50 : temp_16_142;
            temp_f0_147 = func_001FA6C0(0x200 - temp_5_141, temp_5_141);
            temp_16_164 = temp_f0_147;
            temp_f20_166 = -(temp_f0_147 * 0.03125f);
            func_001F55D8(0.0f, 0.0f, temp_f0_126, temp_16_164, (temp_16_146 << 0x18) | 0x505050, func_001F44B8(0x1C), 0, temp_f20_166, fparg0, fparg1 + 16.0f);
            if (*temp_19_131 >= 0x200) {
                *temp_19_131 = 0;
            }
        } else if (func_00213260(0x168) == 0) {
            *temp_19_131 = 2;
        }
    }
    if (arg0 == 6) {
        func_001F55D8(0.0f, 0.0f, 9e-44f, 9e-44f, (0x8080 << 0x10) | 0x8080, func_001F44B8(0x19), 0, 0.0f, fparg0, fparg1);
    }
}
#endif /* NON_MATCHING */
