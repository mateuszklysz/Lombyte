/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 40.3051%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
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
extern struct M2c_D_00160F00 *D_00160F00[];
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_00233980();
void FUN_001f3868(void) {
    s64 temp_6_53;
    struct M2c_temp_3_33 *temp_3_33;

    D_00160F00[0]->unk0 = 0x30000013;
    D_00160F00[0]->unk4 = D_0013CFC0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x50000013;
    temp_3_33 = D_00160F00[0];
    D_00160F00[0] = ((u8 *)temp_3_33 + (0x10));
    temp_3_33->unk10 = 0x3000000B;
    D_00160F00[0]->unk4 = D_0013CF10;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x5000000B;
    temp_6_53 = (s64) D_0018CD00.unk238 << 0x10;
    D_00160F00[0] += 0x10;
    func_00233980(0x3D, D_0018CD00.unk230 | ((s64) D_0018CD00.unk234 << 8) | temp_6_53, temp_6_53, &D_0018CD00, 0x5000000B, 0x3000000B);
}
#endif /* NON_MATCHING */
