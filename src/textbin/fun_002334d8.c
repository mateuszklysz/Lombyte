#include "types.h"

extern void SpinWait(s32);

void FUN_002334d8(s32 arg0)
{
    if ((*(volatile u32 *)0x10008000 & 0x100) != 0) {
        do {
            SpinWait(0x10);
        } while ((*(volatile u32 *)0x10008000 & 0x100) != 0);
    }
    *(volatile u32 *)0x10008020 = 0;
    *(volatile u32 *)0x10008030 = arg0 & 0x0FFFFFFF;
    *(volatile u32 *)0x10008000 = 0x145;
    if ((*(volatile u32 *)0x10008000 & 0x100) != 0) {
        do {
            SpinWait(0x10);
        } while ((*(volatile u32 *)0x10008000 & 0x100) != 0);
    }
}

extern __typeof__(FUN_002334d8) func_002334D8 __attribute__((alias("FUN_002334d8")));
