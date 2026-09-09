/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 33.6667%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233980/FUN_00233980.s", FUN_00233980);
#else
#include "rnc/assembly_textbin_fun_00233980_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233980(s32 arg0, s64 arg1) {
    D_00160F00->unk0 = 0x10000002;
    D_00160F00->unk2C = 0;
    D_00160F00->unk4 = 0;
    D_00160F00->unkC = 0x50000002;
    D_00160F00->unk10 = 0x8001;
    D_00160F00->unk14 = 0x10000000;
    D_00160F00->unk18 = 0xE;
    D_00160F00->unk8 = 0;
    D_00160F00->unk20 = arg1;
    D_00160F00->unk28 = arg0;
    D_00160F00->unk1C = 0;
    D_00160F00 += 0x30;
}
#endif /* NON_MATCHING */
