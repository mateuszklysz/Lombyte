/*
STATE: C_EXACT
SYMBOL: snd_StopAllStreams
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `snd_StopAllStreams` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0012e6e0();
void FUN_0012ebd0(void) {
    FUN_0012e6e0(0x34, 0, 0, 0, 0);
}

extern void func_0012EBD0(void) __attribute__((alias("FUN_0012ebd0")));
