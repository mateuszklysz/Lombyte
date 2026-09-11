/*
STATE: C_EXACT
SYMBOL: StashMobyClassDists__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `StashMobyClassDists__Fv` starts here; this unit covers only its beginning. */

#include "types.h"
extern u8 D_001B2E80[];
extern s32 FUN_001f98d0();
void FUN_0020d218(void) {
    FUN_001f98d0(D_001B2E80, 0x70003A00, 0x380);
}

extern void func_0020D218(void) __attribute__((alias("FUN_0020d218")));
