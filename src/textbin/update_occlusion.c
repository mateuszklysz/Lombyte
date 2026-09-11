/*
STATE: C_EXACT
SYMBOL: UpdateOcclusion__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `UpdateOcclusion__Fv`. */

#include "types.h"
extern u32 D_0018C334[];
extern u8 D_00193FC0[];
extern s32 FUN_001f2820();
extern s32 FUN_001f97e8();
void FUN_001f2c10(void) {
    if (D_0018C334[0] == 0) {
        FUN_001f97e8(D_00193FC0, -1, 0x80);
    } else if (D_0018C334[0] == 2) {
        FUN_001f2820();
    }
}

/* Recovered original symbol name. */
extern __typeof__(FUN_001f2c10) UpdateOcclusion__Fv __attribute__((alias("FUN_001f2c10")));
