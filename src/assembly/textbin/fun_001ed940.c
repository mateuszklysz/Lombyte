/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 71.0278%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ed940/FUN_001ed940.s", FUN_001ed940);
#else
#include "rnc/assembly_textbin_fun_001ed940_types.h"
#include "types.h"






extern struct M2c_D_0013F350 D_0013F350;
extern s32 D_0015EF98;
extern s32 D_0015EF9C;
extern s32 D_0015EFA0;
extern struct M2c_D_00187080 D_00187080;
extern struct M2c_D_001870D0 D_001870D0;
void FUN_001ed940(void) {
    s32 var_2_51;
    s32 var_3_52;

    D_0015EF9C = 0x14;
    if ((u32) (D_0013F350.unk208C - 0x11) < 2U) {
        goto block_2;
    }
    if (D_0013F350.unk2084 != 0x73) {
        goto block_3;
    }
block_2:
    D_0015EF9C = 0x34;
block_3:
    if (D_0013F350.unk208C == 0x11) {
        goto block_6;
    }
    if (!(D_0013F350.unk2F0 < D_00187080.unk8)) {
        goto block_6;
    }
    D_0015EF9C = 0x14;
block_6:
    D_0015EFA0 = D_0015EF9C;
    D_0015EF9C |= 0x80;
    D_0015EF98 = 0xB4;
    if (D_0013F350.unk12E5 == 0) {
        goto block_9;
    }
    var_2_51 = 0x100;
    var_3_52 = 0x1B4;
block_8:
    D_001870D0.unkC0 = var_2_51;
    D_0015EF98 = var_3_52;
    return;
block_9:
    var_2_51 = 0xB00;
    if (D_0013F350.unk12EB == 0) {
        goto block_11;
    }
    var_3_52 = 0xBB4;
    goto block_8;
block_11:
    var_2_51 = 0x300;
    if (D_0013F350.unk12E6 == 0) {
        goto block_13;
    }
    var_3_52 = 0x3B4;
    goto block_8;
block_13:
    var_2_51 = 0xD00;
    if (D_0013F350.unk12EC == 0) {
        goto block_15;
    }
    var_3_52 = 0xDB4;
    goto block_8;
block_15:
    if (D_0013F350.unk12E4 != 0) {
        goto block_17;
    }
    goto block_19;
block_17:
    D_001870D0.unkC0 = 0;
    D_0015EF98 = 0xB4;
    return;
block_19:
    D_0015EF98 = D_001870D0.unkC0 | 0xB4;
    return;
}
#endif /* NON_MATCHING */
