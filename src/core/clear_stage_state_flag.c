/*
STATE: C_EXACT
SYMBOL: ClearStageStateFlag
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern u32 D_001611E0[];

void ClearStageStateFlag(void) {
    D_001611E0[0] = 0;
}
