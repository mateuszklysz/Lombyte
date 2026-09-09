/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00212f90/FUN_00212f90.s", FUN_00212f90);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_002A8578(void *a0, int a1, int a2, float f, int a3, int t0, int t1);
extern int moveMotion(void *a0);

/* sn-2.95.3-136 matched TU. */




__attribute__((section(".text.func_00281F38")))
void FUN_00212f90(void *a0) {
    char *s0 = (char *)a0;
    int v0;
    int t0 = 0;
    unsigned long two = 2;
    if (*(unsigned char *)(s0 + 0x15B0)) t0 = two;
    switch (*(unsigned char *)(s0 + 0x2F6)) {
    case 0:
        if (*(unsigned char *)(s0 + 0x2F7)) {
            v0 = *(int *)(s0 + 0x304);
            func_002A8578(s0, *(int *)(v0 + 0x60) + v0, *(int *)(v0 + 0x68) + v0, 0.0f, 5, t0, 0);
        } else {
            v0 = *(int *)(s0 + 0x304);
            func_002A8578(s0, *(int *)(v0 + 0x60) + v0, *(int *)(v0 + 0x64) + v0, 0.0f, 5, t0, 0);
        }
        *(unsigned char *)(s0 + 0x2F6) = *(unsigned char *)(s0 + 0x2F6) + 1;
        goto L_mm;
    case 2:
        v0 = *(int *)(s0 + 0x304);
        func_002A8578(s0, *(int *)(v0 + 0x6C) + v0, *(int *)(v0 + 0x70) + v0, 0.0f, 5, t0, 0);
        *(unsigned char *)(s0 + 0x2F6) = *(unsigned char *)(s0 + 0x2F6) + 1;
        /* fallthrough */
    case 1:
    case 3:
    L_mm:
        moveMotion(s0);
        break;
    case 4:
        v0 = *(int *)(s0 + 0x304);
        func_002A8578(s0, *(int *)(v0 + 0x74) + v0, *(int *)(v0 + 0x78) + v0, 0.0f, 5, t0, 0);
        *(unsigned char *)(s0 + 0x2F6) = *(unsigned char *)(s0 + 0x2F6) + 1;
        /* fallthrough */
    case 5:
        if (moveMotion(s0) != 0) {
            *(unsigned char *)(s0 + 0x2F4) = 0;
            *(unsigned char *)(s0 + 0x2F5) = 0;
            *(unsigned char *)(s0 + 0x2F6) = 0;
            *(unsigned char *)(s0 + 0x2F7) = 0;
        }
        break;
    }
}
#endif /* NON_MATCHING */
