/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020bf90
SCORE: code=60.6628 functions=60.6628 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals); shared struct extraction rejected after compile failure
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020bf90/FUN_0020bf90.s", FUN_0020bf90);
#else
#include "types.h"
struct M2c_D_0013F350 {
    u8 pad_0[0x80];
    s32 unk80;
    s32 unk84;
    s32 unk88;
};

struct M2c_D_001A00F0 {
    u8 pad_0[0x20];
    struct M2c_D_001A00F0_unk20 * unk20;
};

struct M2c_D_001A00F0_unk20 {
    u8 pad_0[0x4];
    u16 unk4;
    u8 pad_6[0x2];
};

struct M2c_D_001A2C10 {
    u8 pad_0[0x10];
    s32 unk10;
};

struct M2c_temp_16_107 {
    s16 unk0;
    u8 pad_2[0x16];
    s32 unk18;
    s32 unk1C;
};

struct M2c_temp_16_247 {
    s16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad_6[0x8];
    u16 unkE;
    u16 unk10;
    u8 pad_12[0x12];
    s16 unk24;
    u8 pad_26[0x2];
};

struct M2c_temp_2_191 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
};

struct M2c_temp_2_92 {
    u8 pad_0[0x4];
    u16 unk4;
    u8 pad_6[0x2];
};

struct M2c_temp_3_283 {
    u8 pad_0[0x4];
    u16 unk4;
    u8 pad_6[0x4];
    s16 unkA;
    u8 pad_C[0x2];
};

struct M2c_temp_5_66 {
    u8 pad_0[0x104];
    s32 unk104;
    u8 pad_108[0x4C];
    s32 unk154;
};

