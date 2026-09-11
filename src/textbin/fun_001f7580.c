/*
STATE: C_EXACT
SYMBOL: FUN_001f7580
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001DF050[];
extern s32 FUN_001f44b8();
extern s32 FUN_001f7090();
void FUN_001f7580(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FUN_001f7090(arg0, arg1, arg2, arg3, FUN_001f44b8(1), D_001DF050);
}

extern void func_001F7580(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __attribute__((alias("FUN_001f7580")));
