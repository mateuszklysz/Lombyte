#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fe980/FUN_001fe980.s", FUN_001fe980);
#else
#include "rnc/assembly_textbin_fun_001fe980_types.h"
#include "types.h"










extern s32 D_0015EE1C;
extern s32 D_0015EE1D;
extern s32 D_0015F6A0;
extern struct M2c_D_001996D0 D_001996D0;
extern s32 InitializeDmaPacket();
extern s32 func_001F44B8();
extern s32 func_001F5450();
extern s32 func_001F5F18();
extern s32 func_001F75F0();
extern s32 func_001FE898();
extern void jtbl_001E7A70();
void FUN_001fe980(void) {
    s32 sp10;
    s32 temp_10_199;
    s32 temp_10_74;
    s32 temp_12_197;
    s32 temp_13_193;
    s32 temp_16_167;
    s32 temp_16_95;
    s32 temp_16_98;
    s32 temp_2_128;
    s32 temp_2_188;
    s32 temp_2_41;
    s32 temp_2_67;
    s32 temp_2_83;
    s32 temp_3_127;
    s32 temp_3_82;
    s32 temp_4_125;
    s32 temp_4_186;
    s32 temp_4_207;
    s32 temp_4_70;
    s32 temp_5_196;
    s32 temp_5_72;
    s32 temp_6_123;
    s32 temp_6_190;
    s32 temp_6_208;
    s32 temp_6_73;
    s32 temp_7_192;
    s32 temp_7_71;
    s32 temp_9_203;
    s32 temp_9_75;
    s32 var_18_126;
    s32 var_2_142;
    s32 var_3_144;
    u32 temp_3_23;
    struct M2c_temp_16_121 *temp_16_121;
    struct M2c_temp_17_62 *temp_17_62;
    struct M2c_temp_3_184 *temp_3_184;
    struct M2c_var_3_147 *var_3_147;
    if ((D_001996D0.unk0 != 0) && (D_001996D0.unk30 != 0)) {
        if ((D_0015EE1D != 0) || (*(s32 *)0x15EE1C != 0)) {
            temp_3_23 = D_001996D0.unk0 - 1;
            if (temp_3_23 < 7U) {
                switch (D_001996D0.unk0) {
                case 1:
                    if (D_0015EE1D != 0) {
                        temp_2_41 = (D_001996D0.unk4 * 4) + 8;
                        D_001996D0.unk18 = temp_2_41;
                        D_001996D0.unk1C = temp_2_41;
                        func_001F5F18(D_001996D0.unk14 - temp_2_41, D_001996D0.unk14 + temp_2_41, D_001996D0.unk10 - temp_2_41, D_001996D0.unk10 + temp_2_41, 0x60);
                    }
                    break;
                case 2:
                    if (D_0015EE1D & 0xFF) {
                        func_001FE898(*(s32 *)((temp_3_23 * 4) + &jtbl_001E7A70), D_0015EE1D);
                    }
                    break;
                case 3:
                    temp_17_62 = &D_001996D0 - 0x6930;
                    if (D_0015EE1D & 0xFF) {
                        temp_2_67 = temp_17_62->unk4;
                        temp_4_70 = temp_17_62->unk14;
                        temp_7_71 = (temp_17_62->unk8 - 0x20) * temp_2_67;
                        temp_5_72 = (temp_17_62->unkC - 0x20) * temp_2_67;
                        temp_6_73 = temp_17_62->unk10;
                        temp_10_74 = temp_7_71 > -1;
                        temp_9_75 = temp_5_72 > -1;
                        temp_3_82 = ((s32) ((temp_10_74 != 0) ? temp_7_71 : (temp_7_71 + 7)) >> 3) + 0x20;
                        temp_2_83 = ((s32) ((temp_9_75 != 0) ? temp_5_72 : (temp_5_72 + 7)) >> 3) + 0x20;
                        temp_17_62->unk18 = temp_3_82;
                        temp_17_62->unk1C = temp_2_83;
                        func_001F5F18(temp_4_70 - temp_2_83, temp_4_70 + temp_2_83, temp_6_73 - temp_3_82, temp_6_73 + temp_3_82, 0x60, temp_9_75, temp_10_74);
                        temp_16_95 = (8 - (u32)temp_17_62->unk4) * 0x10;
                        temp_16_98 = (temp_16_95 <= -1) ? 0 : temp_16_95;
                        func_001F5450(temp_17_62->unk10 - 0x20, temp_17_62->unk14 - 0x20, 0x40, 0x40, 0, 0, 0x40, 0x40, (temp_16_98 << 0x18) | 0x808080, func_001F44B8(4));
                    }
                    break;
                case 4:
                case 5:
                case 6:
                    temp_16_121 = &D_001996D0 - 0x6930;
                    if (D_0015EE1D & 0xFF) {
                        temp_6_123 = temp_16_121->unk8;
                        temp_4_125 = temp_16_121->unkC;
                        var_18_126 = 0x80FFA888;
                        temp_3_127 = temp_16_121->unk10;
                        temp_2_128 = temp_16_121->unk14;
                        temp_16_121->unk18 = temp_6_123;
                        temp_16_121->unk1C = temp_4_125;
                        func_001F5F18(temp_2_128 - temp_4_125, temp_2_128 + temp_4_125, temp_3_127 - temp_6_123, temp_3_127 + temp_6_123, 0x60);
                        if (*(s32 *)((u8 *)&D_001996D0 - 0x6930) == 4) {
                            var_2_142 = 0xFFA888;
                            var_3_144 = temp_16_121->unk4 << 0x1D;
                            goto block_17;
                        }
                        var_3_147 = &D_001996D0 - 0x6930;
                        if (*(s32 *)((u8 *)&D_001996D0 - 0x6930) == 6) {
                            var_3_144 = 0xFFA888;
                            var_2_142 = (4 - (u32)temp_16_121->unk4) << 0x1D;
block_17:
                            var_18_126 = var_2_142 | var_3_144;
                            var_3_147 = &D_001996D0 - 0x6930;
                        }
                        temp_16_167 = *(s32 *)((var_3_147->unk20 * 0x10) + D_0015F6A0);
                        InitializeDmaPacket(&sp10, 0xF0, 0x1E0, 0x2C, 0x1D4, 0x100, var_3_147->unk14, 0x10, 3);
                        func_001F75F0(&sp10, var_18_126, temp_16_167, -1);
                    }
                    break;
                case 7:
                    temp_3_184 = &D_001996D0 - 0x6930;
                    if (D_0015EE1D & 0xFF) {
                        temp_4_186 = temp_3_184->unk1C;
                        temp_2_188 = temp_3_184->unk4;
                        temp_6_190 = temp_3_184->unk18;
                        temp_7_192 = (temp_4_186 - 8) * temp_2_188;
                        temp_13_193 = temp_3_184->unk10;
                        temp_5_196 = (temp_6_190 - 8) * temp_2_188;
                        temp_12_197 = temp_3_184->unk14;
                        temp_10_199 = temp_7_192 > -1;
                        temp_9_203 = temp_5_196 > -1;
                        temp_4_207 = temp_4_186 - ((s32) ((temp_10_199 != 0) ? temp_7_192 : (temp_7_192 + 7)) >> 3);
                        temp_6_208 = temp_6_190 - ((s32) ((temp_9_203 != 0) ? temp_5_196 : (temp_5_196 + 7)) >> 3);
                        func_001F5F18(temp_12_197 - temp_4_207, temp_12_197 + temp_4_207, temp_13_193 - temp_6_208, temp_13_193 + temp_6_208, (8 - temp_2_188) * 0xC, temp_9_203, temp_10_199, 0xC);
                    }
                    break;
                }
            }
        }
    }
}

extern void func_001FE980(void) __attribute__((alias("FUN_001fe980")));
#endif /* NON_MATCHING */
