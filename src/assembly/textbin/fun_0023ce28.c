/* ROLE: recovered function `videoDecMain__FPv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.8718%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023ce28/FUN_0023ce28.s", FUN_0023ce28);
#else
#include "rnc/assembly_textbin_fun_0023ce28_types.h"
#include "types.h"


extern s32 D_0016120C;
extern s32 func_0023BCC0();
extern s32 func_0023CC80();
extern s32 func_0023CC88();
extern s32 func_0023CEC8();
extern s32 func_0023D1E8();
void FUN_0023ce28(s32 arg0) {
    struct M2c_temp_2_25 *temp_2_25;

    func_0023BCC0(arg0 + 0x48);
    func_0023D1E8(D_0016120C + 0xD9168);
    func_0023CEC8(arg0);
    temp_2_25 = D_0016120C;
loop_1:
    if (temp_2_25->unkD9174 != 0) {
        if (func_0023CC80(arg0) == 1) {

        } else {
            goto loop_1;
        }
    }
    func_0023CC88(arg0, 3);
}
#endif /* NON_MATCHING */
