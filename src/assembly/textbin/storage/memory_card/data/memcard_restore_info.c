#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/storage/memory_card/data/memcard_restore_info/FUN_0020ae60.s", FUN_0020ae60);
#else
#include "types.h"
struct Name8 { u8 c[8]; };
struct SrcEntry { s32 value; u8 pad4[8]; };
struct SaveSrc { u8 pad0[0x10]; struct SrcEntry entries[4]; struct Name8 name; };
struct SlotInfo { u8 pad0[0x20]; s32 values[4]; struct Name8 name; s32 empty; };
extern u8 D_0013D290[];
extern s32 func_0020AD38(struct SaveSrc *, s32, s32);
void FUN_0020ae60(struct SaveSrc *src, s32 slot, s32 idx) {
    s32 r = func_0020AD38(src, slot, idx);
    struct SlotInfo *info = (struct SlotInfo *)(D_0013D290 + slot * 0xB8 + idx * 0x1C);
    info->empty = r == 0;
    info->values[0] = src->entries[0].value;
    info->values[1] = src->entries[1].value;
    info->values[2] = src->entries[2].value;
    info->values[3] = src->entries[3].value;
    info->name = src->name;
}
#endif /* NON_MATCHING */
