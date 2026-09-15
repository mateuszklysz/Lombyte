/*
STATE: C_EXACT
SYMBOL: FUN_0012e280
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: cc_sn (SN ee-gcc2.95.2-v2.73a) -O2 -g2 -gstabs
DECISION: promoted
*/

/* ROLE: recovered function `snd_SetMixerMode` starts here; this unit covers only its beginning. */


#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e280(s32 arg0, s32 arg1) {
    s32 local[2];

    local[0] = arg0;
    local[1] = arg1;
    func_0012E6E0(0xD, 8, local, 0, 0);
}
