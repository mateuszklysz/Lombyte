#include "types.h"
struct _reent { s32 _errno; };
extern s32 D_0015EC10[];
extern s32 func_00118EC8(s32, s32);
s32 FUN_00114000(struct _reent *ptr, s32 a, s32 b) {
    s32 ret;

    D_0015EC10[0] = 0;
    if ((ret = func_00118EC8(a, b)) == -1 && D_0015EC10[0] != 0) {
        ptr->_errno = D_0015EC10[0];
    }
    return ret;
}

extern __typeof__(FUN_00114000) func_00114000 __attribute__((alias("FUN_00114000")));
