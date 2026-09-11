/*
STATE: C_NON_MATCHING
SYMBOL: isAudioOK
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `isAudioOK` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023a790/FUN_0023a790.s", FUN_0023a790);
#else
#include "types.h"
extern s32 D_0016120C;
extern s32 func_0023AEE0();
void FUN_0023a790(void) {
    func_0023AEE0(D_0016120C + 0xD9100);
}
#endif /* NON_MATCHING */
