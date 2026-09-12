/*
STATE: C_EXACT
SYMBOL: FUN_002151d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern s32 D_0015F5D0[];
extern s32 D_0015F5D4[];
extern s32 D_00161288[];
extern s32 func_001FDD10();
extern s32 FUN_001ff658();
extern s32 FUN_00215130();

s32 FUN_002151d8(s32 arg0, s32 arg1) {
    s32 var_2_8;

    var_2_8 = FUN_00215130();
    if (var_2_8 == 0) {
        if (arg1 != 0) {
            FUN_001ff658(func_001FDD10(arg1));
        }
        D_0015F5D4[0] = arg0;
        D_0015F5D0[0] = 2;
        D_00161288[0] = arg1;
        var_2_8 = 3;
    }
    return var_2_8;
}
