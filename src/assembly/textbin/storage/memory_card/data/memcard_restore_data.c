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
extern s32 func_0020AD38(u8 *buf, s32 slot, struct SaveEntry *tbl);
extern s32 memcmp(const void *, const void *, s32);
extern void func_001F9838(void *, void *, s32);
extern s32 GetDmaPacketSpanBytes(struct SaveEntry *tbl);

s32 memcard_restore_data(u8 *buf, s32 slot, struct SaveEntry *tbl) __asm__("FUN_0020af20");

s32 memcard_restore_data(u8 *buf, s32 slot, struct SaveEntry *tbl) {
    struct SaveBlock *blk;
    struct SaveEntry *e;
    s32 errors;
    s32 total;
    s32 i;
    s32 n;
    u8 *dst;

    if (func_0020AD38(buf, slot, tbl) == 0) {
        return 1;
    }
    blk = (struct SaveBlock *)(buf + 8);
    errors = 0;
    total = 8;
    for (e = tbl; e->data != 0; e++) {
        e->status = 0;
    }
    while (blk->id != -1) {
        for (i = 0; tbl[i].data != 0; i++) {
            if (tbl[i].id == blk->id) {
                break;
            }
        }
        e = &tbl[i];
        if (e->data != 0) {
            dst = e->data + slot * e->size;
            if (blk->size == e->size) {
                n = e->size;
                e->status = 1;
            } else if (blk->size < e->size) {
                n = blk->size;
                e->status = -1;
            } else {
                n = e->size;
                e->status = -2;
            }
            if (memcmp(dst, blk->data, n) != 0) {
                D_0015FE90++;
            }
            func_001F9838(dst, blk->data, n);
            total += ((n + 3) & ~3) + 8;
        } else {
            errors++;
        }
        blk = (struct SaveBlock *)((u8 *)blk + ((blk->size + 3) & ~3) + 8);
    }
    total += 8;
    if (total != GetDmaPacketSpanBytes(tbl)) {
        errors++;
    }
    blk = (struct SaveBlock *)((u8 *)blk + 8);
    for (e = tbl; e->data != 0 && e->id != blk->id; e++) {
        if (e->status <= 0) {
            errors++;
        }
    }
    D_0013D290.slot[D_0013D290.cur].errors = errors;
    return errors;
}
#endif /* NON_MATCHING */
