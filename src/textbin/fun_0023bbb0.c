/*
STATE: C_EXACT
SYMBOL: setD4_CHCR__FUi
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `setD4_CHCR__FUi` starts here; this unit covers only its beginning. */
#include "types.h"

extern void DIntr(void);
extern void EnableInterrupts(void);

void FUN_0023bbb0(s32 arg0) {
    DIntr();
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 | 0x10000;
    *(volatile s32 *)0x1000B400 = arg0;
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 & 0xFFFEFFFF;
    EnableInterrupts();
}
