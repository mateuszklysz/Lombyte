/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00207e58
SCORE: code=57.2759 functions=57.2759 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
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
    s32 *var_3_20;
    s32 *var_5_83;
    s32 temp_16_106;
    s32 temp_16_111;
    s32 temp_18_84;
    s32 var_16_10;
    s32 var_20_81;
    s32 var_2_29;
    s32 var_2_36;
    s32 var_2_43;
    s32 var_2_50;
    s32 var_2_57;
    s32 var_2_64;
    s32 var_4_12;
    s32 var_6_85;
    u8 *var_19_8;
    u8 temp_2_88;

    var_19_8 = arg1;
    var_16_10 = arg0;
    var_4_12 = 0;
    var_3_20 = sp_slot;
loop_1:
    *var_3_20 = 0;
    if (!(var_4_12 & 1)) {
        goto block_3;
    }
    *var_3_20 = 0xF;
block_3:
    var_2_29 = var_4_12 & 4;
    if (!(var_4_12 & 2)) {
        goto block_5;
    }
    *var_3_20 |= 0xF0;
    var_2_29 = var_4_12 & 4;
block_5:
    var_2_36 = var_4_12 & 8;
    if (var_2_29 == 0) {
        goto block_7;
    }
    *var_3_20 |= 0xF00;
    var_2_36 = var_4_12 & 8;
block_7:
    var_2_43 = var_4_12 & 0x10;
    if (var_2_36 == 0) {
        goto block_9;
    }
    *var_3_20 |= 0xF000;
    var_2_43 = var_4_12 & 0x10;
block_9:
    var_2_50 = var_4_12 & 0x20;
    if (var_2_43 == 0) {
        goto block_11;
    }
    *var_3_20 |= 0xF0000;
    var_2_50 = var_4_12 & 0x20;
block_11:
    var_2_57 = var_4_12 & 0x40;
    if (var_2_50 == 0) {
        goto block_13;
    }
    *var_3_20 |= 0xF00000;
    var_2_57 = var_4_12 & 0x40;
block_13:
    var_2_64 = var_4_12 & 0x80;
    if (var_2_57 == 0) {
        goto block_15;
    }
    *var_3_20 |= 0x0F000000;
    var_2_64 = var_4_12 & 0x80;
block_15:
    var_4_12 += 1;
    if (var_2_64 == 0) {
        goto block_17;
    }
    *var_3_20 |= 0xF0000000;
block_17:
    var_3_20 += 1;
    if (var_4_12 < 0x100) {
        goto loop_1;
    }
    var_20_81 = 1;
loop_19:
    var_5_83 = &sp400;
    temp_18_84 = var_16_10 + 0x40;
    var_6_85 = 0xF;
loop_20:
    temp_2_88 = *var_19_8;
    var_6_85 -= 1;
    var_19_8 += 1;
    *var_5_83 = *(sp_slot + (temp_2_88 * 4));
    var_5_83 += 1;
    if (var_6_85 >= 0) {
        goto loop_20;
    }
    func_001F98D0(var_16_10, &sp400, 0x40);
    temp_16_106 = temp_18_84 + 0x40;
    func_001F98D0(temp_18_84, &sp400, 0x40);
    temp_16_111 = temp_16_106 + 0x40;
    func_001F98D0(temp_16_106, &sp400, 0x40);
    var_16_10 = temp_16_111 + 0x40;
    func_001F98D0(temp_16_111, &sp400, 0x40);
    var_20_81 += 1;
    if (var_20_81 < 0x80) {
        goto loop_19;
    }
    return;
}
#endif /* NON_MATCHING */
