#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4be0/FUN_001f4be0.s", FUN_001f4be0);
#else
#include "types.h"

struct TextBox { u8 pad0[0xA]; s16 y; s16 w; s16 h; u8 pad10[2]; u16 flags; u8 pad14[0xC]; };
struct Subtitle { s16 start; s16 end; s16 text[6]; };
struct Subtitles { u8 pad0[0x34]; s32 frame; u8 pad38[0x14]; u8 *data; };
struct Screen { s32 w; s32 h; u8 pad8[0x18]; };

extern struct Subtitles D_0018CB20;
extern struct Screen D_0013E500;
extern void InitializeDmaPacket(struct TextBox *packet, u16 word0, u16 word1, u16 word2, u16 word3, u16 word4, s32 word5, u16 word6, u32 word7);
extern void func_001F7580(struct TextBox *, u64, u8 *, s32);
extern void func_001F5F18(s32, s32, s32, s32, s32);

extern s32 D_0015ED88;
__asm__(".extern D_0015ED88, 4");

void FUN_001f4be0(void) {
    struct TextBox box;
    struct Subtitle *e;
    s16 *text;
    s32 lang;
    s32 hh;
    s32 hw;
    s32 hw2;
    s32 t;
    s32 u;

    if (D_0018CB20.data == 0) {
        return;
    }
    if (D_0015ED88 >= 2 && D_0015ED88 <= 5) {
        lang = D_0015ED88 - 1;
    } else {
        lang = 0;
    }
    e = (struct Subtitle *)D_0018CB20.data;
    text = &e->text[lang];
    for (; e->start >= 0; e++, text += 8) {
        if (D_0018CB20.frame < e->start || e->end < D_0018CB20.frame) {
            continue;
        }
        InitializeDmaPacket(&box, 0xC8, 0x208, 0x28, 0x1D8, 0x100, D_0013E500.h - 0x38, 0x12, 7);
        func_001F7580(&box, ((u64)0x80B0 << 16) | 0xB0B0, D_0018CB20.data + *text, -1);
        hw2 = box.w >> 1;
        hw = hw2 + 0xA;
        hh = (box.h >> 1) + 5;
        box.y = (u16)D_0013E500.h - 0x3C;
        u = box.y + hh;
        if (D_0013E500.h - 0x14 < u) {
            t = (box.h >> 1) + 0x19;
            box.y = (u16)D_0013E500.h - t;
        }
        func_001F5F18(box.y - hh, box.y + hh, 0x100 - hw, hw2 + 0x10A, 0x60);
        box.flags &= ~4;
        func_001F7580(&box, ((u64)0x80B0 << 16) | 0xB0B0, D_0018CB20.data + *text, -1);
        return;
    }
}
#endif /* NON_MATCHING */
