#include "types.h"
extern u8 *D_00160F00;
extern void func_001F98D0(u8 *, void *, s32);
void write_vif_unpack_packet(s32 addr, void *src, s32 qwc) __asm__("FUN_00233888");

void write_vif_unpack_packet(s32 addr, void *src, s32 qwc) {
    *(u32 *)(D_00160F00 + 0) = qwc | 0x10000000;
    *(u32 *)(D_00160F00 + 4) = 0;
    *(u32 *)(D_00160F00 + 8) = 0x01000404;
    *(u32 *)(D_00160F00 + 12) = addr | (qwc << 16) | 0x6C000000;
    D_00160F00 += 0x10;
    func_001F98D0(D_00160F00, src, qwc * 16);
    D_00160F00 += qwc * 16;
}

extern __typeof__(write_vif_unpack_packet) func_00233888 __attribute__((alias("FUN_00233888")));
