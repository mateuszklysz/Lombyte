#include "types.h"
extern s32 D_0015F470;
extern void (*D_0018E140[])(s32);
extern s32 D_0018E240[];
void FUN_001f4740(void) {
    s32 i;

    for (i = 0; i < D_0015F470; i++) {
        D_0018E140[i](D_0018E240[i]);
    }
}

extern __typeof__(FUN_001f4740) func_001F4740 __attribute__((alias("FUN_001f4740")));
