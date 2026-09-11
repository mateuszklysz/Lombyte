/*
STATE: C_NON_MATCHING
SYMBOL: DrawRectOverlay_FiiiiUl
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DrawRectOverlay_FiiiiUl` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f52a0/FUN_001f52a0.s", FUN_001f52a0);
#else
#include "types.h"
/* SN ProDG ee-gcc 2.95.3 matched TU. */

extern void func_003A6C58(void *a0, void *a1, void *a2);
extern int D_00747A30;
extern unsigned char D_0044A920[];
extern unsigned char D_0044A940[];
extern unsigned char D_0044A958[];
extern unsigned char D_005E8640[];
extern void cRelSys_unlinkNoFree(void *a0, int a1);
extern void func_00297660(void);
extern void cEventConfig_setEventNo(void *a0, int a1);
extern unsigned char D_00586B30[];

__attribute__((section(".text.LoadDisplayText_297450")))
void FUN_001f52a0(void *a0) {
    unsigned char *s0 = (unsigned char *)a0;
    char buf[0x40];
    unsigned long b = *(unsigned char *)(s0 + 8);
    int a1;
    if ((b >> 7) == 0) {
        if (D_00747A30 & 0x400) {
            func_003A6C58(buf, D_0044A920, D_0044A940);
        } else {
            func_003A6C58(buf, D_0044A958, D_0044A940);
        }
        a1 = *(int *)(s0 + 0x10);
        if (a1 != 0) {
            cRelSys_linkNoAlloc(D_005E8640, a1, buf, 2);
            *(int *)(s0 + 8) = *(int *)(s0 + 8) | 0x80;
        }
    }
}

__attribute__((section(".text.ClearDisplayText_2974F0")))
void ClearDisplayText_2974F0(void *a0) {
    unsigned char *s0 = (unsigned char *)a0;
    unsigned long v0 = *(unsigned char *)(s0 + 8);
    if (v0 >> 7) {
        cRelSys_unlinkNoFree(D_005E8640, 2);
        *(int *)(s0 + 8) = *(int *)(s0 + 8) & -0x81;
    }
}

__attribute__((section(".text.InitSubState_2975F8")))
void InitSubState_2975F8(void *a0, int a1) {
    unsigned char *s0 = (unsigned char *)a0;
    unsigned long t = *(int *)(s0 + 8);
    if (((t >> 1) & 1) == 0) {
        func_00297660();
        *(int *)(s0 + 0x18) = a1;
        cEventConfig_setEventNo(D_00586B30, a1);
        *(int *)(s0 + 8) = *(int *)(s0 + 8) | 2;
    }
}
#endif /* NON_MATCHING */
