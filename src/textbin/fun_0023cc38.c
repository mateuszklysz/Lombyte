/*
STATE: C_EXACT
SYMBOL: videoDecDelete__FP8VideoDec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `videoDecDelete__FP8VideoDec` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0012b9e0();
extern s32 FUN_0023c5b8();
s32 FUN_0023cc38(s32 arg0) {
    FUN_0023c5b8(arg0 + 0x48);
    FUN_0012b9e0(arg0);
    return 1;
}

extern s32 func_0023CC38(s32 arg0) __attribute__((alias("FUN_0023cc38")));
