/*
STATE: C_EXACT
SYMBOL: SetD4ChcrVariant
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/refinement/SetD4ChcrVariant/attempt-1/finalist.json
*/

#include "types.h"

extern s32 DIntr();
extern s32 EnableInterrupts();

void SetD4ChcrVariant(s32 arg0) {
    DIntr();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B400 = arg0;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & 0xFFFEFFFF;
    EnableInterrupts();
}
