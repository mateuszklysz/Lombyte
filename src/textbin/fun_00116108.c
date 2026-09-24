#include "types.h"
struct _reent { s32 _errno; };
extern s32 D_0015EC10[];
extern s32 read(s32, s32, s32);
s32 FUN_00116108(struct _reent *ptr, s32 a, s32 b, s32 c) {
    s32 ret;

    D_0015EC10[0] = 0;
    if ((ret = read(a, b, c)) == -1 && D_0015EC10[0] != 0) {
        ptr->_errno = D_0015EC10[0];
    }
    return ret;
}

extern __typeof__(FUN_00116108) func_00116108 __attribute__((alias("FUN_00116108")));
