#include "types.h"
extern s32 func_0020ACC0();
s32 FUN_0020ad38(s32 *arg0) {
    s32 ret = 0;
    s32 n = arg0[1];
    s32 k = arg0[0];
    if (n != 0) {
        ret = func_0020ACC0(arg0 + 2, k) == n;
    }
    return ret;
}

extern __typeof__(FUN_0020ad38) func_0020AD38 __attribute__((alias("FUN_0020ad38")));
