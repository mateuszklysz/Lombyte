#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/voices/pause_all_sounds/FUN_00218d78.s", FUN_00218d78);
#else
#include "types.h"

struct PauseStruct {          /* D_001D5BF0 */
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
    u8 pad14[0xC4];
    s32 unkD8;
    s32 unkDC;
    u8 padE0[0x18];
    s32 unkF8;
    u8 padFC[0x14];
    s32 unk110;
    u8 pad114[0x20];
    s32 unk134;
    s32 unk138;
    s32 unk13C;
    s32 unk140;
};
struct Node38 { u8 pad0[0x38]; s32 unk38; };   /* D_001CE5B8 */
struct Node3C { u8 pad0[0x3C]; s32 unk3C; };   /* D_001CE748 */

extern struct PauseStruct D_001D5BF0;
extern struct Node38 D_001CE5B8;
extern struct Node3C D_001CE748;
extern u8 D_001CE798[];
extern u8 D_0014161B[];
extern s32 D_00141660[];
extern s32 D_0015ED84;
extern s32 D_0015EE20;
extern s32 D_0015EEA0[];
extern s32 D_0015F604;
extern s32 D_0018C32C[];
extern s32 D_001A0314[];
extern s32 D_001D0398[];
extern s32 D_0015F674;
__asm__(".extern D_0015F604, 12");
__asm__(".extern D_0015F674, 4");

extern void func_0012DC80();
extern void func_0012E3E8(s32);
extern s32 func_0020B950();
extern void func_00226E58();
extern void InitializeRenderState(s32);

void pause_all_sounds(s32 arg0) __asm__("FUN_00218d78");

void pause_all_sounds(s32 arg0) {
    s32 f134;
    s32 f138;
    void *p;
    void *q;

    func_0012E3E8(0x1D);
    InitializeRenderState(0);
    func_0012DC80();
    if (D_0018C32C[0] != 0) {
        D_0015F674 = 1;
        return;
    }
    if (D_00141660[0] == 0x24) {
        D_00141660[0] = 0;
    }
    f134 = 0;
    if (D_0015ED84 == 0xD || D_0014161B[0] != 0) {
        f134 = 1;
    }
    D_001D5BF0.unk134 = f134;
    f138 = 0;
    if (D_0015ED84 == 0 || D_0015ED84 == 0xE) {
        f138 = 1;
    }
    D_001D5BF0.unk138 = f138;
    if (D_0015EEA0[0] != 0) {
        D_001D5BF0.unkD8 = 1;
    } else if (D_0015EE20 != 0) {
        D_001D5BF0.unkD8 = 1;
    } else if (D_001D5BF0.unkF8 != 0) {
        D_001D5BF0.unkD8 = 0;
    }
    D_001D5BF0.unkDC = (arg0 == 0x23);
    if (D_001D5BF0.unkD8 != 0) {
        p = D_001CE798;
    } else {
        p = &D_001CE748;
    }
    D_001CE5B8.unk38 = p;
    if (D_001D5BF0.unkD8 != 0) {
        q = D_001CE798;
    } else {
        q = &D_001CE5B8;
    }
    D_001CE748.unk3C = q;
    D_0015F604 = 3;
    D_001D5BF0.unk0 = arg0;
    D_001D5BF0.unk110 = 0;
    D_001D5BF0.unkC = 0;
    D_001D5BF0.unk10 = 0;
    if (D_0015ED84 < 0x13) {
        D_001A0314[0] = D_0015ED84;
    } else {
        D_001A0314[0] = 0;
    }
    func_0020B950();
    D_001D0398[0] = 0;
    func_00226E58();
    D_001D5BF0.unk13C = 1;
    D_001D5BF0.unk140 = 0;
}
#endif /* NON_MATCHING */
