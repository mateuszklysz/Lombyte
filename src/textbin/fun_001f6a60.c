/*
STATE: C_EXACT
SYMBOL: FUN_001f6a60
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001DF790[];
extern s32 FUN_001f44b8();
extern s32 FUN_001f6290();
extern s32 FUN_001f62b0();
void FUN_001f6a60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_18;

    temp_16_18 = arg0 - FUN_001f6290(arg3, arg4);
    FUN_001f62b0(temp_16_18, arg1, arg2, arg3, arg4, FUN_001f44b8(3), D_001DF790);
}

extern void func_001F6A60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_001f6a60")));
