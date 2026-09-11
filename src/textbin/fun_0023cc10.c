/*
STATE: C_EXACT
SYMBOL: videoDecEndPut__FP8VideoDec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `videoDecEndPut__FP8VideoDec` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0023bf18();
void FUN_0023cc10(s32 arg0) {
    FUN_0023bf18(arg0 + 0x48);
}

extern void func_0023CC10(s32 arg0) __attribute__((alias("FUN_0023cc10")));
