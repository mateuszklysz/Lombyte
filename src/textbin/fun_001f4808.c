#include "types.h"
extern s32 D_0015F468;
extern void (*D_0018DD40[])(s32);
extern s32 D_0018DE40[];
void FUN_001f4808(void) {
    s32 i;

    for (i = 0; i < D_0015F468; i++) {
        D_0018DD40[i](D_0018DE40[i]);
    }
}

extern __typeof__(FUN_001f4808) func_001F4808 __attribute__((alias("FUN_001f4808")));
