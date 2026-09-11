/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00213ed8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213ed8/FUN_00213ed8.s", FUN_00213ed8);
#else
#include "types.h"
extern s32 func_001F99C0();
void FUN_00213ed8(f32 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f0_21;
    f32 var_f13_0;
    f32 var_f1_7;

    var_f13_0 = fparg1;
    var_f1_7 = fparg0 - *arg0;
    if ((var_f13_0 < var_f1_7) || (var_f13_0 = -var_f13_0, (var_f1_7 < var_f13_0))) {
        var_f1_7 = var_f13_0;
    }
    temp_f0_21 = *arg0 + var_f1_7;
    *arg0 = temp_f0_21;
    func_001F99C0(fparg0 - temp_f0_21, var_f13_0);
}
#endif /* NON_MATCHING */
