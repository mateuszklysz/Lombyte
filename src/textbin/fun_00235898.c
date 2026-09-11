/*
STATE: C_EXACT
SYMBOL: FUN_00235898
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001E3200[];
extern u8 D_001E4400[];
extern s32 FUN_00237370();
void FUN_00235898(void) {
    FUN_00237370(D_001E3200);
    FUN_00237370(D_001E4400);
}
