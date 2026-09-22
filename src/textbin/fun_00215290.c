#include "types.h"
extern u8 D_0014BEC0[];
s32 FUN_00215290(void) {
    s32 count = 0;
    s32 row;
    s32 k;

    for (row = 0; row < 0x14; row++) {
        for (k = 0; k < 4; k++) {
            if (D_0014BEC0[row * 4 + k] != 0) {
                count++;
            }
        }
    }
    if (count < 0) {
        count = 0;
    }
    return (count < 0x29) ? count : 0x28;
}

extern __typeof__(FUN_00215290) func_00215290 __attribute__((alias("FUN_00215290")));
