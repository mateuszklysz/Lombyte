#include "types.h"
struct Part {
    s32 unk0;
    u8 pad_4[0x1C];
    s32 unk20;
    u8 pad_24[0xF];
    u8 unk33;
    u8 pad_34[0x1C];
};
struct Obj {
    u8 pad_0[0x23];
    u8 unk23;
    u8 pad_24[0x8];
    struct Part *unk2C;
};
struct Pair {
    s16 unk0;
    s16 unk2;
};
extern s32 D_001E3000[];
extern struct Obj *D_001E1700[];
extern struct Pair D_001E2A00[];

void FUN_00235780(void) {
    s32 *p;
    s32 i;
    struct Obj *o;
    struct Part *q;
    struct Pair *e;

    for (p = D_001E3000; *p >= 0; p++) {
        o = D_001E1700[*p];
        q = o->unk2C;
        for (i = 0; i < o->unk23; i++, q++) {
            e = &D_001E2A00[q->unk33];
            if (e->unk0 != 0) {
                q->unk0 = (q->unk0 & 0xFFFFC000) | e->unk0;
            }
            if (e->unk2 != 0) {
                q->unk20 = (q->unk20 & 0xFFFFC000) | e->unk2;
            }
        }
    }
}

extern __typeof__(FUN_00235780) func_00235780 __attribute__((alias("FUN_00235780")));
