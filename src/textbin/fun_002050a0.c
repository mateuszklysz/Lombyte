/*
STATE: C_EXACT
SYMBOL: FUN_002050a0
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern u8 D_001A00F0[];

s32 FUN_002050a0(s32 arg0) {
    register u8 *base __asm__("v0");
    register u8 *ptr __asm__("v1");
    register s32 count __asm__("a1") = 0;

    base = D_001A00F0;
    ptr = base + 0x28C;
    do {
        if (*(s32 *)(ptr - 0x14) != 0 && *(s32 *)ptr == arg0) {
            return count;
        }
        count += 1;
        ptr += 4;
    } while (count < 5);
    return -1;
}
