/*
STATE: C_EXACT
SYMBOL: sceCdCallback
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/refinement/sceCdCallback/attempt-1/finalist.json
*/

#include "types.h"

extern s32 sceCdSync();
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 D_00159740[];

s32 sceCdCallback(s32 arg0) {
    s32 intr;
    s32 old;

    if (sceCdSync(1) != 0) {
        return 0;
    }
    intr = DIntr();
    old = D_00159740[0];
    D_00159740[0] = arg0;
    if (intr != 0) {
        EnableInterrupts();
    }
    return old;
}
