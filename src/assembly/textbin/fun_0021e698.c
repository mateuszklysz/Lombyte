#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e698/FUN_0021e698.s", FUN_0021e698);
#else
#include "rnc/assembly_textbin_fun_0021e698_types.h"
#include "types.h"










extern struct M2c_D_00186F40 D_00186F40;
extern u8 D_001E0408[];
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
void FUN_0021e698(struct M2c_arg0 *arg0) {
    f32 temp_f0_59;
    f32 temp_f20_54;
    f32 temp_f22_56;
    f32 temp_f23_60;
    f32 var_f0_29;
    s32 temp_4_24;
    s32 temp_4_32;
    s32 temp_5_16;
    s32 var_6_26;
    struct M2c_temp_2_14 *temp_2_14;
    struct M2c_temp_2_41 *temp_2_41;
    struct M2c_temp_3_15 *temp_3_15;

    temp_2_14 = arg0->unk78;
    temp_3_15 = temp_2_14->unk0;
    temp_5_16 = temp_2_14->unkC;
    arg0->unk48 = (f32) temp_3_15->unk38;
    if (temp_3_15->unk30 & 1) {
        temp_4_24 = temp_5_16 << 5;
        var_6_26 = temp_4_24;
        var_f0_29 = *(temp_4_24 + D_001E0408);
    __asm__ volatile ("" : "+f" (var_f0_29));
    } else {
        temp_4_32 = temp_5_16 << 5;
        var_6_26 = temp_4_32;
        var_f0_29 = *(s32 *)((u8 *)(D_001E0408 + temp_4_32) + 0x4);
    }
    arg0->unk10 = (f32) (D_00186F40.unk140 + var_f0_29);
    temp_2_41 = D_001E0408 + var_6_26;
    arg0->unk14 = (f32) (D_00186F40.unk144 + temp_2_41->unk8);
    arg0->unk18 = (f32) (D_00186F40.unk148 + temp_2_41->unkC);
    temp_f20_54 = temp_2_41->unk1C;
    temp_f22_56 = temp_2_41->unk18;
    temp_f23_60 = func_001F9DC8(&D_00186F40, temp_2_41, var_6_26, &D_00186F40, arg0->unk48);
    temp_f0_59 = func_001F9DE0(arg0->unk48);
    arg0->unk14 = (f32) (arg0->unk14 + ((temp_f20_54 * temp_f23_60) + (temp_f22_56 * temp_f0_59)));
    arg0->unk10 = (f32) (arg0->unk10 + ((-temp_f20_54 * temp_f0_59) + (temp_f22_56 * temp_f23_60)));
}

extern void func_0021E698(struct M2c_arg0 *arg0) __attribute__((alias("FUN_0021e698")));
#endif /* NON_MATCHING */
