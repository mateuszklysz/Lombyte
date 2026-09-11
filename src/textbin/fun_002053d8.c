/*
STATE: C_EXACT
SYMBOL: FUN_002053d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
void FUN_002053d8(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 outer = 0;
    s32 limit = 0x7FFF;
    do {
        s32 bit = 1;
        u8 *next = arg3 + 1;
        s32 count = 7;
        do {
            u8 value;
            if (*arg3 & bit)
                value = *arg1;
            else
                value = *arg2;
            *arg0 = value;
            arg1 += 1;
            arg2 += 1;
            arg0 += 1;
            count -= 1;
            bit <<= 1;
        } while (count >= 0);
        outer += 1;
        arg3 = next;
    } while (outer <= limit);
}
