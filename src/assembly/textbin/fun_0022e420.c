#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022e420/FUN_0022e420.s", FUN_0022e420);
#else
#include "types.h"
struct M2c_D_0013E030 {
    u8 pad_0[0x20];
    s32 unk20;
    u8 pad_24[0x2];
    s16 unk26;
    u8 pad_28[0x28];
    s32 unk50;
    s32 unk54;
};

struct M2c_var_3_44 {
    s32 unk0;
    s32 unk4;
};

extern struct M2c_D_0013E030 D_0013E030;
extern u8 D_0013E0F0[];
extern u8 D_0013E2F0[];
extern s32 D_0015F604;
extern u8 D_001604D0[];
extern u8 D_001D9A10[];
extern u8 D_001D9A30[];
extern u8 D_001D9A34[];
extern s32 func_001F44B8();
extern void func_001F7D30();
extern void func_001F9A10();
extern void func_001F9A28();
extern void func_001F9AD8();
extern s32 func_001F9BF8(s32, s32, f32);
extern f32 func_001FA6C0();
extern s32 func_001FA6E0(s32, s32, f32);
extern void sp50();
extern void sp54();
void FUN_0022e420(void) {
u8 sp_slot[0x210];    s32 sp40;
    f32 sp50;
    f32 sp54;
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 spA0;
    s64 spB0;
    s64 spC0;
    s64 spD0;
    s64 spE0;
    s64 spF0;
    s64 sp100;
    s32 *sp110;
    s32 *sp114;
    s32 *sp118;
    s32 *sp11C;
    s32 *sp120;
    s64 *sp124;
    s64 *sp128;
    s64 *sp12C;
    s32 sp130;
    s64 *sp134;
    s32 sp138;
    s64 *sp13C;
    s32 sp140;
    s32 *sp144;
    s64 *sp148;
    struct M2c_var_3_44 *var_3_44;
    s32 var_4_28;
    f32 *var_2_47;
    f32 *var_4_46;
    f32 temp_f0_250;
    f32 temp_f1_52;
    f32 temp_f20_190;
    s64 *temp_5_203;
    s64 *temp_5_255;
    s64 *var_18_240;
    s64 *var_20_175;
    s32 *var_18_176;
    s32 temp_16_118;
    s32 temp_16_180;
    s32 temp_16_245;
    s32 temp_22_92;
    s32 temp_2_191;
    s32 temp_3_97;
    s32 temp_4_105;
    s32 temp_4_181;
    s32 temp_4_246;
    s32 var_18_85;
    s32 var_19_159;
    s32 var_19_241;
    s32 var_21_63;
    s32 var_5_48;
    s32 *temp_17_125;
    s32 *var_17_177;
    s32 *var_17_242;

    if ((D_0015F604 == 6) && (D_0013E030.unk20 == 4)) {
        var_4_28 = 0;
    } else {
        var_4_28 = 0x13;
    }
    sp78 = func_001F44B8(var_4_28);
    sp80 = (0xFF90 << 0x20) | 0x260;
    sp88 = (0x8000 << 0x18) | 0x48;
    var_3_44 = D_001D9A10;
    sp70 = 0;
    var_4_46 = &sp54;
    var_2_47 = &sp50;
    var_5_48 = 3;
    do {
        var_5_48 -= 1;
        temp_f1_52 = var_3_44->unk4;
        *var_2_47 = var_3_44->unk0;
        var_3_44 += 8;
        *var_4_46 = temp_f1_52;
        var_2_47 += 8;
        var_4_46 += 8;
    } while (var_5_48 >= 0);
    var_21_63 = 0;
    if ((D_0013E030.unk54 - 1) > 0) {
        sp12C = &sp90;
        sp134 = &spA0;
        sp13C = &spB0;
        sp148 = &spC0;
        sp124 = &spD0;
        sp128 = &spF0;
        sp144 = &sp40;
        do {
            var_18_85 = 0;
            sp130 = var_21_63 + 1;
            temp_22_92 = ((D_0013E030.unk50 - var_21_63) + 0x1F) & 0x1F;
            temp_3_97 = ((temp_22_92 + 1) & 0x1F) * 0x10;
            sp11C = temp_3_97 + D_0013E0F0;
            sp120 = (((temp_22_92 + 2) & 0x1F) * 0x10) + D_0013E0F0;
            temp_4_105 = temp_22_92 * 0x10;
            sp118 = temp_3_97 + D_0013E2F0;
            sp114 = temp_4_105 + D_0013E0F0;
            sp110 = temp_4_105 + D_0013E2F0;
loop_9:
            temp_16_118 = var_18_85 << 9;
            func_001F9A28(sp12C, sp110, sp114);
            temp_17_125 = temp_16_118 + sp11C;
            sp140 = temp_16_118;
            func_001F9A28(sp134, sp114, sp110);
            func_001F9A28(sp13C, sp118, sp11C);
            func_001F9A28(sp148, sp11C, sp118);
            func_001F9A28(&spE0, temp_17_125, temp_16_118 + sp114);
            func_001F9A28(&sp100, temp_16_118 + sp120, temp_17_125);
            if (var_21_63 == 0) {
                sp100 = spE0;
            }
            var_19_159 = 0;
            func_001F9AD8(sp124, sp12C, &spE0);
            func_001F9AD8(&spE0, sp134, &spE0);
            sp138 = var_18_85 + 1;
            func_001F9AD8(sp128, sp13C, &sp100);
            var_20_175 = sp124;
            func_001F9AD8(&sp100, sp148, &sp100);
            var_18_176 = sp144;
            var_17_177 = sp_slot;
loop_12:
            temp_16_180 = var_19_159 >> 1;
            temp_4_181 = temp_16_180 - 1;
            var_19_159 += 1;
            temp_f20_190 = func_001FA6C0(var_21_63 - temp_4_181) * 0.03125f;
    __asm__ volatile ("" : "+f" (temp_f20_190));
            temp_2_191 = D_0013E030.unk26 * 8;
            temp_5_203 = var_20_175;
            var_20_175 += 0x10;
            *var_18_176 = func_001FA6E0(*(temp_2_191 + D_001D9A30), *(temp_2_191 + D_001D9A34), temp_f20_190);
            var_18_176 += 4;
            func_001F9BF8(var_17_177, temp_5_203, (1.0f - (temp_f20_190 * temp_f20_190)) * *((D_0013E030.unk26 * 4) + D_001604D0));
            func_001F9A10(var_17_177, var_17_177, sp140 + ((((temp_22_92 + temp_16_180) & 0x1F) * 0x10) + D_0013E0F0));
            var_17_177 += 0x10;
            if (var_19_159 < 4) {
                goto loop_12;
            }
            func_001F7D30(sp_slot, 0, 0);
            var_18_240 = sp12C;
            var_19_241 = 0;
            var_17_242 = sp_slot;
loop_14:
            temp_16_245 = var_19_241 >> 1;
            temp_4_246 = temp_16_245 - 1;
            var_19_241 += 1;
            temp_f0_250 = func_001FA6C0(var_21_63 - temp_4_246) * 0.03125f;
    __asm__ volatile ("" : "+f" (temp_f0_250));
            temp_5_255 = var_18_240;
            var_18_240 += 0x10;
            func_001F9BF8(var_17_242, temp_5_255, (1.0f - (temp_f0_250 * temp_f0_250)) * *((D_0013E030.unk26 * 4) + D_001604D0));
            func_001F9A10(var_17_242, var_17_242, sp140 + ((((temp_22_92 + temp_16_245) & 0x1F) * 0x10) + D_0013E0F0));
            var_17_242 += 0x10;
            if (var_19_241 < 4) {
                goto loop_14;
            }
            var_18_85 = sp138;
            func_001F7D30(sp_slot, 0, 0);
            if (var_18_85 < 2) {
                goto loop_9;
            }
            var_21_63 = sp130;
        } while (var_21_63 < (D_0013E030.unk54 - 1));
    }
}
#endif /* NON_MATCHING */
