/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 81.5469%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023cac8/FUN_0023cac8.s", FUN_0023cac8);
#else
#include "types.h"
extern s32 func_0012B7D8();
extern s32 func_0012BB10();
extern s32 func_0023BC48();
extern s32 func_0023CC30();
extern void func_0023D080();
extern void func_0023D0A8();
extern void func_0023D0E0();
extern void func_0023D110();
extern void func_0023D140();
s32 FUN_0023cac8(s32 arg1, s32 arg2, s32 arg0, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0012B7D8();
    func_0012BB10(arg0, 0, &func_0023D080, 0);
    func_0012BB10(arg0, 1, &func_0023D0A8, 0);
    func_0012BB10(arg0, 2, &func_0023D0E0, 0);
    func_0012BB10(arg0, 3, &func_0023D110, 0);
    func_0012BB10(arg0, 5, &func_0023D140, 0);
    func_0023CC30(arg0);
    func_0023BC48(arg0 + 0x48, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
#endif /* NON_MATCHING */
