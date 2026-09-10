/* ROLE: recovered function `termAll__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.5224%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023aa68/FUN_0023aa68.s", FUN_0023aa68);
#else
#include "rnc/assembly_textbin_fun_0023aa68_types.h"
#include "types.h"


extern struct M2c_D_0016120C *D_0016120C;
extern s32 D_00161210;
extern s32 func_001187A0();
extern s32 func_001187D0();
extern s32 func_00118860();
extern s32 func_00118880();
extern s32 func_00119028();
extern s32 func_001190F8();
extern s32 func_00120C30();
extern s32 func_0023AC90();
extern s32 func_0023B958();
extern s32 func_0023BA58();
extern s32 func_0023CC38();
extern s32 func_0023D1E0();
void FUN_0023aa68(void) {
    func_00120C30(0);
    func_0023B958(D_0016120C);
    func_0023D1E0(D_0016120C + 0xD9168);
    func_00118880(D_00161210);
    func_00118860(D_00161210);
    func_001190F8(2);
    func_001187D0(2, D_0016120C->unkD90F8);
    func_00119028(2);
    func_001187A0(2, D_0016120C->unkD90FC);
    func_0023CC38(D_0016120C + 0xD9048);
    func_0023AC90(D_0016120C + 0xD9100);
    func_0023BA58(D_0016120C + 0xD9040);
    func_00120C30(0);
    *(s32 *)0x1000E000 &= 0xFFFFFFFD;
}
#endif /* NON_MATCHING */
