/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.4000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00201520/FUN_00201520.s", FUN_00201520);
#else
#include "types.h"
extern s32 func_00118B10();
extern s32 func_00118B20();
extern s32 func_0011C8C8();
extern s32 func_0011C9B0();
extern s32 func_0011CD78();
s32 FUN_00201520(s32 arg0, s32 arg1) {
u8 sp_slot[0x60];    s32 temp_19_42;
    s32 temp_2_14;
    s32 temp_2_22;
    s32 var_2_26;

    temp_2_14 = func_0011C8C8(arg1);
    temp_2_22 = func_00118B20(sp_slot, 1, arg0, temp_2_14, arg1, 0);
    var_2_26 = 1;
    if (temp_2_22 != 0) {
        do {

        } while (func_00118B10(temp_2_22) >= 0);
        temp_19_42 = (func_0011CD78(temp_2_14, 0, 0) <= -1) ? 0 : 1;
        func_0011C9B0(temp_2_14);
        var_2_26 = temp_19_42;
    }
    return var_2_26;
}
#endif /* NON_MATCHING */
