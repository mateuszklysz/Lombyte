#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/state/parse_bin/FUN_0012d8f8.s", FUN_0012d8f8);
#else
#include "types.h"
struct Chunk { u8 *dst; u32 size; s32 pad8; s32 id; };
extern s32 *D_0015EE4C;
s32 parse_bin(void) __asm__("FUN_0012d8f8");

s32 parse_bin(void) {
    u8 *p;
    struct Chunk *c;
    s32 id;
    u8 *src;
    u8 *dst;
    u8 *end;

    id = 0;
    p = (u8 *)D_0015EE4C + D_0015EE4C[0];
    for (;;) {
        c = (struct Chunk *)p;
        p = (u8 *)(c + 1);
        dst = c->dst;
        src = p;
        if (id == 0) {
            id = c->id;
        } else if (id != c->id) {
            return id;
        }
        end = dst + c->size;
        if ((c->size & 7) == 0 && ((u32)p & 7) == 0 && ((u32)dst & 7) == 0) {
            while (dst != end) {
                *(u64 *)dst = *(u64 *)src;
                dst += 8;
                src += 8;
            }
        } else {
            while (dst != end) {
                *(u32 *)dst = *(u32 *)src;
                dst += 4;
                src += 4;
            }
        }
        p += c->size;
    }
}
#endif /* NON_MATCHING */
