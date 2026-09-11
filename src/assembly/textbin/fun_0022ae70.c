/*
STATE: C_NON_MATCHING
SYMBOL: SkyLevelGeneric___maybe
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `SkyLevelGeneric___maybe` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 26.3218%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022ae70/FUN_0022ae70.s", FUN_0022ae70);
#else
#include "rnc/assembly_textbin_fun_0022ae70_types.h"
#include "types.h"










extern struct M2c_D_0016045C *D_0016045C;
extern u8 D_001D96E0[];
extern s32 func_001160C8();
extern s32 func_001160D8();
extern s32 func_001F99C0();
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
extern s32 func_001F9FC8();
extern s32 func_001FA580();
extern s32 func_001FA6C0();
extern s32 func_00213260();
extern s32 func_00213308();
extern s32 func_0022B690();
extern s32 func_0022BBA0();
extern s32 func_00233980();
void FUN_0022ae70(void) {
    f32 temp_f20_109;
    f32 temp_f20_117;
    f32 temp_f20_193;
    f32 temp_f20_201;
    f32 temp_f21_108;
    f32 temp_f21_190;
    f32 temp_f22_186;
    f32 temp_f22_98;
    s16 temp_16_131;
    s16 temp_2_73;
    s16 var_2_31;
    s32 temp_18_133;
    s32 temp_2_228;
    s32 var_18_161;
    s32 var_19_37;
    s32 var_2_140;
    s32 var_2_167;
    s32 var_2_218;
    s32 var_2_49;
    u8 temp_4_172;
    u8 temp_4_52;
    struct M2c_temp_16_174 *temp_16_174;
    struct M2c_temp_17_171 *temp_17_171;
    struct M2c_temp_17_55 *temp_17_55;
    struct M2c_temp_3_30 *temp_3_30;

    D_0016045C->unk4 = 0;
    func_001F9FC8(D_001D96E0);
    func_0022B690(0);
    func_0022B690(1);
    temp_3_30 = D_0016045C;
    var_2_31 = temp_3_30->unk8;
    if (var_2_31 == 0) {
        temp_3_30->unk8 = 0x100;
        var_19_37 = 0;
        func_001160C8(0x3039);
        if (D_0016045C->unk8 > 0) {
            var_2_49 = D_0016045C->unk1C;
loop_3:
            temp_4_52 = var_19_37 < 0xF6;
            temp_17_55 = var_2_49 + (var_19_37 << 5);
            if (temp_4_52 == 0) {
                temp_17_55->unk0 = 0;
                temp_17_55->unkC = (s16) (func_001160D8(temp_4_52) >> 0x10);
                *(s32 *)((u8 *)(((u8 *)temp_17_55 + (0xC))) + 0x2) = (s16) (func_001160D8() >> 0x10);
                temp_17_55->unk1C = 0.16f;
                temp_17_55->unk2 = 1;
                temp_17_55->unk3 = 0x48;
            } else {
                temp_17_55->unk0 = 1;
                temp_2_73 = func_00213260(0x100);
                temp_17_55->unk2 = 1;
                temp_17_55->unk3 = 0x48;
                temp_17_55->unkC = temp_2_73;
                temp_17_55->unk8 = func_00213308();
                temp_17_55->unk1C = (f32) (func_001FA6C0(func_00213260(0x18) + 0x20) * 0.00390625f);
                temp_f22_98 = func_001FA580(0xC0400000, func_00213308() * 0.2f);
                temp_f21_108 = (func_00213308() * 0.09f) + 1.2f;
                temp_f20_109 = func_001F9DC8(temp_f22_98);
                temp_17_55->unk10 = (f32) (temp_f20_109 * func_001F9DE0(temp_f21_108) * 50.0f);
                temp_f20_117 = func_001F9DE0(temp_f22_98);
                temp_17_55->unk14 = (f32) (temp_f20_117 * func_001F9DE0(temp_f21_108) * 50.0f);
                temp_17_55->unk18 = (f32) (func_001F9DC8(temp_f21_108) * 50.0f);
                temp_16_131 = func_00213260(0x18);
                temp_18_133 = func_00213260(0x20) << 0x18;
                if ((func_001160D8() >> 0x10) & 1) {
                    var_2_140 = temp_18_133 + ((temp_16_131 << 0x10) + 0x30505050);
                } else {
                    var_2_140 = (temp_18_133 + ((temp_16_131 << 8) + 0x30505050)) | temp_16_131;
                }
                temp_17_55->unkC = var_2_140;
            }
            var_19_37 += 1;
            if (var_19_37 < D_0016045C->unk8) {
                var_2_49 = D_0016045C->unk1C;
                goto loop_3;
            }
            var_2_31 = D_0016045C->unk8;
            goto block_13;
        }
    } else {
block_13:
        var_18_161 = 0;
        if (var_2_31 > 0) {
            var_2_167 = temp_3_30->unk1C;
loop_15:
            temp_17_171 = var_2_167 + (var_18_161 << 5);
            temp_4_172 = temp_17_171->unk0;
            temp_16_174 = ((u8 *)temp_17_171 + (0xC));
            if (temp_4_172 == 0) {
                temp_17_171->unkC = (u16) (temp_17_171->unkC + 1);
                temp_16_174->unk2 = (u16) (temp_16_174->unk2 + 1);
                temp_f22_186 = func_001FA6C0((temp_17_171->unkC & 0xFFF) - 0x800) * 0.0015339808f;
                temp_f21_190 = func_001FA6C0((temp_16_174->unk2 & 0xFFF) - 0x800) * 0.0015339808f;
                temp_f20_193 = func_001F9DC8(temp_f22_186);
                temp_17_171->unk10 = (f32) (temp_f20_193 * func_001F9DE0(temp_f21_190) * 50.0f);
                temp_f20_201 = func_001F9DE0(temp_f22_186);
                temp_17_171->unk14 = (f32) (temp_f20_201 * func_001F9DE0(temp_f21_190) * 50.0f);
                temp_17_171->unk18 = (f32) (func_001F99C0(func_001F9DC8(temp_f21_190)) * 50.0f);
                if ((u32) (temp_17_171->unkC & 0x3F) < 8U) {
                    var_2_218 = 0x70200000;
                } else {
                    var_2_218 = 0x20200000;
                }
                temp_17_171->unk4 = (s32) (var_2_218 | 0x20F0);
            } else {
                temp_2_228 = func_001160D8(temp_4_172) >> 0x10;
                temp_17_171->unk4 = (s32) ((s32) temp_17_171->unkC + (((temp_2_228 & 0x1F00) << 0xA) + 0xFFDFDFE0) + ((temp_2_228 & 0x1F0) << 6) + ((temp_2_228 & 0x1F) * 4));
            }
            var_18_161 += 1;
            if (var_18_161 < D_0016045C->unk8) {
                var_2_167 = D_0016045C->unk1C;
                goto loop_15;
            }
        }
    }
    func_0022BBA0();
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    func_0022B690(2);
    func_0022B690(3);
}
#endif /* NON_MATCHING */
