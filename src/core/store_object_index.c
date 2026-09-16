/*
STATE: C_EXACT
SYMBOL: StoreObjectIndex
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: ee-gcc-2.9-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

/* ROLE: recovered function `snd_PrepareReturnBuffer` starts here; this unit covers only its beginning. */

#include "types.h"

extern u32 D_0015EC80;
extern u32 D_0015EC84;

void StoreObjectIndex(u32 *obj, s32 idx) {
    D_0015EC84 = idx;
    D_0015EC80 = (u32)obj;
    obj[idx + 1] = 0;
    obj[0] = 0;
}
