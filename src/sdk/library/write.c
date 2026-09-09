#include "types.h"
extern u32 D_0012FBF0[];
extern s32 sceTtyInit();
extern s32 sceTtyWrite();
s32 write(s32 arg0, s32 arg1, s32 arg2) {
    register s32 tty_arg __asm__("s1") = arg1;
    if ((u32) (arg0 - 1) < 2U) {
        if (D_0012FBF0[0] == 0) {
            if (sceTtyInit() != 0) {
                D_0012FBF0[0] = 1;
                goto block_4;
            }
            goto block_5;
        }
block_4:
        return sceTtyWrite(tty_arg, arg2);
    }
block_5:
    return -1;
}
