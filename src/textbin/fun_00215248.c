/*
STATE: C_EXACT
SYMBOL: FUN_00215248
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_00215290();
extern s32 FUN_00215300();
s32 FUN_00215248(void) {
    s32 temp_16_10;
    s32 temp_16_13;
    s32 temp_16_17;

    temp_16_10 = FUN_00215290();
    temp_16_13 = temp_16_10 - (FUN_00215300() * 4);
    temp_16_17 = (temp_16_13 <= -1) ? 0 : temp_16_13;
    return (temp_16_17 < 0x29) ? temp_16_17 : 0x28;
}
