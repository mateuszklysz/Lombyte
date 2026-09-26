#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e698/FUN_0021e698.s", FUN_0021e698);
#else
#include "types.h"

struct D_00186F40_s {
    u8 pad_0[0x140];
    f32 unk140;
    f32 unk144;
    f32 unk148;
};

struct M2c_temp_3_15 {
    u8 pad_0[0x30];
    s32 unk30;
    u8 pad_34[4];
    f32 unk38;
};

struct M2c_temp_2_14 {
    struct M2c_temp_3_15 *unk0;
    u8 pad_4[8];
    s32 unkC;
};

struct M2c_temp_2_41 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad_10[8];
    f32 unk18;
    f32 unk1C;
};

struct M2c_arg0 {
    u8 pad_0[0x10];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad_1C[0x2C];
    f32 unk48;
    u8 pad_4C[0x2C];
    struct M2c_temp_2_14 *unk78;
};

extern struct D_00186F40_s D_00186F40;
extern struct M2c_temp_2_41 D_001E0408[];
extern f32 func_001F9DC8(s32, s32, s32, s32, f32);
extern f32 func_001F9DE0(f32);

void FUN_0021e698(struct M2c_arg0 *arg0) {
    struct M2c_temp_2_14 *temp_2_14;
    struct M2c_temp_3_15 *temp_3_15;
    struct M2c_temp_2_41 *temp_2_41;
    f32 var_f0_29;
    f32 var_f20_41;
    f32 var_f22_41;
    f32 var_f23_60;
    f32 var_f0_59;
    f32 var_f21_54;
    f32 var_f140;
    s32 temp_5_16;

    temp_2_14 = arg0->unk78;
    temp_3_15 = temp_2_14->unk0;
    temp_5_16 = temp_2_14->unkC;
    arg0->unk48 = temp_3_15->unk38;
    var_f140 = D_00186F40.unk140;
    if (temp_3_15->unk30 & 1) {
        var_f0_29 = D_001E0408[temp_5_16].unk0;
    } else {
        var_f0_29 = D_001E0408[temp_5_16].unk4;
    }
    arg0->unk10 = var_f140 + var_f0_29;
    temp_2_41 = &D_001E0408[temp_5_16];
    arg0->unk14 = D_00186F40.unk144 + temp_2_41->unk8;
    arg0->unk18 = D_00186F40.unk148 + temp_2_41->unkC;
    var_f20_41 = temp_2_41->unk1C;
    var_f22_41 = temp_2_41->unk18;
    var_f23_60 = func_001F9DC8(&D_00186F40, temp_2_41, temp_5_16 << 5, 0x180000, arg0->unk48);
    var_f21_54 = -var_f20_41;
    var_f0_59 = func_001F9DE0(arg0->unk48);
    arg0->unk14 = arg0->unk14 + (var_f20_41 * var_f23_60 + var_f22_41 * var_f0_59);
    arg0->unk10 = arg0->unk10 + (var_f21_54 * var_f0_59 + var_f22_41 * var_f23_60);
}

extern void func_0021E698(struct M2c_arg0 *arg0) __attribute__((alias("FUN_0021e698")));
#endif /* NON_MATCHING */
