/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00213308
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213308/FUN_00213308.s", FUN_00213308);
#else
#include "types.h"
extern s32 func_001160D8();
f32 FUN_00213308(s32 arg0) {
    return (f32) (((func_001160D8() >> 0x10) & 0xFFF) - 0x800) * 3.1415927f * 0.00048828125f;
}
#endif /* NON_MATCHING */
