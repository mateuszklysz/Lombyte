/* ROLE: recovered function `setD3_CHCR__FUi` (movie/vibuf.cpp, 0x70 bytes) starts here; this unit covers only its first fragment. */
#include "types.h"

extern void DIntr(void);
extern void EnableInterrupts(void);

void FUN_0023bb40(s32 arg0) {
    DIntr();
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 | 0x10000;
    *(volatile s32 *)0x1000B000 = arg0;
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 & 0xFFFEFFFF;
    EnableInterrupts();
}
