/*
STATE: C_NON_MATCHING
SYMBOL: snd_StreamSafeCdBreak
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `snd_StreamSafeCdBreak` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012eea8/FUN_0012eea8.s", FUN_0012eea8);
#else
#include "types.h"
extern s32 D_0015EC8C;
extern s32 func_001216C8();
extern s32 func_0012E6E0();
s32 FUN_0012eea8(void) {
    if (D_0015EC8C != 0) {
        func_0012E6E0(0x37, 0, 0, 0, 0);
        return 1;
    }
    return func_001216C8();
}
#endif /* NON_MATCHING */
