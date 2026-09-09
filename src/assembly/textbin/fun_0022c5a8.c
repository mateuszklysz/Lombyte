/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 43.9070%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c5a8/FUN_0022c5a8.s", FUN_0022c5a8);
#else
#include "types.h"
extern u32 D_0013E5BC[];
extern u8 D_00187080[];
extern u8 D_00194120[];
extern s32 func_001EFA68();
extern s32 func_001F9A10();
extern s32 func_001F9A28();
extern s32 func_001F9A68();
extern s32 func_00213358();
void FUN_0022c5a8(s32 arg0) {
    func_00213358(0x3F000000, 0x40C00000);
    func_001F9A10(arg0, arg0, D_00187080);
    if (func_001EFA68(D_00187080, arg0, 0x82, D_0013E5BC[0], 0) != 0) {
        func_001F9A28(arg0, D_00194120, D_00187080);
        func_001F9A68(arg0, arg0, 0x3F400000);
        func_001F9A10(arg0, arg0, D_00187080);
    }
}
#endif /* NON_MATCHING */
