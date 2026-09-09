/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.8250%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225490/FUN_00225490.s", FUN_00225490);
#else
#include "rnc/assembly_textbin_fun_00225490_types.h"
#include "types.h"




extern u8 D_001B3AC0[];
extern s32 func_0020C4F8();
extern s32 func_0020D4F0();
extern s32 func_0020DEF8();
s32 *FUN_00225490(s32 arg0) {
    struct M2c_temp_2_16 *temp_2_16;
    s32 *var_2_15;

    var_2_15 = NULL;
    if (*(arg0 + D_001B3AC0) != 0xFF) {
        temp_2_16 = func_0020C4F8();
        if (temp_2_16 != NULL) {
            temp_2_16->unk32 = 0xFF;
            temp_2_16->unk30 = 0xFF;
            temp_2_16->unk20 = 0;
            temp_2_16->unk31 = 1;
            func_0020DEF8(temp_2_16);
            func_0020D4F0(temp_2_16, 0x202020, 0xE, 0xE, 0);
            if (temp_2_16->unk24->unk6 != 0) {
                temp_2_16->unk73 = 0x18;
            }
        }
        var_2_15 = temp_2_16;
    }
    return var_2_15;
}
#endif /* NON_MATCHING */
