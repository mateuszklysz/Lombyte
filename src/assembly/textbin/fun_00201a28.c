/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00201a28/FUN_00201a28.s", FUN_00201a28);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern unsigned char D_0044AF78;
extern signed char D_00747A0C;
extern int D_00583F20[];
extern char D_0044AF80[];
extern char D_0044AF90[];
extern char D_0044AFA8[];
extern char D_0044AFC0[];
extern char D_0044AFD8[];
extern char D_0044AFF0[];
extern char D_0044B008[];
extern void func_003A52F0(void *a0, int a1, int a2);
extern void func_003A6C58(void *a0, void *a1, void *a2);
extern void func_003A57C4(void *a0, void *a1);
extern int cDvd_FileExist(void *a0, void *a1);

__attribute__((section(".text.cIDManager_getLocalFileName")))
int FUN_00201a28(void *a0, void *a1, void *a2, signed char a3) {
    char buf[0x80];
    void *s2 = a1;
    void *s1 = a2;
    volatile int idx = a3;
    buf[0] = D_0044AF78;
    func_003A52F0(&buf[1], 0, 0x7F);
    if (idx == -1) idx = D_00747A0C;
    if ((unsigned int)idx < 7) {
        switch (idx) {
        case 0: func_003A6C58(buf, D_0044AF80, s1); break;
        case 1: func_003A6C58(buf, D_0044AF90, s1); break;
        case 2: func_003A6C58(buf, D_0044AFA8, s1); break;
        case 3: func_003A6C58(buf, D_0044AFC0, s1); break;
        case 4: func_003A6C58(buf, D_0044AFD8, s1); break;
        case 5: func_003A6C58(buf, D_0044AFF0, s1); break;
        case 6: func_003A6C58(buf, D_0044B008, s1); break;
        }
    }
    if (cDvd_FileExist(D_00583F20, buf)) {
        func_003A57C4(s2, buf);
        return 1;
    }
    func_003A6C58(buf, D_0044AF80, s1);
    func_003A57C4(s2, buf);
    return 0;
}
#endif /* NON_MATCHING */
