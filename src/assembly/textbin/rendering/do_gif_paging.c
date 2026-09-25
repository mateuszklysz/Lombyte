#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/do_gif_paging/FUN_001f4398.s", FUN_001f4398);
#else
#include "types.h"
struct DmaTag { u32 w0; u32 addr; u32 w2; u32 w3; };
struct TagPtr { struct DmaTag *p; };
extern struct TagPtr D_00160F00;
struct GifPaging { struct DmaTag *start; struct DmaTag *end; };
extern struct GifPaging D_0015F450;
struct TexState { u8 pad0[0x2C]; s32 paging; };
extern struct TexState D_0018A2B0;
extern void func_0020B4A8(void);
extern void func_00233B68(void);
void do_gif_paging(void) __asm__("FUN_001f4398");

void do_gif_paging(void) {
    struct DmaTag *tag;

    tag = D_00160F00.p;
    D_0015F450.end = tag;
    D_00160F00.p = tag + 1;
    D_0015F450.start->w0 = 0x20000000;
    D_0015F450.start->addr = (u32)D_00160F00.p;
    D_0015F450.start->w2 = 0;
    D_0015F450.start->w3 = 0;
    if (D_0018A2B0.paging != 0) {
        func_0020B4A8();
        func_00233B68();
    }
    D_00160F00.p->w0 = 0x20000000;
    D_00160F00.p->addr = (u32)(D_0015F450.start + 1);
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = 0;
    D_00160F00.p++;
    D_0015F450.end->w0 = 0x20000000;
    D_0015F450.end->addr = (u32)D_00160F00.p;
    D_0015F450.end->w2 = 0;
    D_0015F450.end->w3 = 0;
}
#endif /* NON_MATCHING */
