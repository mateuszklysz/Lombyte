#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/world/animation/update_world_object_animation/FUN_00204790.s", FUN_00204790);
#else
#include "types.h"

struct PartList {
    u8 pad00[6];
    u8 flag;          /* 0x06 */
    u8 pad07[5];
    u8 used;          /* 0x0C */
    u8 pad0D[0x3B];
    s32 entries[1];   /* 0x48 */
};

struct ColorSrc {
    u8 pad00[0x38];
    u64 color;        /* 0x38 */
};

struct RenderGlobals {
    u8 pad00[0x2080];
    struct ColorSrc *color_src;  /* 0x2080 */
};

struct GlobalIndex {
    u8 pad00[0x26];
    s16 slot;         /* 0x26 */
};

struct Moby {
    u8 pad00[0x24];
    struct PartList *parts;  /* 0x24 */
    u8 pad28[0xA];
    u16 unk32;        /* 0x32 */
    u16 unk34;        /* 0x34 */
    u8 pad36[2];
    u64 color;        /* 0x38 */
    u8 pad40[8];
    s32 attach;       /* 0x48 */
    u8 pad4C[6];
    u8 idx;           /* 0x52 */
    u8 slot;          /* 0x53 */
    u8 pad54[0x1E];
    u8 flag72;        /* 0x72 */
    u8 flag73;        /* 0x73 */
    u8 pad74[4];
    s32 model;        /* 0x78 */
    u8 pad7C[0x18];
    s32 unk94;        /* 0x94 */
};

struct ModelRec {
    u16 flags;        /* 0x00 */
    u8 pad02[2];
    s32 part_count;   /* 0x04 */
    u16 pad08;
    u8 pad0A[2];
    u16 num_parts;    /* 0x0C */
    u8 pad0E[2];
    s32 end_off;      /* 0x10 */
    s32 part_off[1];  /* 0x14 */
};

struct TransferState {
    u8 pad00[0x38];
    s32 unk38;        /* 0x38 */
    u8 pad3C[4];
    u16 unk40;        /* 0x40 */
    u8 pad42[2];
    s16 num_parts;    /* 0x44 */
    u8 pad46[2];
    u16 unk48;        /* 0x48 */
    s32 unk4C;        /* 0x4C */
    s32 unk50;        /* 0x50 */
    s32 unk54;        /* 0x54 */
    struct ModelRec *rec;     /* 0x58 */
    s32 unk5C;        /* 0x5C */
    u8 pad60[0x118];
    struct Moby *slots[1];    /* 0x178 */
};

extern struct TransferState D_0018CB20;
extern struct GlobalIndex D_0013E030;
extern struct RenderGlobals D_0013F350;
extern s32 D_0015F604;
extern s32 D_00160488[];
extern void FlushCache(s32);
extern s32 func_0020B618(s32, s32);
extern struct Moby *func_0020C4F8(s32);

void update_world_object_animation(void *arg0) __asm__("FUN_00204790");

void update_world_object_animation(void *arg0) {
    struct ModelRec *rec;
    struct Moby *mob;
    s32 *cp;
    s32 *sp;
    s32 *wp;
    s32 i;
    s32 k;
    s32 idx;
    s32 id;
    s32 off;
    s32 endp;

    FlushCache(0);
    func_0020B618(D_0018CB20.unk5C, (s32)D_0018CB20.rec);
    FlushCache(0);

    rec = D_0018CB20.rec;
    D_0018CB20.unk38 = 0;
    cp = rec->part_off;
    D_0018CB20.unk40 = rec->flags;
    D_0018CB20.unk48 = rec->pad08;
    D_0018CB20.num_parts = rec->num_parts;
    D_0018CB20.unk54 = (s32)rec + rec->end_off;
    if (rec->part_count < 0x400) {
        D_0018CB20.unk4C = 0;
    } else {
        D_0018CB20.unk4C = (s32)rec + rec->part_count;
    }

    for (i = 0; i < D_0018CB20.num_parts; i++) {
        off = *cp++;
        sp = (s32 *)((u8 *)rec + off);
        id = sp[0];
        sp = (s32 *)((u8 *)sp + 0xC);
        endp = (s32)rec + sp[0];
        sp = (s32 *)((u8 *)sp + 4);
        if (D_0015F604 == 6 && i == 0 && id == 0x215) {
            id = D_00160488[D_0013E030.slot];
        }
        mob = D_0018CB20.slots[i];
        if (mob == 0) {
            mob = func_0020C4F8(id);
            idx = mob->parts->used;
            mob->parts->used = idx + 1;
            mob->slot = idx;
            mob->idx = idx;
            mob->unk32 = 0x1FF;
            mob->unk34 |= 6;
            mob->flag72 = 0xFF;
            mob->unk94 = 0;
            if (D_0013F350.color_src != 0) {
                mob->color = D_0013F350.color_src->color;
            } else {
                mob->color = 0x38383800000000;
            }
            if (mob->parts->flag) {
                mob->flag73 = 0x18;
            }
            D_0018CB20.slots[i] = mob;
        }
        mob->model = endp;
        mob->parts->entries[mob->idx] = sp;
        if (((u8 *)sp)[0x10] != 0) {
            wp = (s32 *)((u8 *)sp + 0x1C);
            k = 0;
            while (k < ((u8 *)sp)[0x10]) {
                *wp = (s32)sp + *wp;
                k++;
                wp++;
            }
        }
    }
}
#endif /* NON_MATCHING */
