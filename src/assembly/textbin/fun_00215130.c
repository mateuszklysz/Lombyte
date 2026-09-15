/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215130
SCORE: code=82.19512 functions=82.19512 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215130/FUN_00215130.s", FUN_00215130);
#else
#include "types.h"
extern s32 D_0015F5D0[];
extern s32 D_0015F5D4;
extern s32 D_00161288;
extern s32 func_001FDD10();
extern s32 func_001FF658();
s32 FUN_00215130(s32 arg0, s32 arg1) {
    s32 var_2_26;

    if (D_0015F5D4 == arg0) {
        if (arg1 != 0) {
            func_001FF658(func_001FDD10(arg1));
        }
        D_00161288 = arg1;
        D_0015F5D0[0] = 2;
        return 2;
    }
    var_2_26 = 0;
    if (D_0015F5D4 == 0) {
        if (arg1 != 0) {
            func_001FF658(func_001FDD10(arg1));
        }
        D_0015F5D4 = arg0;
        D_0015F5D0[0] = 2;
        var_2_26 = 1;
        D_00161288 = arg1;
    }
    return var_2_26;
}
#endif /* NON_MATCHING */
