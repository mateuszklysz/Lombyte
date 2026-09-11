/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00207c28
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.3000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207c28/FUN_00207c28.s", FUN_00207c28);
#else
#include "rnc/assembly_textbin_fun_00207c28_types.h"
#include "types.h"
















extern s32 func_001F97E8();
extern s32 func_001F98D0();
void FUN_00207c28(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 temp_20_34;
    s32 temp_30_12;
    s32 temp_4_109;
    s32 var_23_10;
    s8 *var_18_28;
    s8 var_22_26;
    u32 var_16_31;
    u8 *var_19_29;
    u8 *var_4_124;
    u8 *var_5_121;
    u8 *var_6_66;
    u8 temp_2_127;
    u8 temp_3_68;
    u8 temp_3_74;
    u8 temp_3_79;
    u8 temp_3_84;
    u8 temp_3_89;
    u8 temp_3_94;
    u8 temp_3_99;
    u8 var_3_38;
    struct M2c_temp_5_69 *temp_5_69;
    struct M2c_temp_5_72 *temp_5_72;
    struct M2c_temp_5_77 *temp_5_77;
    struct M2c_temp_5_82 *temp_5_82;
    struct M2c_temp_5_87 *temp_5_87;
    struct M2c_temp_5_92 *temp_5_92;
    struct M2c_var_17_20 *var_17_20;
    struct M2c_var_5_65 *var_5_65;

    var_23_10 = arg0;
    temp_30_12 = var_23_10 + 0x8000;
    var_17_20 = arg2;
    var_22_26 = 1;
    var_18_28 = (s8 *)0x70000000;
    var_19_29 = arg1 + 1;
    var_16_31 = (u8) *arg1 >> 1;
    func_001F97E8(0x70000000, 0, 0x2400);
loop_1:
    temp_20_34 = var_23_10 + 0x400;
loop_2:
    var_3_38 = var_17_20->unk1;
    var_18_28 += var_17_20->unk0;
    var_17_20 = ((u8 *)var_17_20 + (1 ))+ 1;
    if (var_3_38 == 0) {
        goto block_8;
    }
loop_4:
    var_3_38 -= 1;
    if (var_16_31 != 0) {
        goto block_7;
    }
loop_6:
    var_16_31 = (u32) *var_19_29;
    var_22_26 = var_22_26 == 0;
    var_19_29 += 1;
    if (var_16_31 == 0) {
        goto loop_6;
    }
block_7:
    *var_18_28 = var_22_26;
    var_16_31 -= 1;
    var_18_28 += 1;
    if (var_3_38 != 0) {
        goto loop_4;
    }
block_8:
    if ((u32) var_18_28 < 0x70002000U) {
        goto loop_2;
    }
    var_5_65 = (void *)0x70000000;
    var_6_66 = (u8 *)0x70000000;
loop_10:
    temp_3_68 = var_5_65->unk0;
    temp_5_69 = ((u8 *)var_5_65 + (1));
    *var_6_66 = temp_3_68;
    temp_5_72 = ((u8 *)temp_5_69 + (1));
    temp_3_74 = temp_3_68 | (var_5_65->unk1 * 2);
    *var_6_66 = temp_3_74;
    temp_5_77 = ((u8 *)temp_5_72 + (1));
    temp_3_79 = temp_3_74 | (temp_5_69->unk1 * 4);
    *var_6_66 = temp_3_79;
    temp_5_82 = ((u8 *)temp_5_77 + (1));
    temp_3_84 = temp_3_79 | (temp_5_72->unk1 * 8);
    *var_6_66 = temp_3_84;
    temp_5_87 = ((u8 *)temp_5_82 + (1));
    temp_3_89 = temp_3_84 | (temp_5_77->unk1 * 0x10);
    *var_6_66 = temp_3_89;
    temp_5_92 = ((u8 *)temp_5_87 + (1));
    temp_3_94 = temp_3_89 | (temp_5_82->unk1 << 5);
    *var_6_66 = temp_3_94;
    temp_3_99 = temp_3_94 | (temp_5_87->unk1 << 6);
    *var_6_66 = temp_3_99;
    var_5_65 = ((u8 *)temp_5_92 + (1 ))+ 1;
    *var_6_66 = temp_3_99 | (temp_5_92->unk1 << 7);
    var_6_66 += 1;
    if ((u32) var_5_65 < 0x70002000U) {
        goto loop_10;
    }
    temp_4_109 = var_23_10;
    var_23_10 = temp_20_34;
    func_001F98D0(temp_4_109, 0x70000000, 0x400);
    if (temp_20_34 == temp_30_12) {
        goto block_16;
    }
    func_001F97E8(0x70000000, 0, 0x2000);
    var_5_121 = (u8 *)0x70000000;
    var_4_124 = (u8 *)0x70002000;
    if ((u32) var_18_28 <= 0x70002000U) {
        goto block_15;
    }
loop_14:
    temp_2_127 = *var_4_124;
    var_4_124 += 1;
    *var_5_121 = temp_2_127;
    var_5_121 += 1;
    if ((u32) var_4_124 < (u32) var_18_28) {
        goto loop_14;
    }
block_15:
    func_001F97E8(0x70002000, 0, 0x400);
    var_18_28 -= 0x2000;
    goto loop_1;
block_16:
    return;
}
#endif /* NON_MATCHING */
