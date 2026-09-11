/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00231bd8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231bd8/FUN_00231bd8.s", FUN_00231bd8);
#else
#include "rnc/assembly_textbin_fun_00231bd8_types.h"
#include "types.h"








extern u8 D_0013CDD0[];
extern struct M2c_D_0013D290 D_0013D290;
extern struct M2c_D_0013E500 D_0013E500;
extern s32 D_0015ED84;
extern s32 D_0015EE48;
extern s32 D_0015EE4A;
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00122298();
extern s32 func_0012F368();
extern s32 func_001F3868();
extern s32 func_001F3958();
extern s32 func_001F4A58();
extern s32 func_001F5450();
extern s32 func_001FA6C0();
extern s32 func_001FB3D0();
extern s32 func_00204428();
extern s32 func_00208840();
extern s32 func_002093D8();
extern s32 func_002316E8();
extern s32 func_00231878();
extern s32 func_002335D0();
extern s32 func_00233630();
extern s32 func_002336A0();
extern s32 func_002337B0();
extern s32 func_00233980();
void FUN_00231bd8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s64 sp10;
    s64 sp18;
    s64 sp20;
    s32 sp28;
    f32 temp_f0_112;
    f32 temp_f20_155;
    f32 temp_f21_153;
    s32 temp_3_241;
    s32 var_17_39;
    s32 var_18_80;
    s32 var_20_12;
    s32 var_22_11;
    s64 temp_21_174;
    struct M2c_temp_5_79 *temp_5_79;

    var_22_11 = arg4;
    var_20_12 = arg3;
    sp28 = arg1;
    func_00231878(&sp10, &sp18, &sp20);
    if (var_22_11 != 0) {
        func_0012F368(D_0015ED84);
        D_0015EE48 = 0;
        D_0015EE4A = 0;
    }
    var_17_39 = 0;
    func_00122298(0);
    func_002335D0();
    if ((var_20_12 > 0) && (D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
loop_6:
        func_001F3868();
        func_001FB3D0();
        func_00233980(1, 0x8000 << 0x10);
        func_00233980(8, 0);
        D_00160F00->unk8 = 0;
        temp_5_79 = D_00160F00;
        var_18_80 = (var_17_39 <= 0x1F) ? (var_17_39 * 4) : 0x80;
        temp_5_79->unk4 = D_0013CDD0;
        D_00160F00->unk0 = 0x30000014;
        D_00160F00->unkC = 0x50000014;
        D_00160F00 += 0x10;
        if ((var_20_12 - 0x10) < var_17_39) {
            var_18_80 = (var_20_12 - var_17_39) * 8;
        }
        temp_f0_112 = func_001FA6C0(var_17_39 % 600, temp_5_79, 0x50000014) * 0.0016666667f;
        if (sp28 == arg2) {
            func_002316E8(0, D_0013E500.unkC - 0x20, 0x200, 0x40, (var_18_80 << 0x18) | 0x808080, sp10, 0, 0x40800000, temp_f0_112 + 0.0f, temp_f0_112 + 0.4f);
            func_001F5450(0, D_0013E500.unkC - 0x20, 0x200, 0x40, 0, 0, 0x200, 0x40, (0x8080 << 0x10) | 0x8080, sp18);
        } else {
            temp_f21_153 = temp_f0_112 + 0.4f;
            temp_f20_155 = temp_f0_112 + 0.0f;
            func_002316E8(0, D_0013E500.unkC - 0x2E, 0x200, 0x40, (var_18_80 << 0x18) | 0x808080, sp10, 0, 0x40800000, temp_f20_155, temp_f21_153);
            temp_21_174 = (0x8080 << 0x10) | 0x8080;
            func_001F5450(0, D_0013E500.unkC - 0x2E, 0x200, 0x40, 0, 0, 0x200, 0x40, temp_21_174, sp18);
            if (var_17_39 >= 0x41) {
                if (var_17_39 < 0x60) {
                    var_18_80 = (var_17_39 - 0x40) * 4;
                }
                func_002316E8(0, D_0013E500.unkC, 0x200, 0x40, (var_18_80 << 0x18) | 0x808080, sp10, 0, 0x40800000, temp_f20_155, temp_f21_153);
                func_001F5450(0, D_0013E500.unkC, 0x200, 0x40, 0, 0, 0x200, 0x40, temp_21_174, sp20);
            }
        }
        func_002093D8();
        func_00208840();
        func_002337B0(1);
        func_00122298(0);
        func_001F3958();
        func_002336A0();
        func_00233630();
        if (var_22_11 != 0) {
            if (func_00204428() != 0) {
                var_22_11 = 0;
            } else {
                temp_3_241 = var_17_39 + 0x14;
                var_20_12 = (var_20_12 < temp_3_241) ? temp_3_241 : var_20_12;
            }
        }
        var_17_39 += 1;
        if ((var_17_39 < var_20_12) && (D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
            goto loop_6;
        }
    }
    func_001F4A58(2);
}
#endif /* NON_MATCHING */
