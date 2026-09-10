/* ROLE: recovered function `PauseAllSounds` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.0513%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00218d78/FUN_00218d78.s", FUN_00218d78);
#else
#include "rnc/assembly_textbin_fun_00218d78_types.h"
#include "types.h"






extern u32 D_0014161B[];
extern u32 D_00141660[];
extern u32 D_0015ED84[];
extern u32 D_0015EE20[];
extern u32 D_0015EEA0[];
extern u32 D_0015F604[];
extern u32 D_0015F674[];
extern u32 D_0018C32C[];
extern u32 D_001A0314[];
extern struct M2c_D_001CE5B8 D_001CE5B8;
extern struct M2c_D_001CE748 D_001CE748;
extern u8 D_001CE798[];
extern u32 D_001D0398[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_0012DC80();
extern s32 func_0012E3E8();
extern s32 func_0020B950();
extern s32 func_00216050();
extern s32 func_00226E58();
void FUN_00218d78(s32 arg0) {
    s32 *var_4_86;
    s32 *var_4_99;
    s32 temp_4_110;
    s32 var_3_61;
    s32 var_4_36;
    s32 var_4_49;

    func_0012E3E8(0x1D);
    func_00216050(0);
    func_0012DC80();
    if (D_0018C32C[0] != 0) {
        D_0015F674[0] = 1;
        return;
    }
    if (D_00141660[0] == 0x24) {
        D_00141660[0] = 0;
    }
    var_4_36 = 0;
    if ((D_0015ED84[0] == 0xD) || (D_0014161B[0] != 0)) {
        var_4_36 = 1;
    }
    D_001D5BF0.unk134 = var_4_36;
    var_4_49 = 0;
    if ((D_0015ED84[0] == 0) || (D_0015ED84[0] == 0xE)) {
        var_4_49 = 1;
    }
    D_001D5BF0.unk138 = var_4_49;
    var_3_61 = 0;
    if ((D_0015EEA0[0] != 0) || (D_0015EE20[0] != 0) || (D_001D5BF0.unkF8 != 0)) {
        var_3_61 = 1;
    }
    D_001D5BF0.unkD8 = var_3_61;
    D_001D5BF0.unkDC = (s32) (arg0 == 0x23);
    if (D_001D5BF0.unkD8 != 0) {
        var_4_86 = D_001CE798;
    } else {
        var_4_86 = &D_001CE748;
    }
    D_001CE5B8.unk38 = var_4_86;
    if (D_001D5BF0.unkD8 != 0) {
        var_4_99 = D_001CE798;
    } else {
        var_4_99 = &D_001CE5B8;
    }
    D_001CE748.unk3C = var_4_99;
    D_0015F604[0] = 3;
    temp_4_110 = D_0015ED84[0] < 0x13;
    D_001D5BF0.unk0 = arg0;
    D_001D5BF0.unk110 = 0;
    D_001D5BF0.unkC = 0;
    D_001D5BF0.unk10 = 0;
    if (temp_4_110 != 0) {
        D_001A0314[0] = D_0015ED84[0];
    } else {
        D_001A0314[0] = 0;
    }
    func_0020B950(temp_4_110, D_0015ED84[0], &D_001CE748, &D_001CE5B8);
    D_001D0398[0] = 0;
    func_00226E58();
    D_001D5BF0.unk13C = 1;
    D_001D5BF0.unk140 = 0;
}
#endif /* NON_MATCHING */
