/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00233888
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.6098%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233888/FUN_00233888.s", FUN_00233888);
#else
#include "rnc/assembly_textbin_fun_00233888_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_001F98D0();
void FUN_00233888(s32 arg1, s32 arg0, s32 arg2) {
    s32 temp_16_19;
    s32 *temp_2_33;

    D_00160F00->unk0 = (s32) (arg2 | 0x10000000);
    temp_16_19 = arg2 * 0x10;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0x01000404;
    D_00160F00->unkC = (s32) (arg0 | (arg2 << 0x10) | 0x6C000000);
    temp_2_33 = D_00160F00 + 0x10;
    D_00160F00 = temp_2_33;
    func_001F98D0(temp_2_33, temp_16_19, 0x01000404);
    D_00160F00 += temp_16_19;
}
#endif /* NON_MATCHING */
