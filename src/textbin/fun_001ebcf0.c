#include "types.h"
extern s32 D_0015EF8C;
extern void (*D_001892B0[])(void);
void FUN_001ebcf0(void) {
    s32 i;

    for (i = 0; i < D_0015EF8C; i++) {
        D_001892B0[i]();
    }
    D_0015EF8C = 0;
}

extern __typeof__(FUN_001ebcf0) func_001EBCF0 __attribute__((alias("FUN_001ebcf0")));
