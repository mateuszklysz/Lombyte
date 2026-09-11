/*
STATE: C_EXACT
SYMBOL: switchThread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `switchThread` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_001188c0();
void FUN_0023a770(void) {
    FUN_001188c0(1);
}

extern void func_0023A770(void) __attribute__((alias("FUN_0023a770")));
