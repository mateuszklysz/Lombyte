/*
STATE: C_EXACT
SYMBOL: FUN_00235840
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001E2A00[];
extern u8 D_001E3000[];
extern u8 D_001E3E00[];
extern u8 D_001E4200[];
extern s32 FUN_001f98d0();
extern s32 FUN_00235780();
void FUN_00235840(void) {
    FUN_00235780();
    FUN_001f98d0(D_001E3000, D_001E4200, 0x200);
    FUN_001f98d0(D_001E2A00, D_001E3E00, 0x400);
    FUN_00235780();
}
