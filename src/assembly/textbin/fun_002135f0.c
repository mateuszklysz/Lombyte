/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.0968%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002135f0/FUN_002135f0.s", FUN_002135f0);
#else
#include "rnc/assembly_textbin_fun_002135f0_types.h"
#include "types.h"


extern s32 D_00161198;
extern s32 D_0016119C[];
extern u8 D_001611A0[];
extern s32 D_001611A8;
extern s32 D_001611AC;
extern s32 func_001F99C0();
extern s32 func_001F9A00();
extern s32 func_001F9B80();
extern s32 func_00239F58();
f32 FUN_002135f0(struct M2c_arg0 *arg0, s32 arg1) {
u8 sp_slot[0x40];    f32 sp0;
    f32 temp_f0_12;

    if ((D_00161198 == 0) || (temp_f0_12 = arg0->unk8, sp0 = temp_f0_12, (func_00239F58(sp_slot, arg0->unk0, arg0->unk4, temp_f0_12) == 0))) {
        if ((D_0016119C[0] != 0) && (func_001F99C0(arg0->unk8 - D_001611A8) < 0.5f) && (func_001F9B80(arg0, D_001611A0) < D_001611AC)) {
            if (arg1 != 0) {
                func_001F9A00(arg1);
            }
            return D_001611A8;
        }
        if (arg1 != 0) {
            func_001F9A00(arg1);
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return arg0->unk8;
    }
    return arg0->unk8;
}
#endif /* NON_MATCHING */
