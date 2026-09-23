#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ebf10/FUN_001ebf10.s", FUN_001ebf10);
#else
#include "types.h"
struct M2c_D_00186F40 {
    u8 pad_0[0x140];
    s64 unk140;
    u8 pad_148[0x38];
    s32 unk180;
    struct M2c_D_00186F40_unk184 * unk184;
    u8 pad_188[0xE8];
    s32 unk270;
    s32 unk273;
    u8 pad_277[0x11];
    s32 unk288;
    u8 pad_28C[0x8];
    s32 unk294;
    u8 pad_298[0x5C];
    s32 unk2F4;
    u8 pad_2F8[0xA0];
    s32 unk398;
};

struct M2c_D_00186F40_unk184 {
    u8 pad_0[0x70];
    s32 unk70;
};

struct M2c_arg0 {
    s64 unk0;
    u8 pad_8[0x8];
    s64 unk10;
    u8 pad_18[0x8];
    s64 unk20;
    u8 pad_28[0x8];
    s32 unk30;
    u8 pad_34[0x30];
    s32 unk64;
    u8 pad_68[0x8];
    s32 unk70;
    u8 pad_74[0x4];
    s32 unk78;
    u8 pad_7C[0x1];
    s32 unk7D;
    u8 pad_81[0x3];
    s32 unk84;
    u8 pad_88[0x6];
    s32 unk8E;
};

struct M2c_temp_20_19 {
    s32 unk0;
    u8 pad_4[0xC];
    s32 unk10;
    u8 pad_14[0xC];
    s32 unk20;
    u8 pad_24[0xC];
    s32 unk30;
    u8 pad_34[0x49];
    u8 unk7D;
    s16 unk7E;
    u8 pad_80[0xE];
    s16 unk8E;
    u8 pad_90[0x2];
};

struct M2c_temp_2_201 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
};

struct M2c_temp_2_22 {
    u8 pad_0[0x1D];
    s32 unk1D;
};

