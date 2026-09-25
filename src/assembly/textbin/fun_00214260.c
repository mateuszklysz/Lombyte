#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214260/FUN_00214260.s", FUN_00214260);
#else
#include "types.h"
struct M2c_D_0015FFD8 {
    u8 pad_0[0x8];
    s32 unk8;
};

struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct M2c_arg1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad_1C[0x4];
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

extern struct M2c_D_0015FFD8 D_0015FFD8;
extern f32 func_001F9988();
extern void sp10();
void FUN_00214260(s32 arg2, s32 arg3, struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
u8 sp_slot[0xD0];    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_f0_28;
    f32 temp_f0_35;
    f32 temp_f5_41;
    f32 temp_f6_18;
    f32 temp_f7_17;
    f32 temp_f8_19;
    f32 var_f5_111;
    s32 temp_17_98;
    s32 temp_18_92;
    s32 temp_19_94;
    s32 temp_20_88;
    s32 temp_2_125;
    s32 temp_3_120;
    s32 temp_7_121;
    s32 temp_8_122;
    s32 var_22_62;

    temp_f7_17 = arg1->unk0;
    temp_f6_18 = arg1->unk14;
    __asm__ volatile ("" : "+f" (temp_f6_18));
    temp_f8_19 = arg1->unk28;
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, ($sp_slot)  */
    temp_f0_28 = temp_f7_17 + temp_f6_18 + temp_f8_19;
    if (temp_f0_28 > 0.0f) {
        goto block_2;
    }
    goto block_4;
block_2:
    temp_f0_35 = func_001F9988(D_0015FFD8.unk8, &D_0015FFD8, temp_f0_28 + 1.0f);
    temp_f5_41 = 0.5f / temp_f0_35;
    arg0->unkC = (f32) (temp_f0_35 * 0.5f);
    arg0->unk0 = (f32) ((arg1->unk24 - arg1->unk18) * temp_f5_41);
    arg0->unk4 = (f32) ((arg1->unk8 - arg1->unk20) * temp_f5_41);
    arg0->unk8 = (f32) ((arg1->unk10 - arg1->unk4) * temp_f5_41);
    return;
block_4:
    var_22_62 = 0;
    sp14 = arg1->unk4;
    sp18 = arg1->unk8;
    sp1C = arg1->unk10;
    sp24 = arg1->unk18;
    sp28 = arg1->unk20;
    sp2C = arg1->unk24;
    sp10 = temp_f7_17;
    sp20 = temp_f6_18;
    sp30 = temp_f8_19;
    if (!(temp_f7_17 < temp_f6_18)) {
        goto block_6;
    }
    var_22_62 = 1;
block_6:
    if (!(*(&sp10 + (var_22_62 * 0x10)) < temp_f8_19)) {
        goto block_8;
    }
    var_22_62 = 2;
block_8:
    temp_20_88 = var_22_62 * 4;
    temp_18_92 = *(sp_slot + temp_20_88);
    temp_19_94 = temp_18_92 * 4;
    temp_17_98 = *(sp_slot + temp_19_94);
    var_f5_111 = func_001F9988(D_0015FFD8.unk8, &D_0015FFD8, (*(&sp10 + (var_22_62 * 0x10)) - (*(&sp10 + (temp_18_92 * 0x10)) + *(&sp10 + (temp_17_98 * 0x10)))) + 1.0f);
    *(((u8 *)arg0 + (temp_20_88))) = var_f5_111 * 0.5f;
    if (var_f5_111 == 0.0f) {
        goto block_10;
    }
    var_f5_111 = 0.5f / var_f5_111;
block_10:
    temp_3_120 = temp_17_98 * 4;
    temp_7_121 = temp_18_92 * 0xC;
    temp_8_122 = temp_17_98 * 0xC;
    temp_2_125 = var_22_62 * 0xC;
    arg0->unkC = (f32) ((*(&sp10 + (temp_19_94 + temp_8_122)) - *(&sp10 + (temp_3_120 + temp_7_121))) * var_f5_111);
    *(((u8 *)arg0 + (temp_19_94))) = (*(&sp10 + (temp_20_88 + temp_7_121)) + *(&sp10 + (temp_19_94 + temp_2_125))) * var_f5_111;
    *(((u8 *)arg0 + (temp_3_120))) = (*(&sp10 + (temp_20_88 + temp_8_122)) + *(&sp10 + (temp_3_120 + temp_2_125))) * var_f5_111;
    return;
}
#endif /* NON_MATCHING */
