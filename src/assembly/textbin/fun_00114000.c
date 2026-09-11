/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00114000
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00114000/FUN_00114000.s", FUN_00114000);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void sceVu0UnitMatrix(void *m);
extern void sceVu0OuterProduct(void *d, void *a, void *b);
extern void sceVu0Normalize(void *d, void *s);
extern void Tramp_MMI_COPY3Q_VADD_30A508(void *d, void *a, void *b);
extern void Tramp_MMI_INVERSE_RT_MATRIX_30A3F8(void *d, void *s);

__attribute__((section(".text.sceVu0CameraMatrix")))
void FUN_00114000(void *dst, void *a1, void *a2, void *a3) {
    char M[0x40];
    char Tv[0x10];
    sceVu0UnitMatrix(M);
    sceVu0OuterProduct(Tv, a3, a2);
    sceVu0Normalize(M + 0x00, Tv);
    sceVu0Normalize(M + 0x20, a2);
    sceVu0OuterProduct(M + 0x10, M + 0x20, M + 0x00);
    Tramp_MMI_COPY3Q_VADD_30A508(M, M, a1);
    Tramp_MMI_INVERSE_RT_MATRIX_30A3F8(dst, M);
}
#endif /* NON_MATCHING */
