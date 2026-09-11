/*
STATE: C_EXACT
SYMBOL: FUN_0023b540
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern s32 D_001611E8[];
extern s32 D_0016120C[];
extern s32 func_0023D340();

s32 FUN_0023b540(void) {
    if (D_001611E8[0] != 0) {
        func_0023D340(D_0016120C[0] + 0xD9168);
        *(s32 *)0x1611E8 = 0;
    }
    __asm__ __volatile__("sync\nei");
    return 0;
}
