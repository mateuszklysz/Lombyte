/* ROLE: recovered function `setD3_CHCR__FUi` starts here; this unit covers only its beginning. */
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
