#include "types.h"

extern void *D_0015F6A0;
extern u8 D_00199968[];
extern s32 func_001fdca0();

s32 FUN_001fdd10(void) {
    s32 index;
    index = func_001fdca0();
    if (index >= 0) {
        return *(s32 *) ((u8 *) D_0015F6A0 + (index * 16));
    }
    return (s32) D_00199968;
}

extern s32 func_001FDD10(void) __attribute__((alias("FUN_001fdd10")));
