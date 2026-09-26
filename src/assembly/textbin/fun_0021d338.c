#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d338/FUN_0021d338.s", FUN_0021d338);
#else
#include "types.h"
#include "rnc/d_001516d0.h"

struct Loader { u8 pad0[0x10]; s32 flags; u8 pad14[0x24]; s32 saved_count; u8 pad3c[0x14]; s32 state; s32 saved_buf; };
struct LevelFiles { u8 pad0[0x1528]; s32 sector; s32 size; };
struct LevelData { u8 pad0[0x108]; u8 *buf; };
struct Anims { u8 pad0[0x2C]; s32 count; };
struct Entry { s32 offset; u8 pad4[0xC]; };
extern struct M2c_D_001516D0 D_001516D0;
extern struct LevelFiles D_00137B80;
extern s32 D_001D5CF8[];
extern struct LevelData D_001D5BF0;
extern s32 D_0015ED88;
extern u8 *D_0015F6A0;
extern struct Anims D_001996D0;
extern s32 func_00216788(s32, s32, s32);
extern void func_001F9838(void *, void *, s32);

s32 FUN_0021d338(struct Loader *o) {
    u8 *buf;
    s32 *p;
    s32 count;
    s32 size;
    s32 i;
    struct Entry *e;

    switch (o->state) {
    case 0:
        if (D_001516D0.unk8 != 0) {
            break;
        }
        if (func_00216788(D_001D5CF8[0], D_00137B80.sector, D_00137B80.size) != 0) {
            o->state = 1;
        } else {
            o->state = 3;
        }
        break;
    case 1:
        if (D_001516D0.unk8 != 0) {
            break;
        }
        buf = D_001D5BF0.buf;
        p = (s32 *)(buf + ((s32 *)buf)[D_0015ED88]);
        count = *p++;
        size = *p++;
        func_001F9838(buf, p, ((size + 3) & ~3) - 8);
        o->saved_buf = (s32)D_0015F6A0;
        o->saved_count = D_001996D0.count;
        D_001996D0.count = count;
        D_0015F6A0 = D_001D5BF0.buf;
        e = (struct Entry *)D_0015F6A0;
        for (i = 0; i < D_001996D0.count; i++) {
            e->offset = e->offset - 8 + (s32)D_0015F6A0;
            e++;
        }
        o->flags &= ~4;
        o->state = 2;
        break;
    case 2:
        break;
    }
    return 0;
}
#endif /* NON_MATCHING */
