#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002256e8/FUN_002256e8.s", FUN_002256e8);
#else
#include "types.h"
struct M2c_D_00137B80 {
    u8 pad_0[0x1610];
    s32 unk1610;
    s32 unk1614;
};

struct M2c_arg0 {
    u8 pad_0[0x34];
    s32 unk34;
    u8 pad_38[0x4];
    s32 unk3C;
    s32 unk40;
    struct M2c_arg0_unk44 * unk44;
};

struct M2c_arg0_unk44 {
    u8 pad_0[0x20];
    u8 unk20;
    u8 pad_21[0x9B];
    u8 unkBC;
    u8 pad_BD[0x3];
};

struct M2c_temp_17_108 {
    u8 pad_0[0x20];
    u8 unk20;
    u8 pad_21[0x31];
    u8 unk52;
    s32 unk53;
    u8 pad_57[0x19];
    s32 unk70;
    u8 pad_74[0x48];
    s32 unkBC;
};

extern struct M2c_D_00137B80 D_00137B80;
extern s32 D_001516D8;
extern s32 D_001516EC;
extern s32 D_0015172A;
extern s32 D_0015ED88[];
extern s32 D_0015EE20;
extern u8 D_001B3200[];
extern s32 D_001B4265;
extern s32 D_001D5CBB;
extern s32 func_001F96F8();
extern s32 func_002032E0();
extern s32 func_0020B618();
extern s32 func_00212F90();
extern s32 func_00215B10();
extern s32 func_00216788();
extern s32 func_00225DD8();
extern void jtbl_001E88B0();
s32 FUN_002256e8(struct M2c_arg0 *arg0) {
    s32 *temp_18_73;
    s32 temp_16_38;
    s32 temp_19_70;
    s32 temp_3_11;
    s32 temp_3_124;
    s32 temp_4_61;
    s32 temp_6_80;
    s32 temp_7_36;
    s32 var_16_71;
    s32 var_2_74;
    s32 var_5_170;
    s32 var_7_172;
    u32 temp_18_127;
    u8 temp_16_150;
    u8 temp_16_220;
    u8 temp_2_140;
    u8 temp_2_210;
    u8 temp_3_109;
    u8 temp_3_190;
    u8 var_2_192;
    u8 var_5_125;
    struct M2c_temp_17_108 *temp_17_108;
    temp_3_11 = arg0->unk34;
    if (temp_3_11 == 1) {
        goto block_10;
    }
    if (temp_3_11 >= 2) {
        goto block_4;
    }
    if (temp_3_11 == 0) {
        goto block_6;
    }
    return 0;
block_4:
    if (temp_3_11 == 2) {
        goto block_17;
    }
    return 0;
block_6:
    if (*(s32 *)0x1516D8 != 0) {
        goto block_42;
    }
    temp_7_36 = D_00137B80.unk1614 << 0xB;
    temp_16_38 = 0x4F000 - temp_7_36;
    if (func_00216788(arg0->unk3C + temp_16_38, D_00137B80.unk1610, D_00137B80.unk1614, temp_7_36) == 0) {
        goto block_9;
    }
    arg0->unk40 = temp_16_38;
    arg0->unk34 = 1;
    D_001D5CBB = 1;
    func_00225DD8(arg0->unk3C);
    goto block_41;
block_9:
    arg0->unk34 = 3;
    goto block_41;
block_10:
    if (*(s32 *)0x1516D8 != 0) {
        goto block_42;
    }
    D_001D5CBB = 0;
    temp_4_61 = arg0->unk3C;
    func_0020B618(temp_4_61 + arg0->unk40, temp_4_61);
    temp_19_70 = arg0->unk3C;
    var_16_71 = 0;
    temp_18_73 = (*(s32 *)0x1B4265 * 4) + D_001B3200;
    var_2_74 = 0 * 8;
loop_12:
    var_16_71 += 1;
    temp_6_80 = var_16_71 * 4;
    *(s32 *)((u8 *)(*temp_18_73 + temp_6_80) + 0x48) = (s32) (arg0->unk3C + *(s32 *)(temp_19_70 + var_2_74));
    func_002032E0(*temp_18_73, var_16_71, temp_6_80);
    var_2_74 = var_16_71 * 8;
    if (var_16_71 < 3) {
        goto loop_12;
    }
    arg0->unk34 = 2;
    if (D_0015EE20 != 0) {
        goto block_15;
    }
    arg0->unk44->unk20 = 0U;
    goto block_16;
block_15:
    arg0->unk44->unk20 = 4U;
block_16:
    arg0->unk44->unkBC = 0U;
    goto block_41;
block_17:
    temp_17_108 = arg0->unk44;
    temp_3_109 = temp_17_108->unk20;
    if (temp_3_109 >= 7U) {
        goto block_41;
    }
    switch (temp_3_109);                            /* jump table: jtbl_001E88B0 */
/* case 0: */
/* case 2: */
/* case 4: */
    temp_3_124 = D_0015ED88[0] - 1;
    var_5_125 = temp_17_108->unkBC;
    temp_18_127 = (u8) temp_17_108->unk20 >> 1;
    if (var_5_125 != 0) {
        goto block_21;
    }
    var_5_125 = temp_18_127 * 6;
    D_001516EC = var_5_125 + ((temp_3_124 <= -1) ? 0 : temp_3_124) + 0xEA60;
block_21:
    temp_2_140 = temp_17_108->unkBC + 1;
    temp_17_108->unkBC = temp_2_140;
    if (func_001F96F8(0x78, var_5_125) >= (temp_2_140 & 0xFF)) {
        goto block_23;
    }
    temp_17_108->unkBC = func_001F96F8(0x78);
block_23:
    temp_16_150 = temp_17_108->unkBC;
    if ((s32) temp_16_150 < func_001F96F8(0x78)) {
        goto block_42;
    }
    if (D_0015172A != 3) {
        goto block_42;
    }
    temp_17_108->unkBC = 0U;
    temp_17_108->unk20 = (u8) (temp_17_108->unk20 + 1);
    var_5_170 = temp_18_127 + 1;
    var_7_172 = func_001F96F8(0x18);
    goto block_33;
/* case 1: */
/* case 3: */
/* case 5: */
    if (temp_17_108->unkBC != 0) {
        goto block_29;
    }
    if (temp_17_108->unk52 != temp_17_108->unk53) {
        goto block_29;
    }
    func_00215B10(*(s32 *)((temp_3_109 * 4) + &jtbl_001E88B0));
    temp_17_108->unkBC = 1U;
block_29:
    if (!(temp_17_108->unk70 & 2)) {
        goto block_41;
    }
    temp_3_190 = temp_17_108->unk20;
    var_2_192 = 6;
    if (temp_3_190 != 1) {
        goto block_32;
    }
    var_2_192 = temp_3_190 + 1;
block_32:
    temp_17_108->unk20 = var_2_192;
    temp_17_108->unkBC = 0U;
    var_7_172 = func_001F96F8(0x18);
    var_5_170 = 0;
block_33:
    func_00212F90(temp_17_108, var_5_170, 0, var_7_172);
    goto block_41;
/* case 6: */
    temp_2_210 = temp_17_108->unkBC + 1;
    temp_17_108->unkBC = temp_2_210;
    if (func_001F96F8(0xF0) >= (temp_2_210 & 0xFF)) {
        goto block_36;
    }
    temp_17_108->unkBC = func_001F96F8(0xF0);
block_36:
    temp_16_220 = temp_17_108->unkBC;
    if ((s32) temp_16_220 < func_001F96F8(0xF0)) {
        goto block_42;
    }
    if (D_0015EE20 != 0) {
        goto block_39;
    }
    temp_17_108->unk20 = 0U;
    goto block_40;
block_39:
    temp_17_108->unk20 = 4U;
block_40:
    temp_17_108->unkBC = 0U;
block_41:
block_42:
    return 0;
}

extern s32 func_002256E8(struct M2c_arg0 *arg0) __attribute__((alias("FUN_002256e8")));
#endif /* NON_MATCHING */
