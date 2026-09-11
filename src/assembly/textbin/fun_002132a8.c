/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002132a8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002132a8/FUN_002132a8.s", FUN_002132a8);
#else
#include "types.h"
extern s32 func_001160D8();
f32 FUN_002132a8(s32 arg0, f32 fparg0, f32 fparg1) {
    return fparg0 + ((f32) ((func_001160D8() >> 0x10) & 0x7FFF) * (fparg1 - fparg0) * 0.000030517578f);
}
#endif /* NON_MATCHING */
