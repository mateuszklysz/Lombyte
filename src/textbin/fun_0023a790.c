#include "types.h"

extern s32 D_0016120C[];
extern s32 func_0023AEE0();

s32 FUN_0023a790(void) {
    s32 result;
    result = func_0023AEE0(D_0016120C[0] + 0xD9100);
    return result;
}

extern s32 func_0023A790(void) __attribute__((alias("FUN_0023a790")));
