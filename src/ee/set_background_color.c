/*
STATE: C_EXACT
SYMBOL: PackDmaTag
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/refinement/PackDmaTag/attempt-1/finalist.json
*/

#include "types.h"

extern u64 D_00152078[];

void PackDmaTag(u64 arg0, u64 arg1, u64 arg2) {
    register u64 value __asm__("a1") = arg1 << 8;

    value = arg0 | value;
    value = value | (arg2 << 16);
    value = value | (0x8000ULL << 16);
    D_00152078[0] = value;
}
