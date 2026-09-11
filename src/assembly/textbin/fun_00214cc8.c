/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00214cc8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214cc8/FUN_00214cc8.s", FUN_00214cc8);
#else
#include "rnc/assembly_textbin_fun_00214cc8_types.h"
#include "types.h"


extern s32 func_0020C9E0();
extern s32 func_00214C48();
s32 FUN_00214cc8(struct M2c_arg0 *arg0, f32 fparg0) {
    f32 temp_f0_12;
    f32 temp_f0_22;
    f32 temp_f22_18;
    s32 var_2_27;

    temp_f0_12 = func_0020C9E0();
    temp_f22_18 = func_00214C48(4, temp_f0_12 - fparg0);
    temp_f0_22 = func_00214C48(4, arg0->unk58 * arg0->unk5C);
    var_2_27 = 0;
    if (fparg0 <= temp_f0_12) {
        var_2_27 = 1;
        if (!(temp_f22_18 < temp_f0_22)) {
            var_2_27 = 0;
        }
    }
    return var_2_27;
}
#endif /* NON_MATCHING */
