/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021e1f8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e1f8/FUN_0021e1f8.s", FUN_0021e1f8);
#else
#include "rnc/assembly_textbin_fun_0021e1f8_types.h"
#include "types.h"


extern s32 func_001FA580();
void FUN_0021e1f8(struct M2c_arg0 *arg0) {
    arg0->unk48 = func_001FA580(arg0->unk48, 0x3C23D70A);
}
#endif /* NON_MATCHING */
