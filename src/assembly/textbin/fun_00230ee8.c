/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 51.7000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00230ee8/FUN_00230ee8.s", FUN_00230ee8);
#else
#include "types.h"
extern s32 D_0013E050;
extern s32 D_0015F434;
extern s32 D_0015F618;
extern s32 func_001F39D0();
extern s32 func_001F4248();
extern s32 func_0022F288();
extern void jtbl_001E8960();
void FUN_00230ee8(void) {
    s32 temp_4_18;

    if ((D_0015F618 == 0) && ((u32) D_0013E050 < 9U)) {
        temp_4_18 = *((D_0013E050 * 4) + &jtbl_001E8960);
        switch (D_0013E050) {
        case 0:
        case 8:
            func_001F4248(temp_4_18);
            return;
        case 3:
        case 7:
            D_0015F434 = 0x7F;
            func_001F39D0(temp_4_18);
            return;
        case 4:
            func_0022F288(temp_4_18);
            break;
        }
    }
}
#endif /* NON_MATCHING */
