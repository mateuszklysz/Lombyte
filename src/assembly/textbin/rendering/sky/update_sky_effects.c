#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/sky/update_sky_effects/FUN_0022ae70.s", FUN_0022ae70);
#else
#include "types.h"
struct M2c_D_0016045C {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
    u8 pad_C[0x10];
    s32 unk1C;
};

struct M2c_temp_16_172 {
    u8 pad_0[0x2];
    u16 unk2;
};

struct M2c_temp_17_169 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x4];
    u16 unkC;
    u8 pad_E[0x2];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct M2c_temp_17_53 {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    u8 pad_4[0x4];
    s32 unk8;
    s16 unkC;
    u8 pad_E[0x2];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct M2c_temp_3_28 {
    u8 pad_0[0x8];
    s32 unk8;
    u8 pad_C[0x10];
    s32 unk1C;
};

extern struct M2c_D_0016045C *D_0016045C[];
extern u8 D_001D96E0[];
extern s32 func_001160C8();
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
extern s32 rand();
void update_sky_effects(void) __asm__("FUN_0022ae70");

void update_sky_effects(void) {
    f32 temp_f20_107;
    f32 temp_f20_115;
    f32 temp_f20_191;
    f32 temp_f20_199;
    f32 temp_f21_106;
    f32 temp_f21_188;
    f32 temp_f22_184;
    f32 temp_f22_96;
    s16 temp_16_129;
    s16 temp_2_71;
    s16 var_2_29;
    s32 temp_18_131;
    s32 temp_2_226;
    s32 var_18_159;
    s32 var_19_35;
    s32 var_2_138;
    s32 var_2_165;
    s32 var_2_216;
    s32 var_2_47;
    u8 temp_4_170;
    u8 temp_4_50;
    struct M2c_temp_16_172 *temp_16_172;
    struct M2c_temp_17_169 *temp_17_169;
    struct M2c_temp_17_53 *temp_17_53;
    struct M2c_temp_3_28 *temp_3_28;

    D_0016045C[0]->unk4 = 0;
    func_001F9FC8(D_001D96E0);
    func_0022B690(0);
    func_0022B690(1);
    temp_3_28 = D_0016045C[0];
    var_2_29 = temp_3_28->unk8;
    if (var_2_29 == 0) {
        temp_3_28->unk8 = 0x100;
        var_19_35 = 0;
        func_001160C8(0x3039);
        if (D_0016045C[0]->unk8 > 0) {
            var_2_47 = D_0016045C[0]->unk1C;
loop_3:
            temp_4_50 = var_19_35 < 0xF6;
            temp_17_53 = var_2_47 + (var_19_35 << 5);
            if (temp_4_50 == 0) {
                temp_17_53->unk0 = 0;
                temp_17_53->unkC = (s16) (rand(temp_4_50) >> 0x10);
                *(s32 *)((u8 *)(((u8 *)temp_17_53 + (0xC))) + 0x2) = (s16) (rand() >> 0x10);
                temp_17_53->unk1C = 0.16f;
                temp_17_53->unk2 = 1;
                temp_17_53->unk3 = 0x48;
            } else {
                temp_17_53->unk0 = 1;
                temp_2_71 = func_00213260(0x100);
                temp_17_53->unk2 = 1;
                temp_17_53->unk3 = 0x48;
                temp_17_53->unkC = temp_2_71;
                temp_17_53->unk8 = func_00213308();
                temp_17_53->unk1C = (f32) (func_001FA6C0(func_00213260(0x18) + 0x20) * 0.00390625f);
                temp_f22_96 = func_001FA580(0xC0400000, func_00213308() * 0.2f);
    __asm__ volatile ("" : "+r" (temp_f22_96));
                temp_f21_106 = (func_00213308() * 0.09f) + 1.2f;
                temp_f20_107 = func_001F9DC8(temp_f22_96);
                temp_17_53->unk10 = (f32) (temp_f20_107 * func_001F9DE0(temp_f21_106) * 50.0f);
                temp_f20_115 = func_001F9DE0(temp_f22_96);
                temp_17_53->unk14 = (f32) (temp_f20_115 * func_001F9DE0(temp_f21_106) * 50.0f);
                temp_17_53->unk18 = (f32) (func_001F9DC8(temp_f21_106) * 50.0f);
                temp_16_129 = func_00213260(0x18);
                temp_18_131 = func_00213260(0x20) << 0x18;
                if ((rand() >> 0x10) & 1) {
                    var_2_138 = temp_18_131 + ((temp_16_129 << 0x10) + 0x30505050);
                } else {
                    var_2_138 = (temp_18_131 + ((temp_16_129 << 8) + 0x30505050)) | temp_16_129;
                }
                temp_17_53->unkC = var_2_138;
            }
            var_19_35 += 1;
            if (var_19_35 < D_0016045C[0]->unk8) {
                var_2_47 = D_0016045C[0]->unk1C;
                goto loop_3;
            }
            var_2_29 = D_0016045C[0]->unk8;
            goto block_13;
        }
    } else {
block_13:
        var_18_159 = 0;
        if (var_2_29 > 0) {
            var_2_165 = temp_3_28->unk1C;
loop_15:
            temp_17_169 = var_2_165 + (var_18_159 << 5);
            temp_4_170 = temp_17_169->unk0;
            temp_16_172 = ((u8 *)temp_17_169 + (0xC));
            if (temp_4_170 == 0) {
                temp_17_169->unkC = (u16) (temp_17_169->unkC + 1);
                temp_16_172->unk2 = (u16) (temp_16_172->unk2 + 1);
                temp_f22_184 = func_001FA6C0((temp_17_169->unkC & 0xFFF) - 0x800) * 0.0015339808f;
                temp_f21_188 = func_001FA6C0((temp_16_172->unk2 & 0xFFF) - 0x800) * 0.0015339808f;
                temp_f20_191 = func_001F9DC8(temp_f22_184);
                temp_17_169->unk10 = (f32) (temp_f20_191 * func_001F9DE0(temp_f21_188) * 50.0f);
                temp_f20_199 = func_001F9DE0(temp_f22_184);
                temp_17_169->unk14 = (f32) (temp_f20_199 * func_001F9DE0(temp_f21_188) * 50.0f);
                temp_17_169->unk18 = (f32) (func_001F99C0(func_001F9DC8(temp_f21_188)) * 50.0f);
                if ((u32) (temp_17_169->unkC & 0x3F) < 8U) {
                    var_2_216 = 0x70200000;
                } else {
                    var_2_216 = 0x20200000;
                }
                temp_17_169->unk4 = (s32) (var_2_216 | 0x20F0);
            } else {
                temp_2_226 = rand(temp_4_170) >> 0x10;
                temp_17_169->unk4 = (s32) ((s32) temp_17_169->unkC + (((temp_2_226 & 0x1F00) << 0xA) + 0xFFDFDFE0) + ((temp_2_226 & 0x1F0) << 6) + ((temp_2_226 & 0x1F) * 4));
            }
            var_18_159 += 1;
            if (var_18_159 < D_0016045C[0]->unk8) {
                var_2_165 = D_0016045C[0]->unk1C;
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
