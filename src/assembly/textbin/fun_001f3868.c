/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 30.7288%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f3868/FUN_001f3868.s", FUN_001f3868);
#else
#include "rnc/assembly_textbin_fun_001f3868_types.h"
#include "types.h"






extern u8 D_0013CF10[];
extern u8 D_0013CFC0[];
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_00233980();
void FUN_001f3868(void) {
    s64 temp_6_55;
    struct M2c_temp_3_35 *temp_3_35;

    D_00160F00->unk0 = 0x30000013;
    D_00160F00->unk4 = D_0013CFC0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000013;
    temp_3_35 = D_00160F00;
    D_00160F00 = ((u8 *)temp_3_35 + (0x10));
    temp_3_35->unk10 = 0x3000000B;
    D_00160F00->unk4 = D_0013CF10;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x5000000B;
    temp_6_55 = (s64) D_0018CD00.unk238 << 0x10;
    D_00160F00 += 0x10;
    func_00233980(0x3D, D_0018CD00.unk230 | ((s64) D_0018CD00.unk234 << 8) | temp_6_55, temp_6_55, &D_0018CD00, 0x5000000B, 0x3000000B);
}
#endif /* NON_MATCHING */
