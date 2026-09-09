/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2070/FUN_001f2070.s", FUN_001f2070);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_005FEE00[];
extern char D_003F2060[];
extern int Obj0000_Get_D_0076A7A4_3756F0(void);
extern void func_0032EC78(int a0, int a1, int a2);

/* sn-2.95.3-136 matched TU. */







__attribute__((section(".text.func_003745C0")))
void FUN_001f2070(void *arg, int idx, int n, float val) {
    char *p = (char *)arg;
    float t;
    int i;

    if (*(int *)p == 0) {
        return;
    }
    t = val * *(float *)(D_005FEE00 + idx * 4) / 127.0f;
    t = t * *(float *)(D_005FEE00 + idx * 4 + 0xC) / 127.0f;
    if (Obj0000_Get_D_0076A7A4_3756F0() == 2) {
        t = t * *(float *)(p + 0x44);
    }
    t = t * *(float *)(p + 0x3C);
    if (t >= 127.0f) {
        t = 127.0f;
    }
    if (n == -1) {
        for (i = 0; i < *(int *)(p + 0xC); i++) {
            func_0032EC78(*(int *)p, i,
                          *(short *)(D_003F2060 + (int)t * 2));
            *(float *)(p + 0x14 + i * 4) = val;
        }
    } else {
        func_0032EC78(*(int *)p, n, *(short *)(D_003F2060 + (int)t * 2));
        {
            int k = n * 4;
            *(float *)(p + k + 0x14) = val;
        }
    }
}
#endif /* NON_MATCHING */
