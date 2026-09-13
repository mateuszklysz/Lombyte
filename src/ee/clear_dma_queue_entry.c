/*
STATE: C_EXACT
SYMBOL: ClearDmaQueueEntry
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern u8 D_0018A2B0[];
void ClearDmaQueueEntry(void) {
    s32 *var_2_7;
    s32 var_3_6;
    s32 value;

    var_2_7 = (s32 *)D_0018A2B0;
    value = 1;
    var_3_6 = 0x13;
    var_2_7 = (s32 *)((u8 *)var_2_7 + 0x4C);
    do {
        *var_2_7 = value;
        var_3_6 -= 1;
        var_2_7 -= 1;
    } while (var_3_6 >= 0);
}
