#include "types.h"

extern s32 ResourceCounter __asm__("D_0015F8F8");

void DecrementResourceCounter(void) __asm__("UpdateResourceCounter");

void DecrementResourceCounter(void)
{
    if (ResourceCounter != 0) {
        ResourceCounter -= 1;
    }
}
