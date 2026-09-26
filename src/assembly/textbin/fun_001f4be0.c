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
extern s32 D_0015ED88;
extern void InitializeDmaPacket(struct TextBox *, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_001F7580(struct TextBox *, u64, u8 *, s32);
extern void func_001F5F18(s32, s32, s32, s32, s32);

void FUN_001f4be0(void) {
    struct TextBox box;
    struct Subtitles *s = &D_0018CB20;
    struct Screen *scr = &D_0013E500;
    struct Subtitle *e;
    s16 *text;
    s32 lang;
    s32 hh;
    s32 hw;

    if (s->data == 0) {
        return;
    }
    if (D_0015ED88 >= 2 && D_0015ED88 <= 5) {
        lang = D_0015ED88 - 1;
    } else {
        lang = 0;
    }
    e = (struct Subtitle *)s->data;
    text = &e->text[lang];
    for (; e->start >= 0; e++, text += 8) {
        if (s->frame < e->start || e->end < s->frame) {
            continue;
        }
        InitializeDmaPacket(&box, 0xC8, 0x208, 0x28, 0x1D8, 0x100, scr->h - 0x38, 0x12, 7);
        func_001F7580(&box, ((u64)0x80B0 << 16) | 0xB0B0, s->data + *text, -1);
        hh = (box.h >> 1) + 5;
        hw = (box.w >> 1) + 0xA;
        box.y = (u16)scr->h - 0x3C;
        if (scr->h - 0x14 < box.y + hh) {
            box.y = (u16)scr->h - ((box.h >> 1) + 0x19);
        }
        func_001F5F18(box.y - hh, box.y + hh, 0x100 - hw, (box.w >> 1) + 0x10A, 0x60);
        box.flags &= ~4;
        func_001F7580(&box, ((u64)0x80B0 << 16) | 0xB0B0, s->data + *text, -1);
        return;
    }
}
#endif /* NON_MATCHING */
