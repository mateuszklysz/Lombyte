/*
STATE: C_EXACT
SYMBOL: UpdatePad__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `UpdatePad__Fv` starts here. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_0013C940[];
extern s32 FUN_002170c8();
void FUN_00217a10(void) {
    FUN_002170c8(D_0013C940);
}

extern void func_00217A10(void) __attribute__((alias("FUN_00217a10")));
