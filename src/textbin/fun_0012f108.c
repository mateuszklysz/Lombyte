#include "types.h"
extern s32 func_0012E548();
void FUN_0012f108(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 buf[5];

    buf[0] = a0;
    buf[1] = a1;
    buf[2] = a2;
    buf[3] = a3;
    buf[4] = a4;
    func_0012E548(0x3E, 0x14, buf);
}

extern __typeof__(FUN_0012f108) func_0012F108 __attribute__((alias("FUN_0012f108")));
