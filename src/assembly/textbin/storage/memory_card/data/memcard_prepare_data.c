#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/storage/memory_card/data/memcard_prepare_data/FUN_0020ad78.s", FUN_0020ad78);
#else
#include "types.h"
struct SaveBlock { u8 *base; s32 size; s32 id; s32 pad; };
struct SaveHeader { s32 size; s32 checksum; };
extern void func_001F9838(void *, void *, s32);
extern s32 func_0020ACC0(void *, s32);
s32 FUN_0020ad78(struct SaveHeader *out, s32 slot, struct SaveBlock *block) {
    u8 *p;
    u8 *src;
    s32 total;

    total = 0;
    p = (u8 *)(out + 1);
    while (block->base != 0) {
        src = block->base + slot * block->size;
        ((s32 *)p)[0] = block->id;
        ((s32 *)p)[1] = block->size;
        p += 8;
        total += 8;
        func_001F9838(p, src, block->size);
        p += block->size;
        total += block->size;
        p = (u8 *)(((s32)p + 3) & ~3);
        total = (total + 3) & ~3;
        block++;
    }
    ((s32 *)p)[1] = 0;
    ((s32 *)p)[0] = -1;
    total += 8;
    out->checksum = func_0020ACC0(out + 1, total);
    out->size = total;
    return total + 8;
}
#endif /* NON_MATCHING */
