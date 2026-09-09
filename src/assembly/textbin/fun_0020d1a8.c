/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.5294%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020d1a8/FUN_0020d1a8.s", FUN_0020d1a8);
#else
#include "types.h"
extern s32 D_0015F638;
extern s32 D_0015F63C;
extern u8 D_00165500[];
extern s32 func_00118A80();
extern s32 func_001F98D0();
extern s32 func_00211728();
void FUN_0020d1a8(void) {
    func_00118A80(0);
    func_001F98D0(0x70003800, D_00165500, 0x800);
    func_00211728(D_0015F638, D_0015F63C);
}
#endif /* NON_MATCHING */
