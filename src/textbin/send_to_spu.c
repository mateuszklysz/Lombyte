#include "types.h"

extern void FlushCache(s32);
extern s32 sceSifSetDma(void *, s32);
extern s32 sceSifDmaStat(s32);
extern void FUN_0012f148(s32, s32);

void FUN_0023af18(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u32 descriptor[4];
    s32 dma_id;

    FlushCache(0);
    descriptor[0] = arg1;
    descriptor[1] = arg0[0x48 / 4];
    descriptor[2] = arg2;
    descriptor[3] = 0;
    do {
        dma_id = sceSifSetDma(descriptor, 1);
    } while (dma_id == 0);
    while (sceSifDmaStat(dma_id) >= 0) {
    }
    FUN_0012f148(arg2, arg3);
}

extern __typeof__(FUN_0023af18) func_0023AF18 __attribute__((alias("FUN_0023af18")));
