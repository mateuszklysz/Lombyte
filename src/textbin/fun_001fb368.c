#include "types.h"

extern u8 D_00152040[];
extern u8 * volatile D_00160F00;

void FUN_001fb368(void)
{
    u8 *base;

    base = D_00160F00;
    if (base != 0)
    {
        *(s32 *)(base + 0x0) = 0x30000015;
        *(u8 **)(D_00160F00 + 0x4) = D_00152040;
        *(s32 *)(D_00160F00 + 0x8) = 0;
        *(s32 *)(D_00160F00 + 0xC) = 0x50000015;
        D_00160F00 += 0x10;
    }
}

extern __typeof__(FUN_001fb368) func_001FB368 __attribute__((alias("FUN_001fb368")));
