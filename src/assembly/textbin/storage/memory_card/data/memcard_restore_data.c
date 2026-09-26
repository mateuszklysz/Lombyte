#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/storage/memory_card/data/memcard_restore_data/FUN_0020af20.s", FUN_0020af20);
#else
#include "types.h"

struct SaveEntry {
    u8 *data;
    s32 size;
    s32 id;
    s32 status;
};

struct SaveBlock {
    s32 id;
    s32 size;
    u8 data[1];
};

struct CardSlot {
    u8 pad0[0xAC];
    s32 errors;
    u8 padB0[8];
};

struct CardState {
    struct CardSlot slot[1];
    u8 padB8[0xC];
    s32 cur;
};

extern struct CardState D_0013D290;
extern s32 D_0015FE90;
__asm__(".extern D_0015FE90, 4");
extern s32 func_0020AD38(s32 *header);
extern s32 memcmp(const void *, const void *, s32);
extern void func_001F9838(void *, void *, s32);
extern s32 GetDmaPacketSpanBytes(struct SaveEntry *tbl);

s32 memcard_restore_data(u8 *buf, s32 slot, struct SaveEntry *tbl) __asm__("FUN_0020af20");

s32 memcard_restore_data(u8 *buf, s32 slot, struct SaveEntry *tbl) {
    struct SaveEntry *e;
    s32 errors;
    s32 total;
    s32 i;
    s32 n;
    u8 *dst;

    if (func_0020AD38((s32 *)buf) == 0) {
        return 1;
    }
    buf += 8;
    errors = 0;
    total = 8;
    for (i = 0; tbl[i].data != 0; i++) {
        tbl[i].status = 0;
    }
    while (((struct SaveBlock *)buf)->id != -1) {
        for (i = 0; tbl[i].data != 0; i++) {
            if (tbl[i].id == ((struct SaveBlock *)buf)->id) {
                break;
            }
        }
        e = (struct SaveEntry *)(((u32)i << 4) + (u32)tbl);
        if (e->data != 0) {
            dst = e->data + slot * e->size;
            if (e->size == ((struct SaveBlock *)buf)->size) {
                n = e->size;
                e->status = 1;
            } else if (e->size > ((struct SaveBlock *)buf)->size) {
                n = ((struct SaveBlock *)buf)->size;
                e->status = -1;
            } else {
                n = e->size;
                e->status = -2;
            }
            if (memcmp(dst, ((struct SaveBlock *)buf)->data, n) != 0) {
                D_0015FE90++;
            }
            func_001F9838(dst, ((struct SaveBlock *)buf)->data, n);
            total += ((n + 3) & ~3) + 8;
        } else {
            errors++;
        }
        buf += ((((struct SaveBlock *)buf)->size + 3) & ~3) + 8;
    }
    total += 8;
    if (total != GetDmaPacketSpanBytes(tbl)) {
        errors++;
    }
    buf += 8;
    for (e = tbl; e->data != 0 && e->id != ((struct SaveBlock *)buf)->id; e++) {
        if (e->status <= 0) {
            errors++;
        }
    }
    D_0013D290.slot[D_0013D290.cur].errors = errors;
    return errors;
}
#endif /* NON_MATCHING */
