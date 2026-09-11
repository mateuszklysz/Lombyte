/*
STATE: C_EXACT
SYMBOL: InitMobyClassDists__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `InitMobyClassDists__Fv`. */

#include "types.h"
extern s32 FUN_001f97e8();
void FUN_0020d1f0(void) {
    FUN_001f97e8(0x70003A00, 0x40000000, 0x380);
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0020d1f0) InitMobyClassDists__Fv __attribute__((alias("FUN_0020d1f0")));
