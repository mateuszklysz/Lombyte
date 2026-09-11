/*
STATE: C_EXACT
SYMBOL: RefreshPointLight
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `RefreshPointLight` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_00201ba8();
extern s32 FUN_00201f88();
void FUN_00201f58(s32 arg0) {
    FUN_00201f88();
    FUN_00201ba8(arg0);
}
