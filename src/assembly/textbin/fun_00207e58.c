/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00207e58
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.0862%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207e58/FUN_00207e58.s", FUN_00207e58);
#else
#include "types.h"
extern s32 func_001F98D0();
void FUN_00207e58(s32 arg0, u8 *arg1) {
u8 sp_slot[0x4B0];    s32 sp400;
    s32 *var_3_22;
    s32 *var_5_85;
    s32 temp_16_108;
    s32 temp_16_113;
    s32 temp_18_86;
    s32 var_16_12;
    s32 var_20_83;
    s32 var_2_31;
    s32 var_2_38;
    s32 var_2_45;
    s32 var_2_52;
    s32 var_2_59;
    s32 var_2_66;
    s32 var_4_14;
    s32 var_6_87;
    u8 *var_19_10;
    u8 temp_2_90;

    var_19_10 = arg1;
    var_16_12 = arg0;
    var_4_14 = 0;
    var_3_22 = sp_slot;
loop_1:
    *var_3_22 = 0;
    if (!(var_4_14 & 1)) {
        goto block_3;
    }
    *var_3_22 = 0xF;
block_3:
    var_2_31 = var_4_14 & 4;
    if (!(var_4_14 & 2)) {
        goto block_5;
    }
    *var_3_22 |= 0xF0;
    var_2_31 = var_4_14 & 4;
block_5:
    var_2_38 = var_4_14 & 8;
    if (var_2_31 == 0) {
        goto block_7;
    }
    *var_3_22 |= 0xF00;
    var_2_38 = var_4_14 & 8;
block_7:
    var_2_45 = var_4_14 & 0x10;
    if (var_2_38 == 0) {
        goto block_9;
    }
    *var_3_22 |= 0xF000;
    var_2_45 = var_4_14 & 0x10;
block_9:
    var_2_52 = var_4_14 & 0x20;
    if (var_2_45 == 0) {
        goto block_11;
    }
    *var_3_22 |= 0xF0000;
    var_2_52 = var_4_14 & 0x20;
block_11:
    var_2_59 = var_4_14 & 0x40;
    if (var_2_52 == 0) {
        goto block_13;
    }
    *var_3_22 |= 0xF00000;
    var_2_59 = var_4_14 & 0x40;
block_13:
    var_2_66 = var_4_14 & 0x80;
    if (var_2_59 == 0) {
        goto block_15;
    }
    *var_3_22 |= 0x0F000000;
    var_2_66 = var_4_14 & 0x80;
block_15:
    var_4_14 += 1;
    if (var_2_66 == 0) {
        goto block_17;
    }
    *var_3_22 |= 0xF0000000;
block_17:
    var_3_22 += 4;
    if (var_4_14 < 0x100) {
        goto loop_1;
    }
    var_20_83 = 1;
loop_19:
    var_5_85 = &sp400;
    temp_18_86 = var_16_12 + 0x40;
    var_6_87 = 0xF;
loop_20:
    temp_2_90 = *var_19_10;
    var_6_87 -= 1;
    var_19_10 += 1;
    *var_5_85 = *(sp_slot + (temp_2_90 * 4));
    var_5_85 += 4;
    if (var_6_87 >= 0) {
        goto loop_20;
    }
    func_001F98D0(var_16_12, &sp400, 0x40);
    temp_16_108 = temp_18_86 + 0x40;
    func_001F98D0(temp_18_86, &sp400, 0x40);
    temp_16_113 = temp_16_108 + 0x40;
    func_001F98D0(temp_16_108, &sp400, 0x40);
    var_16_12 = temp_16_113 + 0x40;
    func_001F98D0(temp_16_113, &sp400, 0x40);
    var_20_83 += 1;
    if (var_20_83 < 0x80) {
        goto loop_19;
    }
    return;
}
#endif /* NON_MATCHING */
