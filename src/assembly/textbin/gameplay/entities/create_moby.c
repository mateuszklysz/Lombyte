#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/entities/create_moby/FUN_0020c4f8.s", FUN_0020c4f8);
#else
#include "types.h"
struct Moby {
    u8 pad0[0x20]; u8 state; u8 pad21[0x17]; u64 spawn_frame; u8 pad40[0x38];
    u8 *pvars; u8 pad7C[0x84];
};
extern u32 D_0015F60C;
extern s32 D_0015FEFC;
extern struct Moby *D_0015FF1C;
extern struct Moby *D_0015FF20;
extern u8 *D_0015FF28;
extern char D_001E83C0[];
extern void DebugPrint(char *, ...);
extern void FillTransferWords(void *, s32, s32);
extern void func_0020C5F0(struct Moby *, s32);
struct Moby *FUN_0020c4f8(s32 oclass) {
    struct Moby *m;

    for (m = D_0015FF1C; m < D_0015FF20; m++) {
        if (m->state >= 0xFE && m->spawn_frame <= D_0015F60C) {
            if (m->state == 0xFF) {
                m[1].state = 0xFF;
            }
            func_0020C5F0(m, oclass);
            m->pvars = D_0015FF28 + (m - D_0015FF1C) * 0x80;
            FillTransferWords(m->pvars, 0, 0x80);
            if (D_0015FEFC != 0) {
                D_0015FEFC--;
            }
            return m;
        }
    }
    DebugPrint(D_001E83C0, D_0015F60C);
    return 0;
}
#endif /* NON_MATCHING */
