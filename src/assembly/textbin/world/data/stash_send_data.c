#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/world/data/stash_send_data/FUN_00232e40.s", FUN_00232e40);
#else
#include "types.h"
struct SifDmaData { u32 data; u32 addr; u32 size; u32 mode; };
struct StashEntry { s32 addr; s32 count; s32 tag; s32 pad; };
struct Stash { s32 base; s32 size; u8 pad8[0x28]; s32 cur; s32 n; };
extern struct Stash D_001DD1A0;
extern struct StashEntry D_001DD1D8[];
extern u32 sceSifSetDma(struct SifDmaData *, s32);
s32 stash_send_data(u32 src, s32 qw, s32 count, s32 tag) __asm__("FUN_00232e40");

s32 stash_send_data(u32 src, s32 qw, s32 count, s32 tag) {
    struct SifDmaData dma;
    s32 bytes;
    s32 n;

    bytes = count << 4;
    if (D_001DD1A0.size - (D_001DD1A0.cur - D_001DD1A0.base) < bytes) {
        return -1;
    }
    if (D_001DD1A0.n == 64) {
        return -2;
    }
    dma.data = src;
    dma.addr = D_001DD1A0.cur;
    dma.size = qw << 4;
    dma.mode = 0;
    sceSifSetDma(&dma, 1);
    n = D_001DD1A0.n;
    D_001DD1D8[n].addr = D_001DD1A0.cur;
    D_001DD1D8[n].count = count;
    D_001DD1D8[n].tag = tag;
    D_001DD1A0.cur += bytes;
    D_001DD1A0.n++;
    return n;
}
#endif /* NON_MATCHING */
