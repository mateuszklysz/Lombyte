/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.0141%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4398/FUN_001f4398.s", FUN_001f4398);
#else
#include "rnc/assembly_textbin_fun_001f4398_types.h"
#include "types.h"








extern struct M2c_D_0015F450 *D_0015F450;
extern struct M2c_D_0015F454 *D_0015F454;
extern struct M2c_D_00160F00 *D_00160F00;
extern u8 D_0018A2DC[];
extern s32 func_0020B4A8();
extern s32 func_00233B68();
void FUN_001f4398(void) {
    struct M2c_temp_3_33 *temp_3_33;

    D_0015F454 = D_00160F00;
    D_00160F00 += 0x10;
    D_0015F450->unk0 = 0x20000000;
    D_0015F450->unk4 = (s32 *) D_00160F00;
    D_0015F450->unk8 = 0;
    D_0015F450->unkC = 0;
    temp_3_33 = D_00160F00;
    if (*(s32 *)D_0018A2DC != 0) {
        func_0020B4A8(D_0015F450, D_0018A2DC);
        func_00233B68();
    }
    temp_3_33->unk0 = 0x20000000;
    D_00160F00->unk4 = (void *) (D_0015F450 + 0x10);
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0;
    D_00160F00 += 0x10;
    D_0015F454->unk0 = 0x20000000;
    D_0015F454->unk4 = (s32 *) D_00160F00;
    do {
        D_0015F454->unk8 = 0;
        D_0015F454->unkC = 0;
    } while (0);
}
#endif /* NON_MATCHING */
