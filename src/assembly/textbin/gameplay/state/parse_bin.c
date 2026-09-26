#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/state/parse_bin/FUN_0012d8f8.s", FUN_0012d8f8);
#else
#include "types.h"

struct Chunk {
    u8 *dst;
    s32 size;
    s32 pad8;
    s32 id;
};

extern s32 *D_0015EE4C;

s64 parse_bin(void) __asm__("FUN_0012d8f8");

s64 parse_bin(void) {
    u8 *p;
    struct Chunk *c;
    u8 *dst;
    u8 *src;
    s64 id;

    id = 0;
    p = (u8 *)(D_0015EE4C[0] + (s32)D_0015EE4C);
    goto chunk;
body:
    if (((c->size & 7) == 0) && (((u32)src & 7) == 0) && (((u32)dst & 7) == 0)) {
        u8 *d = (u8 *)dst;
        u8 *e = (u8 *)dst + c->size;
        while (d != e) {
            *(u64 *)d = *(u64 *)src;
            d += 8;
            src += 8;
        }
    } else {
        u8 *e = (u8 *)dst + c->size;
        while (dst != e) {
            *(u32 *)dst = *(u32 *)src;
            dst += 4;
            src += 4;
        }
    }
    p += c->size;
chunk:
    c = (struct Chunk *)p;
    p = (u8 *)(c + 1);
    dst = c->dst;
    src = p;
    if (id == 0) {
        id = c->id;
        goto body;
    }
    if (id == c->id) {
        goto body;
    }
    return id;
}
#endif /* NON_MATCHING */
