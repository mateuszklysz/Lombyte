#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/sky/do_sky_gif_paging/FUN_0022b558.s", FUN_0022b558);
#else
#include "types.h"

struct DmaTag { u32 w0; u32 addr; u32 w2; u32 w3; };

struct TagPtr { struct DmaTag *p; };
extern struct TagPtr D_00160F00;
extern struct TagPtr D_00160470;
extern struct TagPtr D_00160474;
struct TexState { u8 pad0[4]; s32 sky_paging; };
extern struct TexState D_0018A2B0;
struct EePair { s32 v74; s32 v78; };
extern struct EePair D_0015EE74;
extern void func_0020B4A8(void);
extern void func_00233B68(void);

void do_sky_gif_paging(void) __asm__("FUN_0022b558");

void do_sky_gif_paging(void) {
    struct DmaTag *tag;

    tag = D_00160F00.p;
    D_00160474.p = tag;
    tag = tag + 1;
    D_00160F00.p = tag;
    D_00160470.p->w0 = 0x20000000;
    D_00160470.p->addr = (u32)D_00160F00.p;
    D_00160470.p->w2 = 0;
    D_00160470.p->w3 = 0;
    if (D_0018A2B0.sky_paging != 0) {
        func_0020B4A8();
        func_00233B68();
    }
    D_00160F00.p->w0 = 0x20000000;
    D_00160F00.p->addr = (u32)(D_00160470.p + 1);
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = 0;
    D_00160F00.p = D_00160F00.p + 1;
    D_00160474.p->w0 = 0x20000000;
    D_00160474.p->addr = (u32)D_00160F00.p;
    D_00160474.p->w2 = 0;
    D_00160474.p->w3 = 0;
    D_0015EE74.v74 = D_0015EE74.v78;
}
#endif /* NON_MATCHING */
