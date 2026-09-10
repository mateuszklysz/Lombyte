/* ROLE: recovered whole function `Camera_handleCollWithHero__FiP9UpdateCam` (camera). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 51.5417%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/camera_handle_coll_with_hero/FUN_001ebe68.s", FUN_001ebe68);
#else
#include "rnc/assembly_textbin_fun_001ebe68_types.h"
#include "types.h"




extern struct M2c_D_001870D0 D_001870D0;
extern s32 func_001E9448();
extern s32 func_0020C828();
void FUN_001ebe68(struct M2c_arg0 *arg0) {
    if (arg0->unk86 == 0) {
        if (D_001870D0.unkC4 == 0) {
            D_001870D0.unkC4 = func_001E9448(&D_001870D0 - 0x50);
        }
    } else if (D_001870D0.unkC4 != 0) {
        func_0020C828(D_001870D0.unkC4);
        D_001870D0.unkC4 = 0;
    }
}
#endif /* NON_MATCHING */
