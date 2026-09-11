/*
STATE: C_EXACT
SYMBOL: FontPrintLarge
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `FontPrintLarge` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001DF050[];
extern s32 FUN_001f44b8();
extern s32 FUN_001f62b0();
void FUN_001f6530(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    FUN_001f62b0(arg0, arg1, arg2, arg3, arg4, FUN_001f44b8(1), D_001DF050);
}

extern void func_001F6530(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_001f6530")));
