/*
STATE: C_EXACT
SYMBOL: InitTLB
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern s32 GetMemorySize();
extern s32 _InitTLB();
extern s32 InitTLB32MB();

s32 InitTLB(void) {
    s32 result;

    if (GetMemorySize() == 0x2000000) {
        result = InitTLB32MB();
    } else {
        result = _InitTLB();
    }
    return result;
}
