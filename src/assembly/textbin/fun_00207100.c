/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.5000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207100/FUN_00207100.s", FUN_00207100);
#else
#include "rnc/assembly_textbin_fun_00207100_types.h"
#include "types.h"


extern struct M2c_D_0013F350 D_0013F350;
extern u32 D_001A03BC[];
extern s32 func_00208818();
s32 FUN_00207100(s32 arg0, s32 arg1, f32 fparg2) {
    s32 var_2_24;
    s32 var_3_28;
    s32 var_4_15;

    if (arg1 < 0xBB) {
        var_4_15 = 0;
        if (((u32) (D_0013F350.unk208C - 0x11) < 2U) || (D_0013F350.unk12E4 == 1)) {
            var_4_15 = 1;
        }
        var_2_24 = 0;
        if (var_4_15 == 0) {
            var_2_24 = 1;
            var_3_28 = D_001A03BC[0];
            goto block_9;
        }
    } else {
        var_2_24 = 0;
        if ((fparg2 >= 51.5f) && (fparg2 <= 54.0f)) {
            var_3_28 = func_00208818(0x10A, 0xE5, 0x124, 0xF9);
            var_2_24 = 1;
block_9:
            if (var_3_28 == 0) {
                var_2_24 = 0;
            }
        }
    }
    return var_2_24;
}
#endif /* NON_MATCHING */
