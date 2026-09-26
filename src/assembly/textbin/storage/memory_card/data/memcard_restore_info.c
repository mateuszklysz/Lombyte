#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/storage/memory_card/data/memcard_restore_info/FUN_0020ae60.s", FUN_0020ae60);
#else
#include "types.h"

extern u8 D_0013D290[];
s32 validate_data_crc(s32 *) __asm__("FUN_0020ad38");

struct Name8 { u8 c[8]; };
struct SrcEntry { s32 value; u8 pad_4[8]; };
struct SaveSrc {
    u8 pad_0[0x10];
    struct SrcEntry entries[4];
    struct Name8 name;
};
struct Info {
    u8 pad_0[0x20];
    s32 values[4];
    struct Name8 name;
    s32 empty;
};

void FUN_0020ae60(struct SaveSrc *src, s32 slot, s32 idx) {
    s32 r;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    r = validate_data_crc((s32 *)src);
    a = (s32 *)((u8 *)D_0013D290 + (slot * 0xB8 + idx * 0x1C) + 0x38);
    b = (s32 *)((u8 *)D_0013D290 + (slot * 0xB8 + idx * 0x1C) + 0x20);
    c = (s32 *)((u8 *)D_0013D290 + (slot * 0xB8 + idx * 0x1C) + 0x24);
    d = (s32 *)((u8 *)D_0013D290 + (slot * 0xB8 + idx * 0x1C) + 0x28);
    *a = r == 0;
    *b = src->entries[0].value;
    *c = src->entries[1].value;
    *d = src->entries[2].value;
    *(s32 *)((u8 *)D_0013D290 + (slot * 0xB8 + idx * 0x1C) + 0x2C) = src->entries[3].value;
    *(struct Name8 *)((u8 *)D_0013D290 + 0x30 + (slot * 0xB8 + idx * 0x1C)) = src->name;
}
#endif /* NON_MATCHING */
