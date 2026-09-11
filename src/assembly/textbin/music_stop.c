/*
STATE: C_NON_MATCHING
SYMBOL: music_Stop__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `music_Stop__Fv`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 60.9333%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/music_stop/FUN_00215ee8.s", FUN_00215ee8);
#else
#include "rnc/assembly_textbin_fun_00215ee8_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012DC80();
extern s32 func_0012EBD0();
extern s32 func_0012ED30();
void FUN_00215ee8(void) {
    if (D_001516D0.unk34 == 0xFFFFFFFF) {
        do {
            func_0012DC80(&D_001516D0);
        } while (D_001516D0.unk34 == 0xFFFFFFFF);
    }
    if (D_001516D0.unk6C == 0xFFFFFFFF) {
        do {
            func_0012DC80(&D_001516D0);
        } while (D_001516D0.unk6C == 0xFFFFFFFF);
    }
    if (D_001516D0.unk50 == 0xFFFFFFFF) {
        do {
            func_0012DC80();
        } while (D_001516D0.unk50 == 0xFFFFFFFF);
    }
    func_0012EBD0();
    do {

    } while (func_0012DC80() != 0);
    func_0012ED30(1);
    do {
        D_001516D0.unk3E = 0;
        D_001516D0.unk3C = 0;
        D_001516D0.unk34 = 0;
    } while (0);
    if (D_001516D0.unk22 != -1) {
        D_001516D0.unk38 = (s16) D_001516D0.unk22;
    }
    D_001516D0.unk23 = -1;
    D_001516D0.unk5A = 0;
    D_001516D0.unk58 = 0;
    D_001516D0.unk50 = 0;
    D_001516D0.unk76 = 0;
    D_001516D0.unk74 = 0;
    D_001516D0.unk6C = 0;
    D_001516D0.unk20 = 0;
    D_001516D0.unk22 = -1;
}
#endif /* NON_MATCHING */
