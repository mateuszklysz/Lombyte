#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002028e0/FUN_002028e0.s", FUN_002028e0);
#else
#include "types.h"
struct Sprite { s32 pad0; s32 pad4; s16 x; s16 y; s16 w; s16 h; };
struct Group { s32 count; u8 pad4[0x1C]; s32 items[1]; };
struct SpriteFile {
    u8 pad0[4]; s16 loaded; s16 ngroups; u8 pad8[4]; s16 nsprites; u8 padE[2];
    s32 sprites; s32 f14; s32 f18; s32 f1C; s32 groups[1];
};
extern struct SpriteFile *D_0016045C;
extern s16 func_001F97A0(s32);

void FUN_002028e0(struct SpriteFile *f) {
    s32 *src;
    s32 i;
    s32 j;
    s32 a;
    s32 b;
    s32 d;
    struct Group *g;

    D_0016045C = f;
    f->loaded = 1;
    f->sprites += (s32)f;
    f->f14 += (s32)f;
    f->f18 += (s32)f;
    if (f->f1C != 0) {
        f->f1C += (s32)f;
    }
    src = (s32 *)D_0016045C->sprites;
    for (i = 0; i < D_0016045C->nsprites; i++) {
        a = *src++;
        b = *src++;
        j = *src++;
        d = *src++;
        ((struct Sprite *)D_0016045C->sprites)[i].y = a >> 4;
        ((struct Sprite *)D_0016045C->sprites)[i].x = b >> 4;
        ((struct Sprite *)D_0016045C->sprites)[i].w = func_001F97A0(j);
        ((struct Sprite *)D_0016045C->sprites)[i].h = func_001F97A0(d);
        *(u64 *)&((struct Sprite *)D_0016045C->sprites)[i] = 0;
    }
    for (i = 0; i < D_0016045C->ngroups; i++) {
        D_0016045C->groups[i] += (s32)f;
        g = (struct Group *)D_0016045C->groups[i];
        for (j = 0; j < g->count; j++) {
            ((struct Group *)((u8 *)g + j * 0x20))->items[0] += (s32)f;
        }
    }
}
#endif /* NON_MATCHING */
