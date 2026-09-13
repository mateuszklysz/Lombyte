/*
STATE: C_EXACT
SYMBOL: FUN_0012ef28
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `snd_StreamSafeCdCallback` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 D_0015EC8C;
extern s32 D_0015EC90;
extern s32 sceCdCallback();
s32 FUN_0012ef28(s32 arg0) {
    s32 temp_2_9;
    if (D_0015EC8C == 0) {
        return sceCdCallback(arg0);
    }
    temp_2_9 = D_0015EC90;
    D_0015EC90 = arg0;
    return temp_2_9;
}
