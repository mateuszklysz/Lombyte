/* ROLE: recovered whole function `InitMemSlots__Fv` (game/initonce.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.5333%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/init_mem_slots/FUN_002015d8.s", FUN_002015d8);
#else
#include "rnc/assembly_textbin_fun_002015d8_types.h"
#include "types.h"


extern u32 D_00160F0C[];
extern struct M2c_D_001940C0 D_001940C0;
void FUN_002015d8(void) {
    s32 temp_11_14;
    s32 temp_4_12;
    s32 temp_5_19;
    s32 temp_6_23;
    s32 temp_7_16;

    temp_4_12 = 0x24135F & 0xFFFFC000;
    temp_11_14 = temp_4_12 + D_00160F0C[0];
    temp_7_16 = temp_11_14 + D_00160F0C[0];
    temp_5_19 = temp_7_16 + 0x64000;
    D_001940C0.unk28 = 0x07200000;
    D_001940C0.unk0 = temp_4_12;
    temp_6_23 = temp_5_19 + 0x30000;
    D_001940C0.unk18 = temp_6_23;
    D_001940C0.unk20 = 0x07000000;
    D_001940C0.unk24 = 0x07100000;
    D_001940C0.unk4 = temp_4_12;
    D_001940C0.unk8 = temp_11_14;
    D_001940C0.unkC = temp_7_16;
    D_001940C0.unk10 = temp_5_19;
    D_001940C0.unk14 = temp_6_23;
}
#endif /* NON_MATCHING */
