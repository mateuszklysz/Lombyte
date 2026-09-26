#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/parse_occlusion_grid/FUN_001f2690.s", FUN_001f2690);
#else
#include "types.h"

struct OccNode {
    u16 dim;
    u16 count;
    u16 child[1];
};

struct OccChild {
    u16 pad0;
    u16 count;
    u16 child[1];
};

struct OccRoot {
    u32 total;
    u16 depth;
    u16 count;
    u16 child[1];
};

extern struct OccRoot *D_0015F640;

s32 parse_occlusion_grid(s32 x, s32 y, s32 z) __asm__("FUN_001f2690");

s32 parse_occlusion_grid(s32 x, s32 y, s32 z) {
    struct OccRoot *root;
    struct OccNode *node;
    s32 i;
    s32 j;
    struct OccChild *p;
    s32 k;
    u16 c;
    u32 base;

    root = D_0015F640;
    base = (u32)root + root->total;
    p = (struct OccChild *)((u8 *)root + 4);
    i = z - root->depth;
    if (i < 0 || i >= (s32)p->count) {
        return 0;
    }
    if (p->child[i] == 0) {
        return 0;
    }
    node = (struct OccNode *)((u8 *)root + p->child[i] * 4);
    j = y - node->dim;
    if (j < 0 || j >= (s32)node->count) {
        return 0;
    }
    if (node->child[j] == 0) {
        return 0;
    }
    node = (struct OccNode *)((u8 *)root + node->child[j] * 4);
    k = x - node->dim;
    if (k < 0 || k >= (s32)node->count) {
        return 0;
    }
    c = node->child[k];
    if (c == 0xFFFF) {
        return 0xFFFF;
    }
    return (s32)(base + (c << 7));
}
#endif /* NON_MATCHING */
