#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/text/link_localized_display_text/FUN_001fdd58.s", FUN_001fdd58);
#else
#include "types.h"

struct TextBox {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct TextEntry {
    void *text;
    s32 pad[3];
};

extern struct TextBox D_001996D0;
extern u8 D_0015EE1C;
extern u8 D_0015EE1D;
extern struct TextEntry *D_0015F6A0;
extern s32 D_0013E504[];
extern void func_0022DB10(s32, s32, s32);
extern void InitializeDmaPacket(u16 *packet, u16 w0, u16 w1, u16 w2, u16 w3, u16 w4, u16 w5, u16 w6, u32 w7);
extern void func_001F75F0(void *, u64, void *, s32);

void link_localized_display_text(void) __asm__("FUN_001fdd58");

void link_localized_display_text(void) {
    struct TextBox *box;
    s16 pkt[16];
    void *text;
    s32 h;
    s32 half;
    s32 y;
    s32 w;

    D_001996D0.unk0 = 1;
    D_001996D0.unk4 = 0;
    if (D_0015EE1D != 0 || D_0015EE1C != 0) {
        func_0022DB10(0, 1, 0);
    }
    box = &D_001996D0;
    text = D_0015F6A0[box->unk20].text;
    InitializeDmaPacket((u16 *)pkt, 0xF0, 0x1E0, 0x2C, 0x1D4, 0x100, 0x168, 0x10, 7);
    func_001F75F0(pkt, 0x80FFA888, text, -1);
    h = D_0013E504[0];
    half = pkt[7] >> 1;
    y = h - 0x3C;
    w = half + 5;
    box->unk8 = (pkt[6] >> 1) + 10;
    box->unk10 = 0x100;
    box->unk1C = 8;
    box->unkC = w;
    box->unk18 = 8;
    box->unk14 = y;
    if (y > h - w - 0xC) {
        box->unk14 = h - (half + 0x11);
    }
}
#endif /* NON_MATCHING */
