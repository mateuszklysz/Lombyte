/*
STATE: C_NON_MATCHING
SYMBOL: audioDecCreate__FP9_AudioDecPUci14sceMpegStrType
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `audioDecCreate__FP9_AudioDecPUci14sceMpegStrType` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023abd0/FUN_0023abd0.s", FUN_0023abd0);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void sceVu0UnitMatrix(void *m);
extern void func_002CD638(void);
extern void func_002CA220(void *a);
extern void func_002CA390(void *a, int b);
extern char D_005FFD80[];
extern char D_00601180[];
extern char D_005FEFF0[];
extern char D_005FFCF0[];

__attribute__((section(".text.func_002C9F58")))
void FUN_0023abd0(void *arg) {
    char *s = (char *)arg;
    char *p;
    float z;
    float one;
    int m;
    int i;

    z = 0.0f;
    one = 1.0f;

    *(int *)(s + 0x44) = 0;
    *(short *)(s + 0x12C) = 0;
    *(char **)(s + 0x34) = D_005FFD80;
    *(char **)(s + 0x38) = D_00601180;
    *(char **)(s + 0x3C) = D_005FEFF0;
    *(char **)(s + 0x40) = D_005FFCF0;
    *(int *)(s + 0x5C) = 0x80000000;
    *(unsigned int *)(s + 0x58) = 0x80000000;
    *(float *)(s + 0xC8) = z;
    *(unsigned int *)(s + 0x50) = 0x80000000;
    *(float *)(s + 0xC4) = z;
    *(int *)(s + 0x128) = -2;
    *(float *)(s + 0xC0) = z;
    *(float *)(s + 0xCC) = one;

    sceVu0UnitMatrix(s + 0xD0);

    *(int *)(s + 0x110) = 0;

    m = -1;
    p = s + 0x160;
    i = 0xF;
    for (; i >= 0; i--) {
        *(short *)(p + 0x2) = m;
        *(short *)(p + 0x0) = m;
        *(int *)(p + 0x4) = 0;
        p += 8;
    }

    *(int *)(s + 0x1E0) = 0;
    func_002CD638();
    func_002CA220(s);
    *(int *)(s + 0x130) = -1;
    func_002CA390(s, 0);
}
#endif /* NON_MATCHING */