extern u8 D_0013D5B0[];
extern u8 D_0013D5BC[];
extern u8 D_0013DD58[];
extern struct M2c_D_0013F350 D_0013F350;
extern s32 D_0015ED84;
extern s32 D_0015FD60;
extern u8 D_00199478[];
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001A01F4[];
extern u8 D_001A2BC0[];
extern struct M2c_D_001A2C10 D_001A2C10;
extern s32 func_001F75F0();
extern s32 func_00208280();
extern s32 func_00208408();
extern s32 memset();
extern void spC0();
extern void spC4();
f32 FUN_0020bf90(s32 arg0, s32 arg1) {    u16 sp8E;
u8 sp_slot[0x170];    s32 sp80;
    u16 sp86;
    s32 spA0;
    u16 spA2;
    u16 spA6;
    s16 spA8;
    s16 spAA;
    s16 spB0;
    s16 spB2;
    f32 spC0;
    f32 spC4;
    f32 var_f0_42;
    f32 var_f1_114;
    s16 temp_3_249;
    s16 temp_4_108;
    s32 temp_2_186;
    s32 temp_3_85;
    s32 var_18_290;
    s32 var_19_102;
    s32 var_2_255;
    s32 var_3_242;
    s32 var_5_238;
    struct M2c_temp_16_107 *temp_16_107;
    struct M2c_temp_16_247 *temp_16_247;
    struct M2c_temp_2_191 *temp_2_191;
    struct M2c_temp_2_92 *temp_2_92;
    struct M2c_temp_3_283 *temp_3_283;
    struct M2c_temp_5_66 *temp_5_66;

    if (arg0 >= 0x13) {
        goto block_3;
    }
    if (*(arg0 + D_0013DD58) == 0) {
        goto block_3;
    }
    D_001A00F0.unk20 = (void *) *((arg0 * 4) + D_001A2BC0);
    goto block_4;
block_3:
    D_001A00F0.unk20 = NULL;
block_4:
    var_f0_42 = D_0013F350.unk88;
    if (var_f0_42 == 0.0f) {
        goto block_9;
    }
    if (arg0 != D_0015ED84) {
        goto block_9;
    }
    if (arg1 == 0) {
        goto block_8;
    }
    func_00208408(&spC0, &spC4, (D_0015FD60 == 0) ? arg0 : (arg0 + 0x64), D_0013F350.unk80, D_0013F350.unk84);
    temp_5_66 = ((u8 *)&D_001A00F0 + (arg0 * 4));
    var_f0_42 = spC4 * 4096.0f;
    temp_5_66->unk104 = (s32) (0x45800000 << 0x10);
    temp_5_66->unk154 = (s32) ((s32)(u32) (spC0 * 4096.0f) << 0x10);
    goto block_11;
block_8:
block_9:
    if (D_001A01F4 != NULL) {
        goto block_12;
    }
    temp_3_85 = arg0 * 4;
    *(s32 *)((u8 *)temp_3_85 + 0x50) = 0x08000000;
    *(s32 *)((u8 *)temp_3_85 + 0x0) = 0x08000000;
block_11:
block_12:
    temp_2_92 = D_001A00F0.unk20;
    if (temp_2_92 == NULL) {
        goto block_52;
    }
    if (temp_2_92->unk4 & 4) {
        goto block_38;
    }
    var_19_102 = 0;
loop_15:
    temp_16_107 = D_001A00F0.unk20 + var_19_102;
    temp_4_108 = temp_16_107->unk0;
    if (temp_4_108 != -1) {
        goto block_17;
    }
    var_f0_42 = 0.234375f;
    var_f1_114 = 0.30078125f;
    goto block_31;
block_17:
    if (temp_4_108 != -2) {
        goto block_19;
    }
    var_f0_42 = 0.5390625f;
    var_f1_114 = 0.36523438f;
    goto block_31;
block_19:
    if (temp_4_108 != -3) {
        goto block_21;
    }
    var_f0_42 = 0.58203125f;
    var_f1_114 = 0.6875f;
    goto block_31;
block_21:
    if (temp_4_108 != -4) {
        goto block_23;
    }
    var_f0_42 = 0.7207031f;
    var_f1_114 = 0.7285156f;
    goto block_31;
block_23:
    if (temp_4_108 != -5) {
        goto block_25;
    }
    var_f0_42 = 0.38476562f;
    var_f1_114 = 0.39648438f;
    goto block_31;
block_25:
    if (temp_4_108 != -7) {
        goto block_27;
    }
    var_f0_42 = 0.8671875f;
    var_f1_114 = 0.23046875f;
    goto block_31;
block_27:
    if (temp_4_108 != -8) {
        goto block_29;
    }
    var_f0_42 = 0.48046875f;
    var_f1_114 = 0.5703125f;
    goto block_31;
block_29:
    if (temp_4_108 != -9) {
        goto block_32;
    }
    var_f0_42 = 0.625f;
    var_f1_114 = 0.72265625f;
block_31:
    temp_16_107->unk18 = var_f0_42;
    temp_16_107->unk1C = var_f1_114;
    goto block_36;
block_32:
    temp_2_186 = temp_4_108 * 0x10;
    if (arg0 != D_0015ED84) {
        goto block_35;
    }
    temp_2_191 = *((temp_4_108 * 4) + D_00199478);
    if (temp_2_191 == NULL) {
        goto block_36;
    }
    func_00208408(((u8 *)temp_16_107 + (0x18)), ((u8 *)temp_16_107 + (0x1C)), arg0, temp_2_191->unk10, temp_2_191->unk14);
    var_f0_42 = *(s32 *)((u8 *)(*((temp_16_107->unk0 * 4) + D_00199478)) + 0x48);
    *(s32 *)((u8 *)(var_19_102 + D_001A00F0.unk20) + 0x20) = var_f0_42;
    goto block_36;
block_35:
    func_00208408(((u8 *)temp_16_107 + (0x18)), ((u8 *)temp_16_107 + (0x1C)), arg0, *(temp_2_186 + D_0013D5B0), *(s32 *)((u8 *)(D_0013D5B0 + temp_2_186) + 0x4));
    var_f0_42 = *((temp_16_107->unk0 * 0x10) + (D_0013D5B0 + 8));
    *(s32 *)((u8 *)(var_19_102 + D_001A00F0.unk20) + 0x20) = var_f0_42;
block_36:
    var_19_102 += 0x28;
    if (!(*(s32 *)((u8 *)(var_19_102 + D_001A00F0.unk20) + 0x4) & 4)) {
        goto loop_15;
    }
block_38:
    var_5_238 = 0;
    if (D_001A00F0.unk20->unk4 & 4) {
        goto block_51;
    }
    var_3_242 = 0 * 0x28;
loop_40:
    temp_16_247 = D_001A00F0.unk20 + var_3_242;
    temp_3_249 = temp_16_247->unk2;
    temp_16_247->unk24 = 0;
    temp_16_247->unk4 = (u16) (temp_16_247->unk4 & 0xFFEF);
    if (temp_3_249 != -1) {
        goto block_42;
    }
    var_2_255 = 1;
    goto block_43;
block_42:
    var_2_255 = *(s32 *)((u8 *)((temp_3_249 * 0x28) + D_001A2C10.unk10) + 0x24) == 1;
block_43:
    temp_16_247->unk24 = var_2_255;
    if (!(temp_16_247->unk4 & 0x1000)) {
        goto block_46;
    }
    if (!((*((temp_16_247->unk0 * 0x10) + D_0013D5BC) ^ 1) & 1)) {
        goto block_46;
    }
    temp_16_247->unk24 = 0;
block_46:
    temp_3_283 = (var_5_238 * 0x28) + D_001A00F0.unk20;
    if (temp_3_283->unkA == 0) {
        goto block_50;
    }
    var_18_290 = 0;
    temp_3_283->unk4 = (u16) (temp_3_283->unk4 | 0x10);
    func_00208280(var_5_238, sp_slot);
    memset(&spA0, 0, 0x18);
    spA2 = temp_16_247->unk10;
    spB0 = 0xF;
    spA6 = temp_16_247->unkE;
    spA8 = 4;
    spAA = 4;
    spB2 = 4;
    /* m2c-unknown:  unknown instruction: ldl $a4, 0xa7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $a4, 0xa0($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $a5, 0xaf($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $a5, 0xa8($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $v0, 0xb7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0xb0($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a4, 0x87($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a5, 0x8f($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x97($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, 0x90($sp_slot)  */
    func_001F75F0(&sp80, (0x80FF << 0x10) | 0xA888, sp_slot, -1, 0 /*  unknown instruction: sdr $a4, 0x80($sp_slot)  */, 0 /*  unknown instruction: sdr $a5, 0x88($sp_slot)  */);
    temp_16_247->unk10 = (u16) (sp8E + 8);
loop_48:
    sp86 -= 4;
    var_f0_42 = func_001F75F0(&sp80, (0x80FF << 0x10) | 0xA888, sp_slot, -1);
    var_18_290 = (((s16) sp8E ^ (s16) sp8E) != 0) ? 1 : var_18_290;
    if (var_18_290 == 0) {
        goto loop_48;
    }
    temp_16_247->unkE = (u16) (sp86 + 4);
block_50:
    var_5_238 += 1;
    var_3_242 = var_5_238 * 0x28;
    if (!(*(s32 *)((u8 *)((var_5_238 * 0x28) + D_001A00F0.unk20) + 0x4) & 4)) {
        goto loop_40;
    }
block_51:
block_52:
    return var_f0_42;
}
#endif /* NON_MATCHING */
