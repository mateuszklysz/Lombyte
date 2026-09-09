/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 27.6923%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb368/FUN_001fb368.s", FUN_001fb368);
#else
#include "rnc/assembly_textbin_fun_001fb368_types.h"
#include "types.h"


extern u8 D_00152040[];
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_001fb368(void) {
    if (D_00160F00 != NULL) {
        D_00160F00->unk0 = 0x30000015;
        D_00160F00->unk4 = D_00152040;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0x50000015;
        D_00160F00 += 0x10;
    }
}
#endif /* NON_MATCHING */
