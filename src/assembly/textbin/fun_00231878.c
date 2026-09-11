/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00231878
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 61.7302%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231878/FUN_00231878.s", FUN_00231878);
#else
#include "rnc/assembly_textbin_fun_00231878_types.h"
#include "types.h"










extern u8 D_00137B80[];
extern u32 D_0015EE74[];
extern u32 D_0015EE78[];
extern u32 D_0015EE8C[];
extern struct M2c_D_001940C0 D_001940C0;
extern s32 func_00118A80();
extern s32 func_00120558();
extern s32 func_00120C30();
extern s32 func_00122330();
extern s32 func_00122658();
extern s32 func_0020B618();
extern s32 func_00216728();
void FUN_00231878(s32 arg0, s32 arg1, s32 arg2, s64 *arg3, s64 *arg4, s64 *arg5) {    s32 sp0;
u8 sp_slot[0x130];    s32 sp10;
    s32 sp14;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp20;
    s64 *sp80;
    s64 *sp84;
    s32 *var_18_56;
    s32 var_17_72;
    s32 var_21_27;
    s32 var_2_74;
    s32 var_2_92;
    s64 temp_5_197;
    s64 temp_8_188;
    struct M2c_temp_19_44 *temp_19_44;
    struct M2c_temp_22_49 *temp_22_49;
    struct M2c_temp_23_53 *temp_23_53;
    struct M2c_temp_3_14 *temp_3_14;
    s32 *var_16_147;

    temp_3_14 = D_00137B80 + (arg0 * 8);
    var_21_27 = 0;
    sp80 = arg4;
    sp84 = arg5;
    func_00216728(D_001940C0.unk14 + 0x100000, temp_3_14->unk1388, temp_3_14->unk138C, D_001940C0.unk14);
    func_00120C30(0);
    func_00118A80(0);
    func_0020B618(D_001940C0.unk14 + 0x100000, D_001940C0.unk14);
    func_00118A80(0);
    temp_19_44 = D_001940C0.unk14;
    temp_22_49 = ((u8 *)temp_19_44 + ((arg2 * 4)));
    D_0015EE78[0] = D_0015EE8C[0];
    temp_23_53 = ((u8 *)temp_19_44 + ((arg1 * 4)));
    D_0015EE74[0] = D_0015EE8C[0];
    var_18_56 = sp_slot;
loop_1:
    if (var_21_27 != 0) {
        goto block_3;
    }
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_72 = 0x400;
    var_2_74 = temp_19_44->unk4;
    goto block_11;
block_3:
    if (var_21_27 != 1) {
        goto block_5;
    }
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 1, 0x13, 0, 0, 0x40, 0x40);
    var_17_72 = 0x1000;
    var_2_92 = temp_19_44->unk4;
    goto block_13;
block_5:
    if (var_21_27 != 2) {
        goto block_7;
    }
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_72 = 0x400;
    var_2_74 = temp_23_53->unk8;
    goto block_11;
block_7:
    if (var_21_27 != 3) {
        goto block_9;
    }
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 8, 0x13, 0, 0, 0x200, 0x40);
    var_17_72 = 0x8000;
    var_2_92 = temp_23_53->unk8;
    goto block_13;
block_9:
    if (var_21_27 != 4) {
        goto block_12;
    }
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_72 = 0x400;
    var_2_74 = temp_22_49->unk8;
block_11:
    var_16_147 = ((u8 *)temp_19_44 + (var_2_74 ))+ 0x20;
    goto block_14;
block_12:
    func_00122330(&sp20, (s32) (D_0015EE74[0] << 8) >> 0x10, 8, 0x13, 0, 0, 0x200, 0x40);
    var_17_72 = 0x8000;
    var_2_92 = temp_22_49->unk8;
block_13:
    var_16_147 = ((u8 *)temp_19_44 + (var_2_92 ))+ 0x420;
block_14:
    var_21_27 += 1;
    func_00118A80(0);
    func_00122658(&sp20, var_16_147);
    func_00120558(0, 0);
    *var_18_56 = (s32) D_0015EE74[0] >> 8;
    D_0015EE74[0] += var_17_72;
    var_18_56 += 4;
    if (var_21_27 < 6) {
        goto loop_1;
    }
    temp_8_188 = 0xB000 << 0x13;
    temp_5_197 = -1 << 0x3F;
    *arg3 = sp4 | 0x19304000 | (((s64) sp0 << 0x25) | temp_8_188) | temp_5_197;
    *sp80 = spC | 0x25320000 | (((s64) sp8 << 0x25) | temp_8_188) | temp_5_197;
    *sp84 = sp14 | 0x25320000 | (((s64) sp10 << 0x25) | temp_8_188) | temp_5_197;
    return;
}
#endif /* NON_MATCHING */
