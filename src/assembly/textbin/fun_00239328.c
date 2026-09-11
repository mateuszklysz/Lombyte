/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00239328
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 36.1843%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
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
extern s32 func_001F44B8();
extern s32 func_001F55D8();
extern s32 func_001F99A8();
extern s32 func_001FA6C0();
extern s32 func_00213260();
extern s32 func_00233980();
void FUN_00239328(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 temp_16_166;
    f32 temp_f0_128;
    f32 temp_f0_149;
    f32 temp_f0_80;
    f32 temp_f20_168;
    f32 temp_f20_65;
    f32 temp_f21_60;
    s32 *temp_16_112;
    s32 *temp_19_133;
    s32 *temp_20_45;
    s32 *temp_5_31;
    s32 temp_16_144;
    s32 temp_16_148;
    s32 temp_16_68;
    s32 temp_4_134;
    s32 temp_4_32;
    s32 temp_5_143;
    s32 var_16_48;
    s32 var_21_36;
    s32 var_2_34;
    s32 var_3_28;
    s64 temp_16_72;

    func_00233980(0x47, 0x32003);
    var_3_28 = arg0 * 4;
    temp_5_31 = ((s32 *)D_001E6620 + arg0);
    temp_4_32 = *temp_5_31;
    var_2_34 = temp_4_32 + 2;
    if (temp_4_32 == 0) {
        var_21_36 = var_3_28;
        if (arg0 == 0) {
            var_2_34 = temp_4_32 + 2;
            if (*(s32 *)D_001E6620 != 0) {
                goto block_3;
            }
            goto block_4;
        }
    } else {
block_3:
        *temp_5_31 = var_2_34;
        var_3_28 = arg0 * 4;
block_4:
        temp_20_45 = var_3_28 + D_001E6620;
        var_21_36 = var_3_28;
        var_16_48 = *temp_20_45;
        if (arg0 == 0) {
            var_16_48 = (var_16_48 <= 0x17) ? 0x18 : var_16_48;
        }
        temp_f21_60 = (f32) func_00213260(0xC8, temp_5_31);
        temp_f20_65 = (f32) func_00213260(0xC8);
        temp_16_68 = 0x80 - func_001F99A8(var_16_48 - 0x80);
        func_00233980(8, 0);
        temp_16_72 = temp_16_68 * 2;
        func_00233980(0x42, (((temp_16_72 < 0x81) ? temp_16_72 : 0x80) << 0x20) | 0x68);
        temp_f0_80 = fparg0 + temp_f21_60;
        func_001F55D8(temp_f0_80, temp_f0_80, 0 /*  Read from unset register $f2  */, temp_f0_80, 0x808080, func_001F44B8(0x1A), 0, 0.0f, fparg0, fparg1);
        if (*temp_20_45 >= 0x100) {
            *temp_20_45 = 0;
        }
    }
    temp_16_112 = var_21_36 + D_001E6620;
    if ((*temp_16_112 == 0) && (func_00213260(0x2BC) == 0)) {
        *temp_16_112 = 2;
    }
    func_00233980(8, 0);
    temp_f0_128 = func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    if (arg0 > 0) {
        temp_19_133 = var_21_36 + D_001E6640;
        temp_4_134 = *temp_19_133;
        if (temp_4_134 != 0) {
            *temp_19_133 = temp_4_134 + 2;
            temp_5_143 = *temp_19_133;
            temp_16_144 = 0x100 - func_001F99A8(temp_4_134 - 0xFE);
            temp_16_148 = (temp_16_144 >= 0x51) ? 0x50 : temp_16_144;
            temp_f0_149 = func_001FA6C0(0x200 - temp_5_143, temp_5_143);
            temp_16_166 = temp_f0_149;
            temp_f20_168 = -(temp_f0_149 * 0.03125f);
            func_001F55D8(0.0f, 0.0f, temp_f0_128, temp_16_166, (temp_16_148 << 0x18) | 0x505050, func_001F44B8(0x1C), 0, temp_f20_168, fparg0, fparg1 + 16.0f);
            if (*temp_19_133 >= 0x200) {
                *temp_19_133 = 0;
            }
        } else if (func_00213260(0x168) == 0) {
            *temp_19_133 = 2;
        }
    }
    if (arg0 == 6) {
        func_001F55D8(0.0f, 0.0f, 9e-44f, 9e-44f, (0x8080 << 0x10) | 0x8080, func_001F44B8(0x19), 0, 0.0f, fparg0, fparg1);
    }
}
#endif /* NON_MATCHING */
