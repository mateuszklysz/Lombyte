/*
STATE: C_EXACT
SYMBOL: FUN_00201128
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_001ff960();
extern s32 FUN_001ffc30();
extern s32 FUN_001ffe18();
void FUN_00201128(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_21_20;
    s32 temp_2_22;

    temp_21_20 = FUN_001ff960(0x7580, 0);
    temp_2_22 = FUN_001ff960(0x7580, 1);
    FUN_001ffc30(temp_2_22, arg0, arg1, 0x20, arg3, arg4);
    FUN_001ffc30(temp_21_20, arg0 + 0x20, arg1, arg2 - 0x40, arg3, arg4);
    FUN_001ffe18(temp_2_22, (arg0 + arg2) - 0x20, arg1, 0x20, arg3, arg4);
}

extern void func_00201128(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_00201128")));
