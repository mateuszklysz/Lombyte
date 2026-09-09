/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 75.5714%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022db10/FUN_0022db10.s", FUN_0022db10);
#else
#include "rnc/assembly_textbin_fun_0022db10_types.h"
#include "types.h"


extern u8 D_0013E550[];
extern s32 D_0015F5B4;
extern s32 D_0015F634;
extern s32 func_0022D7F0();
s32 FUN_0022db10(u32 arg1, u16 arg0, u32 arg2) {
    s32 temp_2_24;
    struct M2c_temp_3_32 *temp_3_32;

    if (arg0 >= D_0015F5B4) {
        return -1;
    }
    temp_2_24 = func_0022D7F0(D_0015F634 + (arg0 << 5), arg2, 0, 0x400);
    if (temp_2_24 >= 0) {
        temp_3_32 = (temp_2_24 * 0x70) + D_0013E550;
        temp_3_32->unk7E = arg0;
        temp_3_32->unk88 = arg2;
    }
    return temp_2_24;
}
#endif /* NON_MATCHING */