struct M2c_var_19_31 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 D_0015ED84;
extern s32 D_0015EF90;
extern struct M2c_D_00186F40 D_00186F40;
extern u8 D_00189650[];
extern s32 D_0018C32C[];
extern void func_001EBC90();
extern void func_001EBEC8();
extern void func_001F98D0();
extern s32 func_001FA6D0();
void FUN_001ebf10(struct M2c_arg0 *arg0, s32 arg1) {
    f32 temp_f12_69;
    f32 temp_f1_129;
    f32 temp_f1_47;
    struct M2c_var_19_31 *var_19_31;
    s64 *var_6_96;
    s16 temp_4_24;
    s16 var_2_88;
    s32 var_2_76;
    s32 var_5_0;
    u8 var_7_6;
    s32 *temp_17_176;
    struct M2c_temp_20_19 *temp_20_19;
    struct M2c_temp_2_201 *temp_2_201;
    struct M2c_temp_2_22 *temp_2_22;

    var_5_0 = arg1;
    var_7_6 = 0;
    temp_20_19 = D_00186F40.unk180;
    temp_2_22 = *(s32 *)((u8 *)((arg0->unk84 << 5) + D_0015EF90) + 0x1C);
    temp_4_24 = temp_20_19->unk7E;
    if (temp_2_22 == NULL) {
        goto block_2;
    }
    var_7_6 = temp_2_22->unk1D;
block_2:
    if (temp_4_24 != 4) {
        goto block_4;
    }
    var_19_31 = ((u8 *)arg0) + 0x30;
    arg0->unk8E = 1;
    goto block_38;
block_4:
    if (temp_4_24 == 2) {
        goto block_8;
    }
    var_5_0 = 1;
    if (var_7_6 == 1) {
        goto block_9;
    }
    if (var_7_6 != 5) {
        goto block_21;
    }
block_8:
    if (var_7_6 != 1) {
        goto block_12;
    }
block_9:
    temp_f1_47 = arg0->unk78;
    D_00186F40.unk273 = 0;
    if (!(temp_f1_47 > 0.0f)) {
        goto block_11;
    }
    D_00186F40.unk288 = temp_f1_47;
    D_00186F40.unk294 = temp_f1_47;
    goto block_17;
block_11:
    D_00186F40.unk288 = 0.018f;
    D_00186F40.unk294 = 0.018f;
    goto block_17;
block_12:
    if (var_7_6 != 5) {
        goto block_18;
    }
    temp_f12_69 = arg0->unk78;
    D_00186F40.unk273 = 2;
    if (!(temp_f12_69 > 0.0f)) {
        goto block_15;
    }
    var_2_76 = func_001FA6D0(temp_4_24, var_5_0, 2, var_7_6, temp_f12_69);
    goto block_16;
block_15:
    var_2_76 = 0x28;
block_16:
    D_00186F40.unk2F4 = var_2_76;
block_17:
block_18:
    var_2_88 = 2;
    if (D_00186F40.unk270 != 0) {
        goto block_20;
    }
    var_2_88 = 1;
block_20:
    var_19_31 = ((u8 *)arg0) + 0x30;
    D_00186F40.unk270 = var_2_88;
    goto block_38;
block_21:
    var_6_96 = ((u8 *)arg0) + 0x30;
    if (temp_4_24 == 3) {
        goto block_28;
    }
    if (temp_4_24 == 5) {
        goto block_28;
    }
    if (var_7_6 == 3) {
        goto block_28;
    }
    if (var_7_6 == 6) {
        goto block_26;
    }
    arg0->unk8E = 1;
    goto block_37;
block_26:
    var_6_96 = ((u8 *)arg0) + 0x30;
block_28:
    *var_6_96 = temp_20_19->unk30;
    arg0->unk0 = (s64) temp_20_19->unk0;
    arg0->unk10 = (s64) temp_20_19->unk10;
    arg0->unk20 = (s64) temp_20_19->unk20;
    arg0->unk7D = 2;
    var_19_31 = var_6_96;
    if (temp_20_19->unk7E == 5) {
        goto block_30;
    }
    if (var_7_6 != 6) {
        goto block_39;
    }
block_30:
    temp_f1_129 = arg0->unk78;
    D_00186F40.unk273 = 0;
    if (!(temp_f1_129 > 0.0f)) {
        goto block_32;
    }
    D_00186F40.unk288 = temp_f1_129;
    D_00186F40.unk294 = temp_f1_129;
    goto block_34;
block_32:
    D_00186F40.unk288 = 0.018f;
    D_00186F40.unk294 = 0.018f;
    if (D_0015ED84 != 1) {
        goto block_34;
    }
    D_00186F40.unk288 = 0.01f;
    D_00186F40.unk294 = 0.01f;
block_34:
    if (D_00186F40.unk270 != 0) {
        goto block_36;
    }
    D_00186F40.unk270 = 1;
    goto block_38;
block_36:
    D_00186F40.unk270 = 2;
    goto block_38;
block_37:
    var_19_31 = ((u8 *)arg0) + 0x30;
block_38:
block_39:
    temp_20_19->unk7E = 0;
    temp_20_19->unk7D = 0;
    temp_17_176 = ((u8 *)D_00189650 - (u8 *)0x280);
    temp_20_19->unk8E = 0;
    D_00186F40.unk184 = temp_20_19;
    func_001F98D0(D_00189650, temp_17_176, 0x280);
    D_00186F40.unk184->unk70 = D_00189650;
    D_00186F40.unk180 = arg0;
    arg0->unk70 = temp_17_176;
    D_00186F40.unk398 = 0;
    func_001EBEC8(arg0);
    func_001EBC90();
    if (D_0018C32C[0] != 0) {
        goto block_41;
    }
    D_00186F40.unk140 = (s64) var_19_31->unk0;
block_41:
    temp_2_201 = ((u8 *)arg0) + 0x64;
    arg0->unk64 = (f32) arg0->unk30;
    temp_2_201->unk4 = (f32) var_19_31->unk4;
    temp_2_201->unk8 = (f32) var_19_31->unk8;
    return;
}

extern void func_001EBF10(struct M2c_arg0 *arg0, s32 arg1) __attribute__((alias("FUN_001ebf10")));
#endif /* NON_MATCHING */
