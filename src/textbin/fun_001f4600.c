/*
STATE: C_EXACT
SYMBOL: FUN_001f4600
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: patched-O2 (v3 root a1f7ac64; padless finish)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern s32 D_0015F464;
extern u8 D_0018DB40[];
extern u8 D_0018DC40[];
void FUN_001f4600(s32 arg0, s32 arg1) {
    s32 off;

    if (D_0015F464 < 0x40) {
        off = D_0015F464 * 4;
        *(s32 *)(off + D_0018DB40) = arg0;
        *(s32 *)(off + D_0018DC40) = arg1;
        D_0015F464 += 1;
    }
}
