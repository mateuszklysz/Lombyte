#include "types.h"
extern s32 D_0015EEB8;
extern u8 *D_00160F00;
extern void sceGsPutDrawEnv(s32);
void FUN_001fb2d0(void) {
    if (D_00160F00 != 0) {
        *(u32 *)(D_00160F00 + 0) = 0x30000009;
        *(u32 *)(D_00160F00 + 4) = (D_0015EEB8 + 0x30) & 0x0FFFFFFF;
        *(u32 *)(D_00160F00 + 8) = 0;
        *(u32 *)(D_00160F00 + 12) = 0x50000009;
        D_00160F00 += 0x10;
    } else {
        sceGsPutDrawEnv(D_0015EEB8 + 0x30);
    }
}

extern __typeof__(FUN_001fb2d0) func_001FB2D0 __attribute__((alias("FUN_001fb2d0")));
