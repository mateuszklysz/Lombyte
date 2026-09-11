/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fd6e0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fd6e0/FUN_001fd6e0.s", FUN_001fd6e0);
#else
#include "rnc/assembly_textbin_fun_001fd6e0_types.h"
#include "types.h"


extern s32 D_00160F0C;
extern struct M2c_D_001940C0 D_001940C0;
s32 FUN_001fd6e0(u32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 <= 0x20000U) {
        *arg1 = (D_001940C0.unk4 + D_00160F0C) - arg0;
        *arg2 = (D_001940C0.unk8 + D_00160F0C) - arg0;
        return 0;
    }
    *arg1 = 0;
    *arg2 = 0;
    return -1;
}
#endif /* NON_MATCHING */
