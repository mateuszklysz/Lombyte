/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.8889%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f5138/FUN_001f5138.s", FUN_001f5138);
#else
#include "rnc/assembly_textbin_fun_001f5138_types.h"
#include "types.h"




extern struct M2c_D_00151780 D_00151780;
extern u32 D_0015EE88[];
extern s32 func_001F52A0();
extern s32 func_00233980();
void FUN_001f5138(struct M2c_arg0 *arg0) {
    s64 temp_2_10;

    temp_2_10 = arg0->unk8;
    if (temp_2_10 != 0) {
        func_00233980(0x42, temp_2_10 & ((0xFF00 << 0x18) | 0xFF));
    }
    if (arg0->unk4 & 0xFF000000) {
        func_00233980(0x4E, ((s32) D_0015EE88[0] >> 0xD) | 0x01000000 | (0x8000 << 0x11));
        func_001F52A0(0, D_00151780.unk152, 0, D_00151780.unk150, arg0->unk4);
        func_00233980(0x4E, 0x01000000 | ((s32) D_0015EE88[0] >> 0xD));
    }
    if (arg0->unk8 != 0) {
        func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    }
}
#endif /* NON_MATCHING */
