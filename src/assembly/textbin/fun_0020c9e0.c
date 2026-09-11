/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020c9e0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.5902%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020c9e0/FUN_0020c9e0.s", FUN_0020c9e0);
#else
#include "rnc/assembly_textbin_fun_0020c9e0_types.h"
#include "types.h"






extern s32 func_001FA6C0();
f32 FUN_0020c9e0(struct M2c_arg0 *arg0) {
    f32 temp_f20_57;
    struct M2c_temp_16_50 *temp_16_50;
    struct M2c_var_4_14 *var_4_14;

    if (arg0->unk52 != 0xFF) {
        goto block_2;
    }
    var_4_14 = arg0->unk6C;
    goto block_4;
block_2:
    var_4_14 = arg0->unk68;
block_4:
    if (arg0->unk54 == 0.0f) {
        goto block_6;
    }
    goto block_8;
block_6:
    return func_001FA6C0(var_4_14->unk4) * 0.0625f;
block_8:
    if (arg0->unk52 != arg0->unk53) {
        goto block_12;
    }
    if ((u8) arg0->unk51 < (u8) arg0->unk50) {
        goto block_11;
    }
    goto block_13;
block_11:
block_12:
    return (func_001FA6C0(var_4_14->unk4) * 0.0625f) + arg0->unk54;
block_13:
    temp_16_50 = arg0->unk6C;
    temp_f20_57 = func_001FA6C0(var_4_14->unk4) * (1.0f - arg0->unk54);
    return (temp_f20_57 + (func_001FA6C0(temp_16_50->unk4) * arg0->unk54)) * 0.0625f;
}
#endif /* NON_MATCHING */
