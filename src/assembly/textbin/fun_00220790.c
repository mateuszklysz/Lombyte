/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00220790
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.0208%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220790/FUN_00220790.s", FUN_00220790);
#else
#include "rnc/assembly_textbin_fun_00220790_types.h"
#include "types.h"


extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F5450();
extern s32 func_00204CF0();
s32 FUN_00220790(struct M2c_arg0 *arg0) {
    s64 temp_16_16;

    if (arg0->unk44 < 4) {
        return 0;
    }
    temp_16_16 = (0x8080 << 0x10) | 0x8080;
    func_001F4280(0);
    func_001F5450(0, 0, 0x100, 0x100, 0, 0, 0x100, 0x100, temp_16_16, func_00204CF0(arg0->unk48));
    func_001F5450(0x100, 0, 0x100, 0x100, 0, 0, 0x100, 0x100, temp_16_16, func_00204CF0(arg0->unk4C));
    func_001F4398();
    return 8;
}
#endif /* NON_MATCHING */
