#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002269c0/FUN_002269c0.s", FUN_002269c0);
#else
#include "types.h"
struct SaveState { u8 pad0[0x14]; s32 unk14; u8 pad18[0xA8]; s32 unkC0; u8 padc4[0x18]; s32 unkDC; s32 unkE0; u8 pade4[8]; s32 unkEC; u8 padf0[4]; s32 unkF4; };
extern struct SaveState D_0013D290;
extern u8 D_0015EE98[];
extern s32 D_0015ED84;
extern u8 D_00141EC0[];
extern s32 sceCdReadClock(void *);
extern void sceScfGetLocalTimefromRTC(void *);
extern void func_00208770(void);
extern void func_00207B08(void *);
extern void func_0020ABB0(s32);
void FUN_002269c0(s32 slot, s32 mode) {
    struct SaveState *save = &D_0013D290;
    s32 active;

    sceCdReadClock(D_0015EE98);
    active = 1;
    sceScfGetLocalTimefromRTC(D_0015EE98);
    func_00208770();
    func_00207B08(D_00141EC0 + (D_0015ED84 << 11));
    func_0020ABB0(slot);
    save->unkF4 = active;
    save->unkEC = slot;
    save->unk14 = mode;
    save->unkC0 = 0;
    if (save->unkDC < 0) {
        save->unkE0 = 0;
        save->unkDC = 19;
    }
}
#endif /* NON_MATCHING */
