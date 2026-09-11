/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002270e8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 56.8095%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002270e8/FUN_002270e8.s", FUN_002270e8);
#else
#include "types.h"
extern s32 func_00227D80();
extern s32 func_00227ED0();
s16 *FUN_002270e8(s16 *arg0) {
    s16 *var_16_13;
    s16 *var_2_18;
    s16 temp_3_9;

    temp_3_9 = *arg0;
    if (temp_3_9 == 0) {
        var_16_13 = arg0 + 0x20;
        func_00227D80();
        goto block_4;
    }
    var_2_18 = arg0;
    if (temp_3_9 == 1) {
        func_00227ED0(arg0);
        var_16_13 = arg0 + 0x30;
block_4:
        var_2_18 = var_16_13;
    }
    return var_2_18;
}
#endif /* NON_MATCHING */
