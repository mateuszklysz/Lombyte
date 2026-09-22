#include "types.h"

extern s32 _sceSDC();
extern s32 DIntr();
extern s32 EnableInterrupts();

void FUN_00118f88(s32 arg0, s32 arg1) {
    u32 status;

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    if (status != 0) {
        DIntr();
    }
    _sceSDC(arg0 & 0xFFFFFFC0, arg1 & 0xFFFFFFC0);
    if (status != 0) {
        EnableInterrupts();
    }
}
