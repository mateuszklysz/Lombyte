/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 25.5946%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb2d0/FUN_001fb2d0.s", FUN_001fb2d0);
#else
#include "rnc/assembly_textbin_fun_001fb2d0_types.h"
#include "types.h"


extern u32 D_0015EEB8[];
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_001221B0();
void FUN_001fb2d0(void) {
    if (D_00160F00 != NULL) {
        D_00160F00->unk0 = 0x30000009;
        D_00160F00->unk4 = (s32) ((D_0015EEB8[0] + 0x30) & 0x0FFFFFFF);
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0x50000009;
        D_00160F00 += 0x10;
        return;
    }
    func_001221B0(D_0015EEB8[0] + 0x30);
}
#endif /* NON_MATCHING */
