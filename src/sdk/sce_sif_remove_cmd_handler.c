/*
STATE: C_EXACT
SYMBOL: sceSifRemoveCmdHandler
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern u32 D_00154E64[];
extern u32 D_00154E6C[];

void sceSifRemoveCmdHandler(s32 idx) {
    register u32 off __asm__("v1") = idx << 3;
    register u32 base __asm__("a0") = (idx < 0) ? D_00154E64[0] : D_00154E6C[0];

    off += base;
    *(u32 *)off = 0;
}
