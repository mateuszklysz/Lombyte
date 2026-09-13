/*
STATE: C_EXACT
SYMBOL: FUN_00238688
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u8 D_00161078[];
extern u8 D_00161080[];
extern s32 sprintf();
void FUN_00238688(u8 *buf, s32 value) {
    if (value >= 0x3E8) {
        sprintf(buf, D_00161078, value / 1000, value % 1000);
        return;
    }
    sprintf(buf, D_00161080, value);
}

extern __typeof__(FUN_00238688) func_00238688 __attribute__((alias("FUN_00238688")));
