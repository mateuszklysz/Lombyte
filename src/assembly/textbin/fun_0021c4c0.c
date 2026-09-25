#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021c4c0/FUN_0021c4c0.s", FUN_0021c4c0);
#else
#include "types.h"
struct M2c_D_0013C940 {
    u8 pad_0[0x1C4];
    s32 unk1C4;
};

struct M2c_D_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

struct M2c_D_001D5BF0 {
    u8 pad_0[0x4];
    struct M2c_D_001D5BF0_unk4 * unk4;
    s32 unk8;
    u8 pad_C[0x118];
    s32 unk124;
};

struct M2c_D_001D5BF0_unk4 {
    u8 pad_0[0x38];
    s32 unk38;
    u8 pad_3C[0x4];
    s32 unk40;
};

struct M2c_arg0 {
    u8 pad_0[0x14];
    s32 unk14;
    u8 pad_18[0x64];
    s32 unk7C;
};

extern struct M2c_D_0013C940 D_0013C940;
extern u8 D_0013DD40[];
extern s32 D_0015ED84;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 D_001CF758;
extern s32 D_001CF874[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_0020B950();
extern s32 func_0020BC00();
extern s32 func_0022DA68();
s32 FUN_0021c4c0(struct M2c_arg0 *arg0, s32 *arg3) {
    s32 *var_7_0;
    s32 *temp_4_126;
    s32 *temp_4_166;
    s32 *temp_5_107;
    s32 temp_17_104;
    s32 temp_20_22;
    s32 temp_2_185;
    s32 temp_4_100;
    s32 temp_6_110;
    s32 var_2_192;
    s32 var_4_50;
    s32 var_4_78;
    s32 *temp_18_105;
    var_7_0 = arg3;
    temp_20_22 = D_001A00F0.unk224;
    if (D_001D5BF0.unk4->unk40 == arg0) {
        goto block_3;
    }
    if (temp_20_22 >= 0x14) {
        goto block_39;
    }
    *(s32 *)((u8 *)(((u8 *)arg0) + (temp_20_22 * 4)) + 0x30) = -1;
    goto block_39;
block_3:
    if (!(D_0013C940.unk1C4 & 0xD00)) {
        goto block_6;
    }
    if (D_001D5BF0.unk124 != 0) {
        goto block_6;
    }
    return 1;
block_6:
    if (!(D_0013C940.unk1C4 & 8)) {
        goto block_12;
    }
    var_4_50 = D_001A00F0.unk224;
    var_7_0 = &D_001A00F0;
loop_8:
    var_4_50 += 1;
    if (var_4_50 >= 0x14) {
        goto block_12;
    }
    if (*(s32 *)(var_4_50 + D_0013DD40) != 0) {
        goto block_11;
    }
    if (D_0015ED84 != var_4_50) {
        goto loop_8;
    }
block_11:
    D_001A00F0.unk224 = var_4_50;
block_12:
    if (!(D_0013C940.unk1C4 & 4)) {
        goto block_20;
    }
    var_7_0 = &D_001A00F0;
    var_4_78 = D_001A00F0.unk224 - 1;
loop_14:
    if (var_4_78 < 0) {
        goto block_20;
    }
    if (*(s32 *)(var_4_78 + D_0013DD40) != 0) {
        goto block_19;
    }
    if (D_0015ED84 == var_4_78) {
        goto block_18;
    }
    var_4_78 -= 1;
    goto loop_14;
block_18:
block_19:
    D_001A00F0.unk224 = var_4_78;
block_20:
    if (D_001A00F0.unk224 == temp_20_22) {
        goto block_22;
    }
    func_0022DA68(1, 0x11, arg0->unk14, var_7_0, &D_001A00F0);
    func_0020B950();
block_22:
    temp_4_100 = arg0->unk7C;
    if (temp_4_100 == 0) {
        goto block_32;
    }
    temp_17_104 = D_0013C940.unk1C4;
    temp_18_105 = ((u8 *)arg0) + 0x30;
    temp_5_107 = temp_18_105 + (D_001A00F0.unk224 * 4);
    temp_6_110 = *temp_5_107;
    if (!(temp_17_104 & 0x1000)) {
        goto block_25;
    }
    *temp_5_107 = (s32) ((temp_6_110 + temp_4_100) - 1) % temp_4_100;
block_25:
    if (!(temp_17_104 & 0x4000)) {
        goto block_27;
    }
    temp_4_126 = temp_18_105 + (D_001A00F0.unk224 * 4);
    *temp_4_126 = (s32) (*temp_4_126 + 1) % (s32) arg0->unk7C;
block_27:
    if (*(temp_18_105 + (D_001A00F0.unk224 * 4)) == temp_6_110) {
        goto block_29;
    }
    func_0022DA68(1, 0x11, arg0->unk14);
block_29:
    if (temp_17_104 & 0x5000) {
        goto block_31;
    }
    if (D_001A00F0.unk224 == temp_20_22) {
        goto block_33;
    }
block_31:
    arg0->unk7C = func_0020BC00(0x70000000, 0, 0x70000100, 1);
    temp_4_166 = temp_18_105 + (D_001A00F0.unk224 * 4);
    D_001CF874[0] = *(volatile u32 *)(0x70000000 + (*temp_4_166 * 4));
    D_001CF758 = *(volatile u32 *)(0x70000100 + (*temp_4_166 * 4));
block_32:
block_33:
    if (!(D_0013C940.unk1C4 & 0x10)) {
        goto block_39;
    }
    temp_2_185 = D_001D5BF0.unk4->unk38;
    if (temp_2_185 != 0) {
        goto block_36;
    }
    goto block_38;
block_36:
    D_001D5BF0.unk8 = temp_2_185;
    goto block_39;
block_38:
    var_2_192 = -1;
    if (D_001D5BF0.unk124 == 0) {
        goto block_40;
    }
block_39:
    var_2_192 = 0;
block_40:
    return var_2_192;
}

extern s32 func_0021C4C0(struct M2c_arg0 *arg0, s32 *arg3) __attribute__((alias("FUN_0021c4c0")));
#endif /* NON_MATCHING */
