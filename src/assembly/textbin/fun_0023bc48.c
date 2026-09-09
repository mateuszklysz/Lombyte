/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.9333%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023bc48/FUN_0023bc48.s", FUN_0023bc48);
#else
#include "rnc/assembly_textbin_fun_0023bc48_types.h"
#include "types.h"


extern s32 func_00118970();
extern s32 func_0023BCC0();
s32 FUN_0023bc48(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
u8 sp_slot[0x40];    s32 temp_10_19;
    s32 temp_6_18;

    arg0->unk0 = arg1;
    arg0->unk50 = arg4;
    arg0->unk54 = arg5;
    temp_6_18 = (arg2 & 0x0FFFFFFF) | 0x20000000;
    temp_10_19 = arg3 << 0xB;
    arg0->unk4 = temp_6_18;
    arg0->unk18 = temp_10_19;
    arg0->unk8 = arg3;
    arg0->unk40 = func_00118970(sp_slot, temp_6_18, temp_10_19, 1, 1);
    func_0023BCC0(arg0);
    arg0->unk48 = 0;
    return 1;
}
#endif /* NON_MATCHING */
