/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020bc00
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020bc00/FUN_0020bc00.s", FUN_0020bc00);
#else
#include "rnc/assembly_textbin_fun_0020bc00_types.h"
#include "types.h"


extern u32 D_001A2C20[];
s32 FUN_0020bc00(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s16 var_2_50;
    s16 var_8_26;
    s32 *var_4_0;
    s32 *var_6_0;
    s32 var_11_6;
    s32 var_12_8;
    u16 temp_3_30;
    struct M2c_var_9_7 *var_9_7;

    var_4_0 = arg0;
    var_6_0 = arg2;
    var_11_6 = 0;
    var_9_7 = D_001A2C20[0];
    var_12_8 = 1;
    *var_4_0 = 0;
    if (arg1 == NULL) {
        goto block_2;
    }
    *arg1 = 0;
block_2:
    if (var_6_0 == NULL) {
        goto block_4;
    }
    *var_6_0 = -1;
block_4:
    if (var_9_7 == NULL) {
        goto block_6;
    }
    goto block_8;
block_6:
    return 0;
block_8:
    if (var_9_7->unk0 == 0) {
        goto block_31;
    }
    var_8_26 = var_9_7->unk24;
loop_10:
    temp_3_30 = var_9_7->unk10;
    if (var_8_26 == 2) {
        goto block_12;
    }
    var_12_8 = !(temp_3_30 & 2) ? 0 : var_12_8;
block_12:
    if (temp_3_30 & 2) {
        goto block_28;
    }
    if (var_8_26 == 0) {
        goto block_28;
    }
    if (!(temp_3_30 & 1)) {
        goto block_16;
    }
    if (var_8_26 == 2) {
        goto block_28;
    }
block_16:
    *var_4_0 = (s32) var_9_7->unk0;
    if (arg3 == 0) {
        goto block_22;
    }
    if (var_9_7->unk24 != 2) {
        goto block_19;
    }
    var_2_50 = 0x523E;
    goto block_21;
block_19:
    var_2_50 = *(s32 *)((u8 *)(((u8 *)var_9_7 + ((var_9_7->unk26 * 2)))) + 0x14);
block_21:
    *var_4_0 = (s32) var_2_50;
block_22:
    if (arg1 == NULL) {
        goto block_25;
    }
    if (var_9_7->unk24 != 2) {
        goto block_25;
    }
    *arg1 |= 1 << var_11_6;
block_25:
    var_4_0 += 4;
    if (var_6_0 == NULL) {
        goto block_27;
    }
    *var_6_0 = var_9_7->unk12 + var_9_7->unk26;
    var_6_0 += 4;
block_27:
    var_11_6 += 1;
block_28:
    var_9_7 += 0x28;
    if (var_9_7->unk0 == 0) {
        goto block_30;
    }
    var_8_26 = var_9_7->unk24;
    goto loop_10;
block_30:
block_31:
    if (arg1 == NULL) {
        goto block_34;
    }
    if (var_12_8 == 0) {
        goto block_34;
    }
    *arg1 |= 0x80000000;
block_34:
    return var_11_6;
}
#endif /* NON_MATCHING */
