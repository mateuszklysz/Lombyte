#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002239e0/FUN_002239e0.s", FUN_002239e0);
#else
#include "types.h"
struct M2c_D_0013D290 {
    u8 pad_0[0xD4];
    s32 unkD4;
    u8 pad_D8[0x4];
    s32 unkDC;
};

struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    u8 pad_24[0x1C];
    s32 unk40;
};

struct M2c_temp_18_72 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad_10[0x5];
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 pad_18[0x3];
};

struct M2c_temp_5_68 {
    u8 pad_0[0x8];
    s32 unk8;
    u8 pad_C[0xC8];
    s32 unkD4;
    u8 pad_D8[0x4];
    s32 unkDC;
};

extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_0013D2B0[];
extern s32 D_0015ED80[];
extern s32 D_001601B0;
extern u8 D_001602A0[];
extern u8 D_001602D0[];
extern u8 D_00160300[];
extern u8 D_00160310[];
extern u8 D_00160320[];
extern void func_001F4280();
extern void func_001F4398();
extern void func_001F65B0();
extern void func_001F6B88();
extern s32 func_001FDD10();
extern s32 func_001FF960();
extern void func_001FFC30();
extern void func_00200E08();
extern void sprintf();
s32 FUN_002239e0(struct M2c_arg0 *arg0) {
u8 sp_slot[0xF0];    s32 temp_16_126;
    s32 temp_19_128;
    s32 temp_16_30;
    s32 temp_16_93;
    s32 temp_17_183;
    s32 temp_17_241;
    s32 temp_17_89;
    s32 temp_18_33;
    s32 temp_6_162;
    s32 temp_7_176;
    s32 temp_7_180;
    s32 temp_7_86;
    s32 temp_8_130;
    s32 temp_lo_109;
    s32 var_17_14;
    s32 var_17_75;
    s32 var_30_12;
    u32 temp_16_87;
    u32 temp_19_29;
    u32 temp_6_24;
    struct M2c_temp_18_72 *temp_18_72;
    struct M2c_temp_5_68 *temp_5_68;

    var_30_12 = 0;
    var_17_14 = 4;
    func_001F4280(0);
loop_1:
    temp_6_24 = arg0->unk20;
    temp_19_29 = temp_6_24 - 3;
    temp_16_30 = var_17_14 - 1;
    temp_18_33 = var_17_14 + 0x31;
    if (D_0013D290.unkD4 >= 3) {
        goto block_5;
    }
    if (D_0013D290.unkDC >= 0) {
        goto block_5;
    }
    if (arg0->unk40 != var_30_12) {
        goto block_5;
    }
    func_00200E08(0, var_17_14 - 4, temp_6_24, var_17_14 + 0x34, (0x8020 << 0x10) | 0xFFFF, 0);
    func_00200E08(3, temp_16_30, temp_19_29, temp_18_33, D_001601B0, 0);
block_5:
    func_00200E08(3, temp_16_30, temp_19_29, temp_18_33, (0x8030 << 0x10) | 0x3030, 0);
    temp_5_68 = ((u8 *)D_0013D2B0 - (u8 *)0x20);
    temp_18_72 = (var_30_12 * 0x1C) + D_0013D2B0;
    if (temp_5_68->unkD4 >= 3) {
        goto block_12;
    }
    if (temp_5_68->unkDC < 0) {
        goto block_8;
    }
    var_17_75 = var_17_14 + 0x30;
    goto block_27;
block_8:
    if (temp_5_68->unk8 != 2) {
        goto block_11;
    }
    goto block_13;
block_11:
block_12:
    var_17_75 = var_17_14 + 0x30;
    goto block_27;
block_13:
    if (temp_18_72->unk0 == -1) {
        goto block_15;
    }
    temp_7_86 = temp_18_72->unkC;
    goto block_17;
block_15:
    temp_16_87 = arg0->unk20;
    temp_17_89 = var_17_14 + 0x10;
    temp_16_93 = (s32) (temp_16_87 + (temp_16_87 >> 0x1F)) >> 1;
    var_17_75 = temp_17_89 + 0x20;
    func_001F6B88(temp_16_93, temp_17_89, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x5217, temp_5_68), -1);
    goto block_28;
block_17:
    temp_lo_109 = temp_7_86 / 216000;
    temp_16_126 = ((arg0->unk40 ^ var_30_12) == 0) ? 0x8020FFFF : 0x80FFA888;
    temp_19_128 = temp_16_126;
    temp_8_130 = temp_lo_109 * 0x3C;
    sprintf(sp_slot, D_00160300, (temp_lo_109 >= 0x64) ? 0x63 : temp_lo_109, (temp_7_86 / 3600) - temp_8_130, temp_8_130);
    func_001FFC30(func_001FF960(0xE99E, 3), 4, var_17_14, 0x10, 0x10, 0x80);
    func_001F65B0(0x16, var_17_14, temp_19_128, sp_slot, -1);
    if (temp_18_72->unk8 == 0) {
        goto block_19;
    }
    func_001FFC30(func_001FF960(0xE99E, 4), 0x4E, var_17_14, 0x10, 0x10, 0x80);
    temp_6_162 = temp_18_72->unk8;
    sprintf(sp_slot, D_001602A0, (temp_6_162 >= 0x64) ? 0x63 : temp_6_162);
    func_001F65B0(0x60, var_17_14, temp_19_128, sp_slot, -1);
block_19:
    temp_7_176 = temp_18_72->unk4;
    temp_7_180 = (temp_7_176 > 0x98967F) ? 0x98967F : temp_7_176;
    temp_17_183 = var_17_14 + 0x10;
    if (temp_7_180 >= 0x3E8) {
        goto block_21;
    }
    sprintf(sp_slot, D_001602A0, temp_7_180, temp_7_180);
    goto block_26;
block_21:
    if (temp_7_180 <= 0xF423F) {
        goto block_23;
    }
    goto block_25;
block_23:
    sprintf(sp_slot, D_001602D0, temp_7_180 / 1000, temp_7_180 % 1000);
    goto block_26;
block_25:
    sprintf(sp_slot, D_00160310, temp_7_180 / 1000000, (s32) (temp_7_180 % 1000000) / 1000, temp_7_180 % 1000);
block_26:
    func_001FFC30(func_001FF960(0x754F, 0xF), 4, temp_17_183, 0x10, 0x10, 0x80);
    temp_17_241 = temp_17_183 + 0x10;
    func_001F65B0(0x16, temp_17_183, temp_16_126, sp_slot, -1);
    sprintf(sp_slot, D_00160320, (s32) temp_18_72->unk16, (s32) temp_18_72->unk15, (s32) temp_18_72->unk17);
    func_001FFC30(func_001FF960(0xE99E, 2), 4, temp_17_241, 0x10, 0x10, 0x80);
    var_17_75 = temp_17_241 + 0x10;
    func_001F65B0(0x16, temp_17_241, temp_16_126, sp_slot, -1);
block_27:
block_28:
    if (D_0015ED80[0] != 0) {
        goto block_30;
    }
    var_17_14 = var_17_75 + 0x1B;
    goto block_32;
block_30:
    var_17_14 = var_17_75 + 0x24;
block_32:
    var_30_12 += 1;
    if (var_30_12 < 5) {
        goto loop_1;
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
