/*
STATE: C_EXACT
SYMBOL: get_iob
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/refinement/get_iob/attempt-1/finalist.json
*/

#include "types.h"

extern s32 _sceFsIobSemaMK();
extern s32 WaitSema();
extern s32 SignalSema();
extern s32 D_0012FCA0[];
extern u8 D_00157D80[];

void *get_iob(u32 arg0) {
    void *result;

    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0[0]);
    if (arg0 >= 32) {
        SignalSema(D_0012FCA0[0]);
        return 0;
    }
    result = (void *)&D_00157D80[arg0 << 4];
    SignalSema(D_0012FCA0[0]);
    return result;
}
