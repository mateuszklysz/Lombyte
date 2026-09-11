/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00206860
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.7143%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00206860/FUN_00206860.s", FUN_00206860);
#else
#include "rnc/assembly_textbin_fun_00206860_types.h"
#include "types.h"


void FUN_00206860(u8 *arg0, s32 arg1, s32 arg2, s16 *arg3) {
    s16 *var_4_9;
    s32 temp_2_63;
    s32 temp_3_33;
    s32 temp_3_49;
    s32 temp_lo_26;
    s32 var_12_29;
    s32 var_13_7;
    s32 var_3_30;
    s32 var_5_12;
    u32 var_10_41;
    u8 *var_11_5;
    u8 temp_10_39;
    u8 var_8_37;
    u8 var_9_52;
    struct M2c_temp_2_35 *temp_2_35;

    var_11_5 = arg0;
    var_13_7 = 0;
    if (arg1 == 0) {
        goto block_2;
    }
    var_4_9 = (arg1 * 2) + arg3;
    var_5_12 = arg2 + *(s32 *)((u8 *)var_4_9 - 0x2);
    goto block_3;
block_2:
    var_5_12 = arg2 + 0x200;
    var_4_9 = arg3;
block_3:
    temp_lo_26 = (s32) (((arg2 + *var_4_9) - var_5_12) * 2) / 3;
    var_12_29 = 0;
    if (temp_lo_26 <= 0) {
        goto block_16;
    }
    var_3_30 = 0 * 2;
loop_5:
    temp_3_33 = var_3_30 + var_12_29;
    temp_2_35 = var_5_12 + (temp_3_33 >> 1);
    var_8_37 = temp_2_35->unk1;
    temp_10_39 = temp_2_35->unk0;
    if (!(temp_3_33 & 1)) {
        goto block_7;
    }
    var_10_41 = temp_10_39 >> 4;
    goto block_8;
block_7:
    var_10_41 = temp_10_39 & 0xF;
    var_8_37 = ((var_8_37 * 0x10) | (temp_10_39 >> 4)) & 0xFF;
block_8:
    temp_3_49 = var_10_41 * 0x10;
    var_9_52 = (var_8_37 != 0) ? var_8_37 : 0x100U;
    if (var_13_7 == 0) {
        goto block_10;
    }
    var_13_7 = 0;
    var_9_52 -= 1;
    *var_11_5 |= temp_3_49;
    var_11_5 += 1;
block_10:
    temp_2_63 = var_12_29 + 1;
    if (var_9_52 == 0) {
        goto block_14;
    }
loop_11:
    *var_11_5 = (var_10_41 | temp_3_49) & 0xFF;
    var_9_52 -= 2;
    var_11_5 += 1;
    if ((s32) var_9_52 > 0) {
        goto loop_11;
    }
    var_12_29 = temp_2_63;
    if (var_9_52 == 0) {
        goto block_15;
    }
    var_11_5 -= 1;
    var_13_7 = 1;
    *var_11_5 = (u8) var_10_41;
block_14:
    var_12_29 = temp_2_63;
block_15:
    var_3_30 = var_12_29 * 2;
    if (var_12_29 < temp_lo_26) {
        goto loop_5;
    }
block_16:
    return;
}
#endif /* NON_MATCHING */
