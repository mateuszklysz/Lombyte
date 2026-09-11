/*
STATE: C_EXACT
SYMBOL: InitializeGlobalStateEntry
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: Himuro -O2 -g2 -mno-split-addresses -fno-schedule-insns
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern s32 D_0015F600[4];
extern s32 D_0015F618[4];
extern s32 D_0015F5B0;

void InitializeGlobalStateEntry(s32 value) {
    D_0015F600[0] = value;
    D_0015F618[0] = 1;
    D_0015F5B0 = 1;
}
