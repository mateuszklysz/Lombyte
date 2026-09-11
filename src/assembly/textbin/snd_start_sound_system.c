/*
STATE: C_NON_MATCHING
SYMBOL: snd_StartSoundSystem
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `snd_StartSoundSystem`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/snd_start_sound_system/FUN_0012da28.s", FUN_0012da28);
#else
#include "types.h"
/* TU: BlackJack [casino] - recovered C++ class. */


extern char D_003BDF58[];
extern int D_00569B70;
extern void func_001D0CE8();
extern void func_001D0DF8();
extern void func_001D5780();
extern int GetTimerValue_1FA710();
extern void BlackJackId_Move();
extern void BlackJackId__Trans();

__attribute__((section(".text.BlackJack_Release")))
void FUN_0012da28(void) {
    func_001D4F48();
}

extern char D_00463050[];


__attribute__((section(".text.BlackJack_Main")))
void BlackJack_Main(int a0)
{
    int s1;
    int *s0;
    int *s3;
    int i = *(int *)(a0 + 0x1804);
    short off = *(short *)(D_003BDF58 + i * 8);
    void (*fn)() = *(void (**)())(D_003BDF58 + i * 8 + 4);
    fn(a0 + off);

    s3 = (int *)(a0 + 0x17D4);
    s1 = 4;
    s0 = s3;
    do {
        if (*s0 != 0) {
            func_001D0CE8(*s0);
        }
        s1 = s1 - 1;
        s0 = s0 + 1;
    } while (s1 >= 0);

    s0 = s3;
    s1 = 4;
    s3 = (int *)(a0 + 0x17E8);
    do {
        if (*s0 != 0) {
            func_001D0DF8(*s0);
        }
        s1 = s1 - 1;
        s0 = s0 + 1;
    } while (s1 >= 0);

    s0 = s3;
    s1 = 4;
    do {
        if (*s0 != 0) {
            func_001D0CE8(*s0);
        }
        s1 = s1 - 1;
        s0 = s0 + 1;
    } while (s1 >= 0);

    s0 = s3;
    s1 = 4;
    do {
        if (*s0 != 0) {
            func_001D0DF8(*s0);
        }
        s1 = s1 - 1;
        s0 = s0 + 1;
    } while (s1 >= 0);

    func_001D5780(a0, GetTimerValue_1FA710(&D_00569B70));
    BlackJackId_Move(a0);
    BlackJackId__Trans(a0);
}

__attribute__((section(".text.BlackJack_SetBlackJackCamera")))
void BlackJack_SetBlackJackCamera(int a0, float *a1, float *a2) {
    float *dst1;
    float *dst2;

    cCamManager_setSubScrCamera(D_00463050, 0);
    *(int *)(a0 + 0x181C) = (int)(D_00463050 + 0xC90);
    dst1 = (float *)(D_00463050 + 0xEA0);
    if (a1 != dst1) {
        dst1[0] = a1[0];
        dst1[1] = a1[1];
        dst1[2] = a1[2];
    }
    dst2 = (float *)(*(int *)(a0 + 0x181C) + 0x200);
    if (dst2 != a2) {
        dst2[0] = a2[0];
        dst2[1] = a2[1];
        dst2[2] = a2[2];
    }
}


__attribute__((section(".text.BlackJack_ClearBlackJackCamera")))
void BlackJack_ClearBlackJackCamera(void) {
    cCamManager_setPlCamera(D_00463050, 0);
}
#endif /* NON_MATCHING */
