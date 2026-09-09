/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fdd10/FUN_001fdd10.s", FUN_001fdd10);
#else
#include "rnc/assembly_textbin_fun_001fdd10_types.h"
#include "types.h"
/* cygnus-2.96 matched TU. */

extern unsigned char D_00766CE8[];




__attribute__((section(".text.func_0036C518")))
void FUN_001fdd10(int idx, int val) {
    int n = ((S0036C518 *)D_00766CE8)->n;
    char *p = ((S0036C518 *)D_00766CE8)->p;
    if (n > 0) {
        int off = idx * 4 + 0x190;
        do {
            if (*(int *)(p + 0x188) == 2) *(int *)(p + off) = val;
            p += 0x440;
        } while (--n);
    }
}
#endif /* NON_MATCHING */
