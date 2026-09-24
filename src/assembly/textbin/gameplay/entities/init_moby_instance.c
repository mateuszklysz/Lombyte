#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/entities/init_moby_instance/FUN_0020c5f0.s", FUN_0020c5f0);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x21];
    u8 unk21;
    u8 unk22;
    u8 unk23;
    struct M2c_arg0_unk24 * unk24;
    u8 pad_28[0x4];
    s32 unk2C;
    u8 pad_30[0x4];
    u16 unk34;
    u16 unk36;
    s32 unk38;
    u8 pad_3C[0x1C];
    s32 unk58;
    s32 unk5C;
    u8 pad_60[0x11];
    u8 unk71;
    u8 unk72;
    u8 unk73;
    s32 unk74;
    u8 pad_78[0x4];
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    s32 unk7F;
    u8 pad_83[0x1];
    s32 unk84;
    s32 unk88;
    u8 pad_8C[0x4];
    s32 unk90;
    s32 unk94;
    u8 pad_98[0x8];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u16 unkA4;
    u16 unkA6;
    s32 unkA8;
    s32 unkAC;
    u8 pad_B0[0xD];
    s32 unkBD;
};

struct M2c_arg0_unk24 {
    u8 pad_0[0x6];
    s32 unk6;
    u8 pad_A[0x5];
    s32 unkF;
    u8 pad_13[0x35];
    struct M2c_arg0_unk24_unk48 * unk48;
};

struct M2c_arg0_unk24_unk48 {
    u8 pad_0[0x10];
    s32 unk10;
};

struct M2c_temp_4_122 {
    u8 pad_0[0xC];
    s32 unkC;
    u8 pad_10[0x38];
    struct M2c_temp_4_122_unk48 * unk48;
};

struct M2c_temp_4_122_unk48 {
    u8 pad_0[0x10];
    u8 unk10;
    s32 unk11;
};

struct M2c_temp_5_64 {
    u8 pad_0[0xE];
    u16 unkE;
    s32 unk10;
    u8 pad_14[0x10];
    s32 unk24;
    u8 pad_28[0x18];
    s32 unk40;
    s32 unk44;
};

struct M2c_unk48 {
    u8 pad_0[0x10];
    s32 unk10;
};

extern s32 D_0015FF18;
extern u8 D_001B3200[];
extern u8 D_001B3580[];
extern u8 D_001B3AC0[];
extern s32 FillTransferWords();
extern void func_0020C880();
void init_moby_instance(struct M2c_arg0 *arg0, s16 arg1) __asm__("FUN_0020c5f0");

void init_moby_instance(struct M2c_arg0 *arg0, s16 arg1) {
    s32 temp_2_40;
    s32 temp_2_52;
    s64 temp_8_22;
    u16 temp_4_74;
    u16 var_2_140;
    u8 temp_3_18;
    struct M2c_temp_4_122 *temp_4_122;
    struct M2c_temp_5_64 *temp_5_64;

    FillTransferWords(0, 0x100);
    temp_3_18 = *(arg1 + D_001B3AC0);
    temp_8_22 = ((0x8080 << 0x10) | 0x8000) << 0x17;
    arg0->unk23 = 0x80;
    arg0->unk22 = temp_3_18;
    arg0->unkA4 = 0xFF;
    arg0->unk21 = 0xFF;
    arg0->unk71 = 0xFF;
    arg0->unk72 = 0xFFU;
    arg0->unkA6 = arg1;
    arg0->unk38 = temp_8_22;
    temp_2_40 = (s32) (((u8 *)arg0) - D_0015FF18) >> 8;
    arg0->unk36 = 0x7F80;
    arg0->unkAC = temp_2_40;
    arg0->unkA8 = (s32) (temp_2_40 << 0x10);
    arg0->unk7D = 0xFF;
    arg0->unkA1 = 0x7F;
    arg0->unkA3 = 0x80;
    arg0->unk7E = 0;
    arg0->unk7C = 0xFF;
    arg0->unkA0 = 0x7F;
    arg0->unkA2 = 0x80;
    temp_2_52 = *(((temp_3_18 & 0xFF) * 4) + D_001B3580);
    arg0->unk74 = temp_2_52;
    if (temp_2_52 == 0) {
        arg0->unk34 = (u16) (arg0->unk34 | 2);
    }
    temp_5_64 = *((arg0->unk22 * 4) + D_001B3200);
    if (temp_5_64 == NULL) {
        arg0->unk94 = 0;
        var_2_140 = arg0->unk34 | 5;
        arg0->unk24 = NULL;
        goto block_19;
    }
    arg0->unk24 = temp_5_64;
    arg0->unk72 = (u8) temp_5_64->unkE;
    temp_4_74 = arg0->unk34 | temp_5_64->unk44;
    arg0->unk34 = temp_4_74;
    arg0->unk94 = (s32) temp_5_64->unk10;
    arg0->unk5C = 1.0f;
    arg0->unk2C = (f32) temp_5_64->unk24;
    arg0->unk58 = 0x3F800000;
    if (temp_5_64->unk40 != 0) {
        arg0->unk34 = (u16) (temp_4_74 | 0x10);
        arg0->unk90 = (s32) temp_5_64->unk40;
    }
    if (arg0->unk24->unkF != 0) {
        arg0->unk7F = 0x18;
        arg0->unk84 = 0;
        arg0->unk34 = (u16) (arg0->unk34 | 0x400);
        arg0->unk88 = 0;
        arg0->unkBD = 0;
    }
    if (arg0->unk24->unk6 != 0) {
        arg0->unk73 = 0x18;
    }
    if (arg0->unk24->unk48 != NULL) {
        func_0020C880(arg0, temp_5_64, 0xFF, 0x80, temp_8_22, 0x7F80, 0x7F);
        if ((u8) arg0->unk24->unk48->unk10 >= 2U) {
            arg0->unk34 = (u16) (arg0->unk34 & 0xFFFD);
        }
        temp_4_122 = arg0->unk24;
        if ((temp_4_122->unkC == 1) && ((u8) temp_4_122->unk48->unk10 < 2U)) {
            arg0->unk58 = 0;
            if (temp_4_122->unk48->unk11 < 0) {
                var_2_140 = arg0->unk34 | 0x40;
block_19:
                arg0->unk34 = var_2_140;
            }
        }
    }
}

extern void func_0020C5F0(struct M2c_arg0 *arg0, s16 arg1) __attribute__((alias("FUN_0020c5f0")));
#endif /* NON_MATCHING */
