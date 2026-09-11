/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215290
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 33.6071%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215290/FUN_00215290.s", FUN_00215290);
#else
#include "types.h"
extern u8 D_0014BEC0[];
s32 FUN_00215290(void) {
    s32 temp_6_31;
    s32 var_2_9;
    s32 var_3_8;
    s32 var_5_14;
    s32 var_6_6;
    u8 *var_4_13;
    u8 temp_3_17;

    var_6_6 = 0;
    var_3_8 = 0;
    var_2_9 = 0 * 4;
loop_1:
    var_4_13 = var_2_9 + D_0014BEC0;
    var_5_14 = 3;
loop_2:
    temp_3_17 = *var_4_13;
    var_4_13 += 1;
    var_5_14 -= 1;
    var_6_6 = (temp_3_17 != 0) ? (var_6_6 + 1) : var_6_6;
    if (var_5_14 >= 0) {
        goto loop_2;
    }
    var_3_8 += 1;
    if (var_3_8 >= 0x14) {
        goto block_5;
    }
    var_2_9 = var_3_8 * 4;
    goto loop_1;
block_5:
    temp_6_31 = (var_6_6 <= -1) ? 0 : var_6_6;
    return (temp_6_31 < 0x29) ? temp_6_31 : 0x28;
}
#endif /* NON_MATCHING */
