#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/vu1_set_scissor/FUN_00233a40.s", FUN_00233a40);
#else
#include "types.h"
struct ScissorPacket { u32 dma[4]; u32 gif[4]; u64 scissor; u32 reg; u32 pad; };
struct PacketPtr { struct ScissorPacket *p; };
extern struct PacketPtr D_00160F00;
extern s32 D_0013E500[];
void vu1_set_scissor(s32 x0, s32 y0, s32 x1, s32 y1) __asm__("FUN_00233a40");

void vu1_set_scissor(s32 x0, s32 y0, s32 x1, s32 y1) {
    s32 xmax;
    s32 ymax;
    s32 t0;
    s32 t1;
    s32 *hp;

    hp = &D_0013E500[1];
    xmax = D_0013E500[0] - 1;
    ymax = *hp - 1;
    D_00160F00.p->dma[0] = 0x10000002;
    D_00160F00.p->dma[1] = 0;
    D_00160F00.p->dma[2] = 0;
    D_00160F00.p->dma[3] = 0x50000002;
    D_00160F00.p->gif[0] = 0x8001;
    D_00160F00.p->gif[1] = 0x10000000;
    D_00160F00.p->gif[2] = 0xE;
    D_00160F00.p->gif[3] = 0;
    t0 = y0 > xmax ? xmax : y0;
    t1 = x1 > -1 ? x1 : 0;
    D_00160F00.p->scissor = (u64)(x0 > -1 ? x0 : 0)
                          | ((u64)t0 << 16)
                          | ((u64)t1 << 32)
                          | ((u64)(y1 > ymax ? ymax : y1) << 16);
    D_00160F00.p->reg = 0x40;
    D_00160F00.p->pad = 0;
    D_00160F00.p++;
}
#endif /* NON_MATCHING */
