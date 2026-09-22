#include "types.h"
extern s32 D_0015F5D0;
extern s32 D_0015F5D4;
extern s32 D_00161288;
extern s32 func_001FDD10();
extern s32 func_001FF658();
s32 FUN_00215130(s32 arg0, s32 arg1) {
    s32 ret;

    ret = D_0015F5D4;
    if (ret == arg0) {
        if (arg1 != 0) {
            func_001FF658(func_001FDD10(arg1));
        }
        ret = 2;
        D_00161288 = arg1;
        D_0015F5D0 = ret;
    } else if (ret == 0) {
        if (arg1 != 0) {
            func_001FF658(func_001FDD10(arg1));
        }
        D_0015F5D4 = arg0;
        D_0015F5D0 = 2;
        ret = 1;
        D_00161288 = arg1;
    } else {
        ret = 0;
    }
    return ret;
}

extern __typeof__(FUN_00215130) func_00215130 __attribute__((alias("FUN_00215130")));
