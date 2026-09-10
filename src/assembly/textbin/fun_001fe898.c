/* ROLE: recovered function `Help_DrawPrompt` (game/help.cpp) starts here; recovered extent unknown. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.9649%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fe898/FUN_001fe898.s", FUN_001fe898);
#else
#include "rnc/assembly_textbin_fun_001fe898_types.h"
#include "types.h"


extern struct M2c_D_001996D0 D_001996D0;
extern s32 func_001F44B8();
extern s32 func_001F5450();
extern s32 func_001F5F18();
void FUN_001fe898(void) {
    s32 var_16_29;

    D_001996D0.unk18 = 0x20;
    D_001996D0.unk1C = 0x20;
    func_001F5F18(D_001996D0.unk14 - 0x20, D_001996D0.unk14 + 0x20, D_001996D0.unk10 - 0x20, D_001996D0.unk10 + 0x20, 0x60);
    if ((D_001996D0.unk0 == 1) || (var_16_29 = 0x7E, (D_001996D0.unk0 == 7))) {
        var_16_29 = D_001996D0.unk4 * 0x15;
    }
    func_001F5450(D_001996D0.unk10 - 0x20, D_001996D0.unk14 - 0x20, 0x40, 0x40, 0, 0, 0x40, 0x40, (((var_16_29 >= 0x81) ? 0x80 : var_16_29) << 0x18) | 0x808080, func_001F44B8(4));
}
#endif /* NON_MATCHING */
