/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00214c48
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214c48/FUN_00214c48.s", FUN_00214c48);
#else
#include "types.h"
extern s32 func_001FA6D0();
f32 FUN_00214c48(s32 arg0, f32 fparg0) {
    f32 temp_f20_22;
    s32 var_2_6;
    s32 var_4_0;

    var_4_0 = arg0;
    var_2_6 = 1;
    if (var_4_0 > 0) {
        do {
            var_4_0 -= 1;
            var_2_6 *= 0xA;
        } while (var_4_0 != 0);
    }
    temp_f20_22 = (f32) var_2_6;
    return (f32) func_001FA6D0(var_4_0, (fparg0 + (1.0f / (2.0f * temp_f20_22))) * temp_f20_22) / temp_f20_22;
}
#endif /* NON_MATCHING */
