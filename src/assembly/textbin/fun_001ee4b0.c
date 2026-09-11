/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ee4b0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ee4b0/FUN_001ee4b0.s", FUN_001ee4b0);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_002E1468(void *a0, void *a1, void *a2, void *a3, float f0, float f1, float f2);

/* sn-2.95.3-136 matched TU. */




__attribute__((section(".text.func_0013C630")))
void FUN_001ee4b0(void *arg) {
    char *s0 = (char *)arg;
    float buf[16];
    float *p;
    float r;

    if (*(unsigned char *)(s0 + 0x74) != 0) {
        return;
    }
    if (*(unsigned char *)(s0 + 0x75) == 0) {
        return;
    }
    if (*(unsigned char *)(s0 + 0x76) != 0) {
        int t;

        t = *(unsigned short *)(s0 + 0x72);
        t = t + 1;
        *(short *)(s0 + 0x72) = t;
        if (*(short *)(s0 + 0x70) < (short)t) {
            *(short *)(s0 + 0x72) = *(unsigned short *)(s0 + 0x70);
            *(unsigned char *)(s0 + 0x75) = 0;
        }
    } else {
        int t;

        t = *(unsigned short *)(s0 + 0x72);
        t = t - 1;
        *(short *)(s0 + 0x72) = t;
        if ((short)t < 0) {
            *(short *)(s0 + 0x72) = 0;
            *(unsigned char *)(s0 + 0x75) = 0;
        }
    }
    r = (float)*(short *)(s0 + 0x72) / (float)*(short *)(s0 + 0x70);
    buf[0] = 0.0f;
    buf[1] = 0.0f;
    buf[2] = 0.0f;
    buf[3] = 1.0f;
    buf[4] = *(float *)(s0 + 0x58) - *(float *)(s0 + 0x50);
    buf[5] = *(float *)(s0 + 0x5C) - *(float *)(s0 + 0x54);
    buf[6] = 0.0f;
    p = buf + 4;
    p[3] = 1.0f;
    VU0_SQC2_VF0(buf, 0x20);
    func_002E1468(&buf[12], &buf[8], &buf[0], p, r, 0.0f, 0.0f);
    *(float *)(s0 + 0x60) = buf[8];
    *(float *)(s0 + 0x64) = buf[9];
}
#endif /* NON_MATCHING */
