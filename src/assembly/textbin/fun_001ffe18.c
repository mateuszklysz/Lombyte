#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ffe18/FUN_001ffe18.s", FUN_001ffe18);
#else
#include "types.h"
struct M2c_D_0013E500 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
};

struct M2c_D_00160F00 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct M2c_D_0019A3E8 {
    u8 pad_0[0xC];
    s32 unkC;
    u8 pad_10[0x10];
    s32 unk20;
    s32 unk24;
};

struct M2c_temp_10_42 {
    u8 pad_0[0x6];
    u8 unk6;
    s32 unk7;
};

struct M2c_temp_18_59 {
    u8 pad_0[0x8];
    s64 unk8;
    s32 unk10;
    u8 pad_14[0x4];
    s32 unk18;
    u8 pad_1C[0x4];
    s64 unk20;
    s32 unk28;
    u8 pad_2C[0x4];
    s64 unk30;
    s64 unk38;
    s64 unk40;
    s32 unk48;
    u8 pad_4C[0x4];
    s64 unk50;
    s32 unk58;
    u8 pad_5C[0x4];
    s64 unk60;
    s32 unk68;
};

struct M2c_temp_2_58 {
    u8 pad_0[0x10];
    s64 unk10;
};

extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_001ffe18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s64 arg5) {
    s32 temp_17_97;
    s32 temp_19_78;
    s32 temp_20_49;
    s32 temp_21_84;
    s32 temp_23_46;
    s32 temp_5_79;
    s64 temp_20_68;
    s64 temp_23_80;
    s64 temp_2_63;
    struct M2c_temp_10_42 *temp_10_42;
    struct M2c_temp_18_59 *temp_18_59;
    struct M2c_temp_2_58 *temp_2_58;

    temp_10_42 = D_0019A3E8.unk24 + (*(s16 *)((u8 *)((arg0 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
    D_00160F00->unk0 = 0x10000007;
    temp_23_46 = 1 << temp_10_42->unk7;
    temp_20_49 = 1 << temp_10_42->unk6;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000007;
    temp_2_58 = D_00160F00;
    temp_18_59 = ((u8 *)temp_2_58 + (0x10));
    D_00160F00 = temp_18_59;
    temp_2_58->unk10 = (s64) ((0xB400 << 0x30) | 0x8001);
    temp_18_59->unk8 = (s64) ((((0xA6A6 << 0x10) | 0xA6A6) << 0xB) | 0x106);
    temp_2_63 = func_001FFA10(temp_10_42, 0x10000007);
    __asm__ volatile ("" : "+r" (temp_2_63));
    temp_20_68 = temp_20_49 * 0x10;
    temp_18_59->unk20 = (s64) ((arg5 << 0x18) | 0x7F7F7F);
    temp_18_59->unk28 = temp_20_68;
    temp_18_59->unk10 = temp_2_63;
    temp_18_59->unk18 = 0x154;
    temp_19_78 = (arg2 + arg4) * 0x10;
    temp_5_79 = arg1 * 0x10;
    temp_23_80 = temp_23_46 << 0x14;
    temp_21_84 = arg2 * 0x10;
    temp_18_59->unk38 = (s64) (temp_23_80 + temp_20_68);
    temp_18_59->unk30 = (s64) (((temp_5_79 + D_0013E500.unk10) - 8) | (((temp_19_78 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_17_97 = (arg1 + arg3) * 0x10;
    temp_18_59->unk48 = 0;
    temp_18_59->unk40 = (s64) (((temp_5_79 + D_0013E500.unk10) - 8) | (((temp_21_84 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_18_59->unk58 = temp_23_80;
    temp_18_59->unk50 = (s64) (((temp_17_97 + D_0013E500.unk10) - 8) | (((temp_19_78 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_18_59->unk68 = 0;
    temp_18_59->unk60 = (s64) (((temp_17_97 + D_0013E500.unk10) - 8) | (((temp_21_84 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x70;
}
#endif /* NON_MATCHING */
