#include "types.h"
struct M2c_D_00154A50 {
    s32 unk0;
    volatile s32 unk4;
    volatile s32 unk8;
    volatile s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct Mmio {
    u16 unk0; u16 unk2; u16 unk4; u8 unk6; u8 unk7; u32 unk8;
};
extern struct M2c_D_00154A50 D_00154A50;
extern u8 D_00154A80[];
extern u8 D_00154BC0[];
extern s32 FlushCache();
extern s32 func_00119568();
extern s32 sceDeci2Open();
extern void sceTtyHandler();
s32 sceTtyInit(void) {
    struct M2c_D_00154A50 *state = &D_00154A50;
    register struct Mmio *p __asm__("v0");
    register struct Mmio *q __asm__("a0");
    register u32 mask __asm__("v1");
    register s32 baud __asm__("a2");
    register s32 cmd __asm__("a1");
    s32 ret;

    FlushCache(0);
    *(volatile s32 *)&state->unk0 = sceDeci2Open(0x210, state, &sceTtyHandler);
    if (state->unk0 < 0) {
        return 0;
    }
    state->unkC = 0;
    mask = 0x20000000;
    q = (struct Mmio *)((u32)D_00154BC0 | mask);
    state->unk4 = 0;
    p = (struct Mmio *)((u32)D_00154A80 | mask);
    state->unk8 = 0;
    state->unk14 = (s32)q;
    state->unk10 = (s32)p;
    baud = 0x210;
    cmd = 0x45;
    p->unk2 = 0;
    p->unk4 = baud;
    p->unk6 = cmd;
    p->unk7 = 0x48;
    p->unk8 = 0;
    state->unk18 = func_00119568(0x100, cmd, baud);
    return 1;
}
