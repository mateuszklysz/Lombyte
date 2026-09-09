/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 24.5732%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214260/FUN_00214260.s", FUN_00214260);
#else
#include "rnc/assembly_textbin_fun_00214260_types.h"
#include "types.h"






extern struct M2c_D_0015FFD8 D_0015FFD8;
extern s32 func_001F9988();
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
    f32 temp_f0_30;
    f32 temp_f0_37;
    f32 temp_f5_43;
    f32 temp_f6_20;
    f32 temp_f7_19;
    f32 temp_f8_21;
    f32 var_f5_113;
    s32 temp_17_100;
    s32 temp_18_94;
    s32 temp_19_96;
    s32 temp_20_90;
    s32 temp_2_127;
    s32 temp_3_122;
    s32 temp_7_123;
    s32 temp_8_124;
    s32 var_22_64;

    temp_f7_19 = arg1->unk0;
    temp_f6_20 = arg1->unk14;
    temp_f8_21 = arg1->unk28;
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, ($sp_slot)  */
    temp_f0_30 = temp_f7_19 + temp_f6_20 + temp_f8_21;
    if (temp_f0_30 > 0.0f) {
        goto block_2;
    }
    goto block_4;
block_2:
    temp_f0_37 = func_001F9988(D_0015FFD8.unk8, &D_0015FFD8, temp_f0_30 + 1.0f);
    temp_f5_43 = 0.5f / temp_f0_37;
    arg0->unkC = (f32) (temp_f0_37 * 0.5f);
    arg0->unk0 = (f32) ((arg1->unk24 - arg1->unk18) * temp_f5_43);
    arg0->unk4 = (f32) ((arg1->unk8 - arg1->unk20) * temp_f5_43);
    arg0->unk8 = (f32) ((arg1->unk10 - arg1->unk4) * temp_f5_43);
    return;
block_4:
    var_22_64 = 0;
    sp14 = arg1->unk4;
    sp18 = arg1->unk8;
    sp1C = arg1->unk10;
    sp24 = arg1->unk18;
    sp28 = arg1->unk20;
    sp2C = arg1->unk24;
    sp10 = temp_f7_19;
    sp20 = temp_f6_20;
    sp30 = temp_f8_21;
    if (!(temp_f7_19 < temp_f6_20)) {
        goto block_6;
    }
    var_22_64 = 1;
block_6:
    if (!(*(&sp10 + (var_22_64 * 0x10)) < temp_f8_21)) {
        goto block_8;
    }
    var_22_64 = 2;
block_8:
    temp_20_90 = var_22_64 * 4;
    temp_18_94 = *(sp_slot + temp_20_90);
    temp_19_96 = temp_18_94 * 4;
    temp_17_100 = *(sp_slot + temp_19_96);
    var_f5_113 = func_001F9988(D_0015FFD8.unk8, &D_0015FFD8, (*(&sp10 + (var_22_64 * 0x10)) - (*(&sp10 + (temp_18_94 * 0x10)) + *(&sp10 + (temp_17_100 * 0x10)))) + 1.0f);
    *(((u8 *)arg0 + (temp_20_90))) = var_f5_113 * 0.5f;
    if (var_f5_113 == 0.0f) {
        goto block_10;
    }
    var_f5_113 = 0.5f / var_f5_113;
block_10:
    temp_3_122 = temp_17_100 * 4;
    temp_7_123 = temp_18_94 * 0xC;
    temp_8_124 = temp_17_100 * 0xC;
    temp_2_127 = var_22_64 * 0xC;
    arg0->unkC = (f32) ((*(&sp10 + (temp_19_96 + temp_8_124)) - *(&sp10 + (temp_3_122 + temp_7_123))) * var_f5_113);
    *(((u8 *)arg0 + (temp_19_96))) = (*(&sp10 + (temp_20_90 + temp_7_123)) + *(&sp10 + (temp_19_96 + temp_2_127))) * var_f5_113;
    *(((u8 *)arg0 + (temp_3_122))) = (*(&sp10 + (temp_20_90 + temp_8_124)) + *(&sp10 + (temp_3_122 + temp_2_127))) * var_f5_113;
    return;
}
#endif /* NON_MATCHING */
