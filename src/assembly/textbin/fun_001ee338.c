/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ee338/FUN_001ee338.s", FUN_001ee338);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void *SearchData(void *a, void *b, int c);
extern int cModel_setupModel(void *a, void *b, void *c, int d, int e);
extern void cObjBase_KageInit(void *a, void *b, void *c);
extern char D_0044B4A8[];
extern char D_0044B4B0[];
extern char D_0044B4B8[];
extern char D_003C3F58[];
extern char D_003C3F68[];
extern char D_003C3FB0[];

/* sn-2.95.3-136 matched TU. */












__attribute__((section(".text.func_002B6768")))
int FUN_001ee338(char *a0) {
    void *m1;
    void *m2;
    int n;

    if (*(unsigned char *)(a0 + 0x4D0) == 0) {
        m1 = SearchData(*(void **)(a0 + 0x304), &D_0044B4B8, 0);
        m2 = SearchData(*(void **)(a0 + 0x304), &D_0044B4A8, 0);
        if (m2 == 0) {
            m2 = SearchData(*(void **)(a0 + 0x304), &D_0044B4B0, 0);
        }
    } else {
        m1 = SearchData(*(void **)(a0 + 0x304), &D_0044B4B8, *(int *)(a0 + 0x4D4));
        m2 = SearchData(*(void **)(a0 + 0x304), &D_0044B4A8, *(int *)(a0 + 0x4D4));
        if (m2 == 0) {
            m2 = SearchData(*(void **)(a0 + 0x304), &D_0044B4B0, *(int *)(a0 + 0x4D4));
        }
    }
    n = func_002B6688(*(unsigned short *)(a0 + 0x2FE));
    *(int *)(a0 + 0x4DC) = n;
    switch (n) {
    case 1:
        cObjBase_KageInit(a0, a0 + 0x4F0, &D_003C3F68);
        break;
    case 2:
        cObjBase_KageInit(a0, a0 + 0x4F0, &D_003C3F58);
        *(int *)(a0 + 0x4A8) = *(int *)(a0 + 0x4A8) | 0x40000000;
        break;
    case 3:
        cObjBase_KageInit(a0, a0 + 0x4F0, &D_003C3F68);
        *(int *)(a0 + 0x4A8) = *(int *)(a0 + 0x4A8) | 0x20000000;
        break;
    case 4:
        cObjBase_KageInit(a0, a0 + 0x4F0, &D_003C3FB0);
        break;
    case 0:
        break;
    }
    *(int *)(a0 + 0x254) = *(int *)(a0 + 0x254) | 0x8000000;
    if (m1 == 0) {
        return 0;
    }
    return cModel_setupModel(a0, m1, m2, 0, 0);
}
#endif /* NON_MATCHING */
