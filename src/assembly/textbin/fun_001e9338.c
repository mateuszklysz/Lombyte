/* ROLE: recovered function `LoadDebugFont` (bloaders) starts here; recovered extent unknown. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 49.5185%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001e9338/FUN_001e9338.s", FUN_001e9338);
#else
#include "rnc/assembly_textbin_fun_001e9338_types.h"
#include "types.h"


extern struct M2c_D_00137B80 D_00137B80;
extern s32 D_0015EE88;
extern s32 D_0015EEC8;
extern u8 D_001AABC0[];
extern s32 func_001E9168();
extern s32 func_00216828();
void FUN_001e9338(void) {    u64 sp0;
u8 sp_slot[0x40];    func_00216828(D_001AABC0, D_00137B80.unk8, D_00137B80.unkC);
    func_001E9168(D_001AABC0, sp_slot, D_0015EE88 + 0xC0000, 0x3FFC00);
    D_0015EEC8 = sp0;
}
#endif /* NON_MATCHING */
