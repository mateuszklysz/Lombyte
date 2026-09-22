#include "types.h"

extern s32 DIntr();
extern s32 EnableInterrupts();

void VSync(void) {
    s32 old;

    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
    while ((*(volatile u32 *)0x1000F000 & 4) == 0) {
    }
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
}
