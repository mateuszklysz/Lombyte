/*
STATE: C_EXACT
SYMBOL: ProcessMobyAnimData__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `ProcessMobyAnimData__Fv` starts here; this unit covers only its beginning. */
#include "types.h"
extern s32 D_0015F63C;
extern u8 D_00165500[];
extern s32 FlushCache();
extern s32 FUN_001f98d0();
extern s32 FUN_00211728();
void FUN_0020d1a8(void) {
    FlushCache(0);
    FUN_001f98d0(0x70003800, D_00165500, 0x800);
    FUN_00211728(*(s32 *)0x0015F638, D_0015F63C);
}
