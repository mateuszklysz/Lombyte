/* ROLE: recovered whole function `DmaMobyTextures` (game/initonce.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.5152%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/dma_moby_textures/FUN_0020cdf0.s", FUN_0020cdf0);
#else
#include "rnc/assembly_textbin_fun_0020cdf0_types.h"
#include "types.h"










extern s32 D_0015EE74;
extern struct M2c_D_0015FF0C *D_0015FF0C;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern s32 func_00211408();
extern s32 func_00233B68();
void FUN_0020cdf0(void) {
    struct M2c_temp_16_11 *temp_16_11;
    struct M2c_temp_3_32 *temp_3_32;

    temp_16_11 = D_00160F00;
    D_00160F00 = ((u8 *)temp_16_11 + (0x10));
    D_0015FF0C->unk0 = 0x20000000;
    D_0015FF0C->unk4 = (s32 *) D_00160F00;
    D_0015FF0C->unk8 = 0;
    D_0015FF0C->unkC = 0;
    temp_3_32 = D_00160F00;
    if (D_0018A2B0.unk28 != 0) {
        if (D_0018A2B0.unk24 != 0) {
            func_00211408(D_0015EE74, 0x20000000, 0x20000000, &D_0018A2B0);
            func_00233B68();
        }
    }
    temp_3_32->unk0 = 0x20000000;
    D_00160F00->unk4 = (void *) (D_0015FF0C + 0x10);
    do {
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0;
    } while (0);
    D_00160F00 += 0x10;
    temp_16_11->unk0 = 0x20000000;
    temp_16_11->unkC = 0;
    temp_16_11->unk4 = (s32 *) D_00160F00;
    temp_16_11->unk8 = 0;
}
#endif /* NON_MATCHING */
