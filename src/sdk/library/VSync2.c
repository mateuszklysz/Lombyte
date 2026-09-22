#include "types.h"

extern s32 DIntr();
extern s32 EnableInterrupts();
extern void SetVSyncFlag(s32 *flag, s64 *result);

s64 VSync2(void) {
    volatile s32 flag;
    volatile s64 result;

    s32 old;

    flag = 0;
    SetVSyncFlag((s32 *)&flag, &result);
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
    while ((*(volatile u32 *)0x1000F000 & 4) == 0 && flag == 0) {
    }
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
    return result;
}
