#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/vi_buf_stop_dma/FUN_0023c170.s", FUN_0023c170);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
};

extern void SignalSema();
extern void WaitSema();
extern void func_0023BB40();
extern void func_0023BBB0();
s32 vi_buf_stop_dma(struct M2c_arg0 *arg0) __asm__("FUN_0023c170");

s32 vi_buf_stop_dma(struct M2c_arg0 *arg0) {
    WaitSema(arg0->unk40);
    arg0->unk44 = 0;
    func_0023BBB0(5);
    arg0->unk1C = (s32) *(s32 *)0x1000B410;
    arg0->unk20 = (s32) *(s32 *)0x1000B430;
    arg0->unk24 = (s32) *(s32 *)0x1000B420;
    arg0->unk28 = (s32) *(s32 *)0x1000B400;
    if (*(s32 *)0x10002010 & 0xF0) {
        do {

        } while (*(volatile u32 *)0x10002010 & 0xF0);
    }
    func_0023BB40(0, 0x1000B420, 0x1000B400, 0x1000B430);
    arg0->unk2C = (s32) *(s32 *)0x1000B010;
    arg0->unk30 = (s32) *(s32 *)0x1000B020;
    arg0->unk34 = (s32) *(s32 *)0x1000B000;
    arg0->unk38 = (s32) *(s32 *)0x10002020;
    arg0->unk3C = (s32) *(volatile u32 *)0x10002010;
    SignalSema(arg0->unk40, 0x10002010, 0x1000B000, 0x10002020, 0x1000B020);
    return 1;
}
#endif /* NON_MATCHING */
