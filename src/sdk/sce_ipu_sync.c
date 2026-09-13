/*
STATE: C_EXACT
SYMBOL: sceIpuSync
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: Himuro -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
u32 sceIpuSync(s32 arg0) {
    u32 result;

    result = 0;
    switch (arg0) {
    case 0:
        while (*(volatile s32 *)0x10002010 < 0) {
        }
        result = 0;
        break;
    case 1:
        result = *(volatile u32 *)0x10002010 >> 31;
        break;
    default:
        break;
    }
    return result;
}
