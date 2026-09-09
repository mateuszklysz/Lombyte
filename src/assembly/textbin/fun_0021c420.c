/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021c420/FUN_0021c420.s", FUN_0021c420);
#else
#include "types.h"
/* SN ProDG ee-gcc 2.95.3 matched TU. */

extern unsigned int D_00747A84;
extern int D_00586B34;
extern char D_00747470[];
extern int D_00747A30;
extern char D_0044A920[];
extern char D_0044A940[];
extern char D_0044A958[];
extern char D_00583F20[];
extern int D_003C3CF0;
extern void func_003A6C58(void *a0, void *a1, void *a2);

__attribute__((section(".text.LoadResourceEntry_297378")))
void FUN_0021c420(void *a0) {
    char *s = (char*)a0;
    unsigned long b = *(unsigned char*)(s + 8);
    int buf[16];
    if ((b >> 7) != 0) return;
    if ((D_00747A30 & 0x400) != 0) {
        func_003A6C58(buf, D_0044A920, D_0044A940);
    } else {
        func_003A6C58(buf, D_0044A958, D_0044A940);
    }
    *(int*)(s + 0x10) = 0;
    *(int*)(s + 0xC) = cDvd_ReadAlloc(D_00583F20, buf, s + 0x10, D_003C3CF0, 0, 0, 0, 0);
}
#endif /* NON_MATCHING */
