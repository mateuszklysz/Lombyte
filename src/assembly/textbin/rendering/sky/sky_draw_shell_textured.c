#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/sky/sky_draw_shell_textured/FUN_0022b6e8.s", FUN_0022b6e8);
#else
#include "types.h"

struct DmaTag {
    u32 w0;
    u32 addr;
    u32 w2;
    u32 w3;
};

struct TagPtr {
    struct DmaTag *p;
};

struct ShellEntry {
    s32 addr;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 pad10[0x10];
};

struct Shell {
    s32 count;
    u8 pad4[0xC];
    u8 bounds[0x10];
    struct ShellEntry e[1];
};

extern struct TagPtr D_00160F00;
extern s32 D_00160408[2];
extern s32 D_00160410;
extern u8 D_0013D160[];
extern void func_0022C4C8(void *bounds, s32 count, u8 *vis);
extern void WriteDmaChannelRegisters(s32 addr, s32 qwc, s32 dst);
extern void func_0020B3E0(void);
extern s32 func_0022BF94(s32, s32, s32, s32);
extern void func_0022C208(s32, s32, s32, s32);

void sky_draw_shell_textured(struct Shell *shell) __asm__("FUN_0022b6e8");

void sky_draw_shell_textured(struct Shell *shell) {
    u8 vis[shell->count];
    s32 i;
    s32 next;
    s32 base;
    u8 *v;
    struct ShellEntry *e;

    if (shell->count == 0) {
        return;
    }
    func_0022C4C8(shell->bounds, shell->count, vis);
    D_00160F00.p->w0 = 0x30000007;
    D_00160F00.p->addr = (u32)D_0013D160;
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = 0x50000007;
    D_00160F00.p++;
    D_00160410 = 1 - D_00160410;
    if (vis[0] == 1) {
        WriteDmaChannelRegisters(shell->e[0].addr, shell->e[0].unkE >> 4, D_00160408[D_00160410]);
    }
    for (i = 0; i < shell->count; i = next) {
        v = &vis[i];
        if (*v == 1) {
            func_0020B3E0();
        }
        next = i + 1;
        D_00160410 = 1 - D_00160410;
        if (next < shell->count && vis[next] == 1) {
            WriteDmaChannelRegisters(shell->e[next].addr, shell->e[next].unkE >> 4,
                                     D_00160408[D_00160410]);
        }
        if (*v == 1) {
            e = &shell->e[i];
            base = D_00160408[1 - D_00160410];
            if (func_0022BF94(base + e->unk8, 0x70002000, e->unk4, e->unkC) == 0) {
                func_0022C208(e->unk6, base + e->unkC, base + e->unkA, 0x70002000);
            }
        }
    }
}
#endif /* NON_MATCHING */
