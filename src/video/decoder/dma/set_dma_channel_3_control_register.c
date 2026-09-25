#include "types.h"

extern void DIntr(void);
extern void EnableInterrupts(void);

void set_dma_channel_3_control_register(s32 arg0) __asm__("FUN_0023bb40");

void set_dma_channel_3_control_register(s32 arg0) {
    DIntr();
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 | 0x10000;
    *(volatile s32 *)0x1000B000 = arg0;
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 & 0xFFFEFFFF;
    EnableInterrupts();
}
