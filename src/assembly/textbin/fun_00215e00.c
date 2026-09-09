/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.9464%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215e00/FUN_00215e00.s", FUN_00215e00);
#else
#include "rnc/assembly_textbin_fun_00215e00_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012EC08();
extern void func_00216A80();
s32 FUN_00215e00(u16 arg0, u32 arg1, u16 arg2, u16 arg3) {
    s32 *temp_4_18;

    if (D_001516D0.unk6C == 0) {
        temp_4_18 = (arg1 * 4) + (D_00137B80 + 0x2AA8);
        if (*temp_4_18 != 0) {
            D_001516D0.unk74 = arg2;
            D_001516D0.unk80 = 0xA;
            D_001516D0.unk84 = 0xBB80;
            D_001516D0.unk6C = 0xFFFFFFFF;
            D_001516D0.unk70 = arg0;
            D_001516D0.unk7C = 1;
            D_001516D0.unk76 = 1;
            D_001516D0.unk72 = arg3;
            func_0012EC08((s64) ((s64) *temp_4_18 << 0x20) >> 0x20, 0, 0, 0, arg3, 0, 1, 0, 0x20, &func_00216A80, (u64) ((s64) (((u8 *)&D_001516D0 + 0x6C)) << 0x20) >> 0x20);
            return 1;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
