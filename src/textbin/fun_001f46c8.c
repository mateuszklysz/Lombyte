#include "types.h"
extern s32 D_0015F46C;
extern void (*D_0018DF40[])(s32);
extern s32 D_0018E040[];
void FUN_001f46c8(void) {
    s32 i;

    for (i = 0; i < D_0015F46C; i++) {
        D_0018DF40[i](D_0018E040[i]);
    }
}

extern __typeof__(FUN_001f46c8) func_001F46C8 __attribute__((alias("FUN_001f46c8")));
