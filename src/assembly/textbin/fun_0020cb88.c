/*
STATE: C_NON_MATCHING
SYMBOL: DetachManipulator
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DetachManipulator` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 61.2222%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020cb88/FUN_0020cb88.s", FUN_0020cb88);
#else
#include "rnc/assembly_textbin_fun_0020cb88_types.h"
#include "types.h"






extern s32 func_001F97E8();
void FUN_0020cb88(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    s32 *temp_2_10;
    s32 *var_2_17;
    struct M2c_var_3_12 *var_3_12;

    if (arg1 != NULL) {
        temp_2_10 = arg0->unk64;
        if (temp_2_10 != arg1) {
            var_3_12 = temp_2_10;
            var_2_17 = var_3_12->unk8;
            if (var_2_17 != NULL) {
                if (var_2_17 != arg1) {
                    var_3_12 = var_3_12->unk8;
loop_8:
                    var_2_17 = var_3_12->unk8;
                    if (var_2_17 != NULL) {
                        if (var_2_17 != arg1) {
                            var_3_12 = var_3_12->unk8;
                            goto loop_8;
                        }
                        var_2_17 = var_3_12->unk8;
                    }
                    goto block_13;
                }
                goto block_14;
            }
block_13:
            if (var_2_17 == arg1) {
block_14:
                var_3_12->unk8 = (void *) arg1->unk8;
            }
        } else {
            arg0->unk64 = (void *) arg1->unk8;
        }
        func_001F97E8(arg1, 0, 0x40);
    }
}
#endif /* NON_MATCHING */
