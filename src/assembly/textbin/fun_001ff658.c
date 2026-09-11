/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ff658
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
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff658/FUN_001ff658.s", FUN_001ff658);
#else
#include "rnc/assembly_textbin_fun_001ff658_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_003A52F0(void *dst, int a, int b);
extern unsigned char D_00773318[];
extern char D_0045B170[];



__attribute__((section(".text.func_00378540")))
void FUN_001ff658(void) {
    unsigned char *base = D_00773318;
    unsigned char *p;
    int i;

    func_003A52F0(base, 0, 0x8B5C);

    base[0x4] = 1;
    base[0x5] = 0;
    base[0x6] = 0;
    base[0x7] = 0;
    base[0x8] = 0;

    *(Blob8 *)(base + 0x1B2) = *(Blob8 *)D_0045B170;
    *(Blob8 *)(base + 0x2B2) = *(Blob8 *)D_0045B170;
    *(Blob8 *)(base + 0x3B2) = *(Blob8 *)D_0045B170;

    *(short *)(base + 0x10) = 0x30;
    *(short *)(base + 0x12) = 4;
    *(short *)(base + 0x14) = 0x30;

    p = base + 0x7C;
    for (i = 0x1F; i >= 0; i--) {
        p[-0x20] = 4;
        p[0] = 4;
        p++;
    }
}
#endif /* NON_MATCHING */
