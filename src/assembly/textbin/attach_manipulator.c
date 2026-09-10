/* ROLE: recovered whole function `AttachManipulator` (mobyfunc). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.3000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/attach_manipulator/FUN_0020cb10.s", FUN_0020cb10);
#else
#include "rnc/assembly_textbin_fun_0020cb10_types.h"
#include "types.h"






void FUN_0020cb10(struct M2c_arg0 *arg0, u8 arg1, struct M2c_arg2 *arg2) {
    u8 *temp_4_23;

    if (arg2->unk1 == 0) {
        arg2->unk0 = arg1;
        arg2->unk1 = 1U;
        arg2->unk28 = 1.0f;
        arg2->unk1C = 1.0f;
        arg2->unk20 = 1.0f;
        arg2->unk24 = 1.0f;
        temp_4_23 = *(s32 *)((u8 *)((arg2->unk0 * 4) + arg0->unk24->unk1C) + 0x4);
        arg2->unk4 = (s32) ((*(s32 *)((u8 *)(*temp_4_23 + temp_4_23) + 0x4) << 6) + 0x70000000);
        arg2->unk8 = (void *) arg0->unk64;
        arg0->unk64 = arg2;
    }
}
#endif /* NON_MATCHING */
