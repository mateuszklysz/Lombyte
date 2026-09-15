/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ec868
SCORE: code=56.42857 functions=56.42857 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec868/FUN_001ec868.s", FUN_001ec868);
#else
#include "rnc/assembly_textbin_fun_001ec868_types.h"
#include "types.h"


extern struct M2c_D_001871B0 D_001871B0;
void FUN_001ec868(void) {
    if (D_001871B0.unk2 != 0) {
        D_001871B0.unk50 = (s64) D_001871B0.unkC0;
        D_001871B0.unk60 = (s64) D_001871B0.unkD0;
    }
}

extern void func_001EC868(void) __attribute__((alias("FUN_001ec868")));
#endif /* NON_MATCHING */
