/*
STATE: C_NON_MATCHING
SYMBOL: snd_StreamSafeCdCallback
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `snd_StreamSafeCdCallback` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012ef28/FUN_0012ef28.s", FUN_0012ef28);
#else
#include "types.h"
extern s32 D_0015EC8C;
extern s32 D_0015EC90;
extern s32 func_00120678();
s32 FUN_0012ef28(s32 arg0) {
    s32 temp_2_9;

    if (D_0015EC8C != 0) {
        temp_2_9 = D_0015EC90;
        D_0015EC90 = arg0;
        return temp_2_9;
    }
    return func_00120678();
}
#endif /* NON_MATCHING */
