/*
STATE: C_EXACT
SYMBOL: VU1_addGSregister__FUiUlb
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `VU1_addGSregister__FUiUlb` starts here; this unit covers only its beginning. */

#include "types.h"

extern s32 *D_00160F00[4];
extern s32 *D_00160F00_store;

#define BASE D_00160F00[0]

void FUN_00233980(s32 a0, s64 a1) {
    BASE[0] = 0x10000002;
    BASE[1] = 0;
    BASE[2] = 0;
    BASE[3] = 0x50000002;
    BASE[4] = 0x8001;
    BASE[5] = 0x10000000;
    BASE[6] = 14;
    BASE[7] = 0;
    *(volatile s64 *) (BASE + 8) = a1;
    BASE[10] = a0;
    BASE[11] = 0;
    D_00160F00_store = BASE + 12;
}

extern s32 func_00233980(s32 a0, s64 a1) __attribute__((alias("FUN_00233980")));
