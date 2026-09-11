/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022df40
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022df40/FUN_0022df40.s", FUN_0022df40);
#else
#include "rnc/assembly_textbin_fun_0022df40_types.h"
#include "types.h"






extern struct M2c_D_0013E030 D_0013E030;
extern s32 D_0015F604;
extern u8 D_001D97B0[];
extern u8 D_001D97D0[];
extern s32 func_001F44B8();
extern s32 func_001F7D30();
extern s32 func_001F96F8();
extern s32 func_001F98D0();
extern s32 func_001F9A10();
extern s32 func_001F9A68();
extern s32 func_001F9A80();
extern s32 func_001F9CF8();
extern s32 func_001FA820();
extern s32 func_00213508();
void FUN_0022df40(struct M2c_arg0 *arg0) {
u8 sp_slot[0x170];    s32 sp10;
    s32 sp50;
    s32 sp60;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s32 spA0;
    s32 spB0;
    struct M2c_var_16_103 *var_16_103;
    s32 *var_20_101;
    f32 var_f20_87;
    s16 temp_16_40;
    s32 *var_17_104;
    s32 temp_4_52;
    s32 var_19_105;
    s64 temp_2_59;
    s32 *temp_21_61;
    s32 *temp_5_117;

    spB0 = 0;
    func_001F9A80(sp_slot, arg0, 0x3A800000);
    if (func_001FA820(sp_slot, &spB0, 0x42000000) < 0) {
        goto block_10;
    }
    if (D_0015F604 != 6) {
        goto block_5;
    }
    if (D_0013E030.unk20 != 3) {
        goto block_5;
    }
    temp_16_40 = D_0013E030.unk24;
    if (func_001F96F8(0x96) >= temp_16_40) {
        goto block_5;
    }
    temp_4_52 = spB0 - ((D_0013E030.unk24 - func_001F96F8(0x96)) * 4);
    spB0 = temp_4_52;
    if (temp_4_52 <= 0) {
        goto block_10;
    }
block_5:
    temp_2_59 = func_001F44B8(0);
    temp_21_61 = ((u8 *)arg0 + (0x10));
    sp98 = (0x8000 << 0x18) | 0x44;
    sp88 = temp_2_59;
    sp90 = (0xFF90 << 0x20) | 0x260;
    sp80 = 0;
    func_001F98D0(&sp60, D_001D97B0, 0x20);
    func_001F9A68(&spA0, arg0, 0x3A800000);
    var_f20_87 = arg0->unk18 + 0.1f;
    if (D_0015F604 != 6) {
        goto block_7;
    }
    var_f20_87 = func_00213508(temp_21_61, 0, 0x3F000000) + 0.1f;
block_7:
    var_20_101 = D_001D97D0;
    var_16_103 = &sp10;
    var_17_104 = &sp50;
    var_19_105 = 3;
loop_8:
    var_19_105 -= 1;
    temp_5_117 = (D_0013E030.unk26 << 6) + var_20_101;
    *var_17_104 = ((spB0 >> 1) << 0x18) | 0x808080;
    var_20_101 += 0x10;
    func_001F9CF8(var_16_103, temp_5_117, ((u8 *)arg0 + (0xC0)));
    var_17_104 += 4;
    func_001F9A10(var_16_103, var_16_103, temp_21_61);
    var_16_103->unk8 = var_f20_87;
    var_16_103 += 0x10;
    if (var_19_105 >= 0) {
        goto loop_8;
    }
    func_001F7D30(&sp10, 0, 0);
block_10:
    return;
}
#endif /* NON_MATCHING */
