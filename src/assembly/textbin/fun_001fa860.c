/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.3065%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa860/FUN_001fa860.s", FUN_001fa860);
#else
#include "rnc/assembly_textbin_fun_001fa860_types.h"
#include "types.h"


s32 FUN_001fa860(s8 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_10_26;
    s32 temp_1_35;
    s32 temp_5_5;
    s32 var_3_6;
    s32 var_9_8;
    s8 *temp_14_10;
    s8 *var_4_0;
    s8 var_11_9;
    u32 var_8_7;
    u8 *temp_25_27;
    u8 var_2_11;
    struct M2c_var_6_0 *var_6_0;

    var_4_0 = arg0;
    var_6_0 = arg2;
    temp_5_5 = var_4_0 + arg1;
    var_3_6 = 0x7F;
    var_8_7 = 0;
    var_9_8 = 1;
    var_11_9 = 0;
    temp_14_10 = var_4_0;
    var_2_11 = 0;
loop_1:
    if (var_2_11 != 0) {
        goto block_4;
    }
    var_2_11 = var_6_0->unk1;
    var_8_7 += var_6_0->unk0;
    var_6_0 += 2;
    if (var_8_7 != 0x40000) {
        goto loop_1;
    }
    goto block_12;
block_4:
    temp_10_26 = var_8_7 & 7;
    temp_25_27 = (var_8_7 >> 3) + arg3;
    var_8_7 += 1;
    var_2_11 -= 1;
    temp_1_35 = ((u8) *temp_25_27 >> temp_10_26) & 1;
    var_9_8 = temp_1_35;
    if (var_9_8 == temp_1_35) {
        goto block_7;
    }
    *var_4_0 = var_11_9;
    var_4_0 += 1;
    var_3_6 = 0xFF;
    if (var_4_0 == temp_5_5) {
        goto block_15;
    }
    var_11_9 = 1;
    goto loop_1;
block_7:
    if (var_11_9 == var_3_6) {
        goto block_9;
    }
    var_11_9 += 1;
    goto loop_1;
block_9:
    *var_4_0 = var_11_9;
    var_4_0 += 2;
    var_11_9 = 1;
    var_3_6 = 0xFF;
    if (var_4_0 == temp_5_5) {
        goto block_15;
    }
    *(s32 *)((u8 *)var_4_0 - 0x1) = 0;
    goto loop_1;
block_12:
    if (var_11_9 == 0) {
        goto block_14;
    }
    *var_4_0 = var_11_9;
    var_4_0 += 1;
block_14:
    *temp_14_10 = (*temp_14_10 * 2) + 1;
    return var_4_0 - temp_14_10;
block_15:
    return -1;
}
#endif /* NON_MATCHING */
