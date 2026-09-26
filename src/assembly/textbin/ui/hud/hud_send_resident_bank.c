#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/hud/hud_send_resident_bank/FUN_001ff128.s", FUN_001ff128);
#else
#include "types.h"
struct TexEntry { u32 data; s16 page; u8 log_w; u8 log_h; };
struct TexCounts { u8 pad0[0x34]; s32 ends[16]; s32 loaded[16]; };
struct TexTable { u8 pad0[0x18]; struct TexCounts *counts; u8 pad1C[8]; struct TexEntry *entries; };
extern struct TexTable D_0019A3E8;
extern s32 D_0015EE88[];
extern void func_001FEFC0(s32);
extern void func_00200B10(u32, s32, s32, s32, s32, s32);
void hud_send_resident_bank(s32 bank, s32 unused, s32 arg2) __asm__("FUN_001ff128");

void hud_send_resident_bank(s32 bank, s32 unused, s32 arg2) {
    s32 addr;
    s32 i;
    s32 end;
    s32 page;
    s32 start;
    s32 w;
    s32 size;
    struct TexEntry *e;

    if (D_0019A3E8.counts->loaded[bank] == 0) {
        func_001FEFC0(0);
    }
    addr = D_0015EE88[0];
    start = bank != 0 ? D_0019A3E8.counts->ends[bank - 1] : 0;
    end = D_0019A3E8.counts->ends[bank];
    for (i = start; i < end; i++) {
        e = &D_0019A3E8.entries[i];
        page = addr >> 8;
        w = e->log_w;
        size = 1 << (w + e->log_h);
        func_00200B10(e->data, page, 0x1B, w, e->log_h, arg2);
        addr += size * 4;
        D_0019A3E8.entries[i].page = page;
    }
}
#endif /* NON_MATCHING */
