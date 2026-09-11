/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fecc8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 38.4800%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fecc8/FUN_001fecc8.s", FUN_001fecc8);
#else
#include "types.h"
extern u8 D_00199710[];
s32 FUN_001fecc8(u16 arg0, u32 arg1, u16 *arg2) {
    s16 *var_8_11;
    s32 var_7_12;
    s32 var_9_10;

    var_9_10 = 0;
    var_8_11 = (arg1 * 2) + D_00199710;
    var_7_12 = 2;
loop_1:
    if (*var_8_11 == arg0) {
        if (arg2 != NULL) {
            *arg2 = *(((arg1 != 0) ? (var_9_10 * 4) : var_7_12) + D_00199710);
        }
        return var_9_10;
    }
    var_9_10 += 1;
    var_7_12 += 4;
    var_8_11 += 4;
    if (var_9_10 >= 0x96) {
        return -1;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
