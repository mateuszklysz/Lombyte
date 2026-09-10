/* ROLE: recovered function `VU1_addDataRef__FPvi` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.6316%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233830/FUN_00233830.s", FUN_00233830);
#else
#include "rnc/assembly_textbin_fun_00233830_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233830(s32 arg0, s32 arg1) {
    D_00160F00->unk0 = (s32) (arg1 | 0x30000000);
    D_00160F00->unk4 = arg0;
    do {
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0;
    } while (0);
    D_00160F00 += 0x10;
}
#endif /* NON_MATCHING */
