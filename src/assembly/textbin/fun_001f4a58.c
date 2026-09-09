/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 60.2959%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4a58/FUN_001f4a58.s", FUN_001f4a58);
#else
#include "rnc/assembly_textbin_fun_001f4a58_types.h"
#include "types.h"




extern u8 D_0013CDD0[];
extern s32 D_0015F438;
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00122298();
extern s32 func_001F5210();
extern s32 func_001FB2D0();
extern s32 func_001FB368();
extern s32 func_001FB3D0();
extern s32 func_002335D0();
extern s32 func_00233630();
extern s32 func_002336A0();
extern s32 func_002337B0();
extern s32 func_00233980();
void FUN_001f4a58(s32 arg0) {
    s32 temp_lo_45;
    s32 var_16_9;
    struct M2c_temp_5_66 *temp_5_66;

    var_16_9 = arg0 - 1;
    func_002337B0(1);
    func_00122298(0);
    D_0015F438 += 1;
    func_002335D0();
    if (var_16_9 < 0) {
        goto block_3;
    }
loop_2:
    func_001FB2D0();
    func_001FB368();
    func_001F5210(0, 0, 0, 0x80);
    func_001FB3D0();
    temp_lo_45 = (s32) (var_16_9 << 7) / (s32) (var_16_9 + 1);
    var_16_9 -= 1;
    func_00233980(1, (0x80 - temp_lo_45) << 0x18);
    D_00160F00->unk0 = 0x30000014;
    D_00160F00->unk4 = D_0013CDD0;
    D_00160F00->unk8 = 0;
    temp_5_66 = D_00160F00;
    temp_5_66->unkC = 0x50000014;
    D_00160F00 += 0x10;
    func_002337B0(1, temp_5_66);
    func_00122298(0);
    D_0015F438 += 1;
    func_002336A0();
    func_00233630();
    if (var_16_9 >= 0) {
        goto loop_2;
    }
block_3:
    func_002337B0(1);
    func_00122298(0);
    D_0015F438 += 1;
    func_002335D0();
    func_001FB2D0();
    func_001FB368();
    return;
}
#endif /* NON_MATCHING */
