/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00225660
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 78.3939%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225660/FUN_00225660.s", FUN_00225660);
#else
#include "rnc/assembly_textbin_fun_00225660_types.h"
#include "types.h"




extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_00225530();
extern s32 func_00225CD8();
s32 FUN_00225660(struct M2c_arg0 *arg0) {
    s32 *var_16_12;
    s32 var_17_10;

    var_17_10 = 0x17;
    var_16_12 = ((u8 *)arg0 + (0x44));
    do {
        var_17_10 -= 1;
        *var_16_12 = func_00225530(*var_16_12);
        var_16_12 += 4;
    } while (var_17_10 >= 0);
    arg0->unk3C = func_00225CD8(arg0->unk3C);
    if ((u32) (D_001516D0.unk5A - 6) >= 2U) {
        D_001516D0.unk5A = 5U;
    }
    return 0;
}
#endif /* NON_MATCHING */
