/*
STATE: C_EXACT
SYMBOL: GetOcclGridFromPair__Fiiiiiif
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `GetOcclGridFromPair__Fiiiiiif`. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_001f2690();
void FUN_001f2768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0) {
    s32 var_4_25;
    s32 var_5_26;
    s32 var_6_28;

    if (fparg0 < 0.5f) {
        if (FUN_001f2690() == 0) {
            var_4_25 = arg3;
            var_5_26 = arg4;
            var_6_28 = arg5;
            goto block_5;
        }
    } else if (FUN_001f2690(arg3, arg4, arg5) == 0) {
        var_4_25 = arg0;
        var_5_26 = arg1;
        var_6_28 = arg2;
block_5:
        FUN_001f2690(var_4_25, var_5_26, var_6_28);
    }
}

extern void func_001F2768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0) __attribute__((alias("FUN_001f2768")));

/* Recovered original symbol name. */
extern __typeof__(FUN_001f2768) GetOcclGridFromPair__Fiiiiiif __attribute__((alias("FUN_001f2768")));
