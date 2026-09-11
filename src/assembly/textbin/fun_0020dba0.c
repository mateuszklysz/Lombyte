/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020dba0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 4.4688%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020dba0/FUN_0020dba0.s", FUN_0020dba0);
#else
#include "types.h"
extern u8 D_001C76E0[];
s32 FUN_0020dba0(s64 arg0) {
    s32 temp_5_24;
    s32 temp_6_31;
    s32 var_2_5;
    s32 var_6_22;
    u32 *var_1_7;
    u32 temp_3_14;
    u64 var_4_21;

    var_2_5 = -0x20;
    var_1_7 = D_001C76E0;
loop_1:
    temp_3_14 = *var_1_7;
    var_1_7 += 4;
    var_2_5 += 0x20;
    if (temp_3_14 == (-1U >> 0x20)) {
        goto loop_1;
    }
    var_4_21 = (1 << arg0) - 1;
    var_6_22 = 0;
loop_3:
    temp_5_24 = temp_3_14 & var_4_21;
    var_4_21 <<= arg0;
    var_6_22 += arg0;
    if (temp_5_24 != 0) {
        goto loop_3;
    }
    temp_6_31 = var_6_22 - arg0;
    if (temp_6_31 == 0x20) {
        goto loop_1;
    }
    *(s32 *)((u8 *)var_1_7 - 0x4) = (s32) (temp_3_14 | (var_4_21 >> arg0));
    return var_2_5 + temp_6_31;
}
#endif /* NON_MATCHING */
