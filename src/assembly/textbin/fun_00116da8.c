/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00116da8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00116da8/FUN_00116da8.s", FUN_00116da8);
#else
#include "rnc/assembly_textbin_fun_00116da8_types.h"
#include "types.h"




extern u32 D_0012F76C[];
extern s32 func_00113AE0();
extern s32 func_00116E20();
void FUN_00116da8(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    struct M2c_var_3_12 *var_3_12;

    var_3_12 = arg0->unk54;
    if (var_3_12 == NULL) {
        var_3_12 = D_0012F76C[0];
        arg0->unk54 = var_3_12;
    }
    if (var_3_12->unk38 == 0) {
        func_00113AE0(var_3_12);
    }
    func_00116E20(arg0->unk54, arg0, arg1, arg2);
}
#endif /* NON_MATCHING */
