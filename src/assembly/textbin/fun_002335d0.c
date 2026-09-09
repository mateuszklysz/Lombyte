/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 65.4348%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002335d0/FUN_002335d0.s", FUN_002335d0);
#else
#include "rnc/assembly_textbin_fun_002335d0_types.h"
#include "types.h"




extern s32 D_0015F5B8;
extern s32 D_0015F638;
extern s32 D_0015F63C;
extern struct M2c_D_00160EF8 D_00160EF8;
extern s32 D_00160F00;
extern s32 D_00160F0C;
extern s32 D_00160F10;
extern struct M2c_D_001940C0 D_001940C0;
void FUN_002335d0(void) {
    s32 temp_3_17;

    D_00160EF8.unk0 = (s32) D_001940C0.unk4;
    temp_3_17 = (D_001940C0.unk4 + D_00160F0C) - D_0015F5B8;
    D_00160EF8.unk4 = (s32) D_001940C0.unk8;
    D_00160F10 = 0;
    D_0015F63C = temp_3_17 - 0x2000;
    D_00160F00 = D_001940C0.unk4;
    D_0015F638 = temp_3_17;
}
#endif /* NON_MATCHING */
