/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 79.8148%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d2c8/FUN_0021d2c8.s", FUN_0021d2c8);
#else
#include "rnc/assembly_textbin_fun_0021d2c8_types.h"
#include "types.h"


extern u32 D_001516D8[];
extern u32 D_0015F6A0[];
extern u32 D_001996FC[];
extern s32 func_002166E8();
extern s32 func_00225AC0();
s32 FUN_0021d2c8(struct M2c_arg0 *arg0) {
    s32 temp_5_21;

    if ((D_001516D8[0] != 0) && (arg0->unk50 == 1)) {
        func_002166E8();
    }
    func_00225AC0(1);
    temp_5_21 = arg0->unk54;
    if (temp_5_21 != 0) {
        D_0015F6A0[0] = temp_5_21;
        D_001996FC[0] = arg0->unk38;
    }
    return 0;
}
#endif /* NON_MATCHING */
