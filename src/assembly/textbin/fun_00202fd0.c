/* ROLE: recovered function `SetUpVisGifViewer__FPiiiiii` (loaders.cpp, 0x1a20 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 22.6386%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00202fd0/FUN_00202fd0.s", FUN_00202fd0);
#else
#include "rnc/assembly_textbin_fun_00202fd0_types.h"
#include "types.h"










extern u8 D_0019E540[];
extern u8 D_0019E6C0[];
extern u8 D_0019E6D8[];
void FUN_00202fd0(struct M2c_arg0 *arg0, s64 arg1, s64 arg2, s32 arg3, s64 arg4, s64 arg5) {
    struct M2c_var_7_51 *var_7_51;
    s32 temp_2_9;
    struct M2c_temp_11_38 *temp_11_38;
    struct M2c_temp_11_63 *temp_11_63;
    struct M2c_temp_11_85 *temp_11_85;

    temp_2_9 = arg5 * 3;
    if (arg5 >= 0) {
        arg0->unk0 = (s64) ((*(((temp_2_9 + 1) * 8) + D_0019E540) & 0x1C) | ((arg2 << 6) | 0x20) | (arg1 << 0x20));
        temp_11_38 = ((u8 *)arg0 + (0x10));
        arg0->unk10 = (s64) (arg3 | (arg4 * 4) | (arg5 << 0x18));
        *(s32 *)((u8 *)(((u8 *)temp_11_38 + (0x10))) + 0x10) = (s64) *(((temp_2_9 + 2) * 8) + D_0019E540);
        temp_11_38->unk10 = (s64) *((arg5 * 0x18) + D_0019E540);
        return;
    }
    if (arg5 < -1) {
        var_7_51 = D_0019E6C0;
        if (arg5 == -3) {
            var_7_51 = D_0019E6D8;
        }
        arg0->unk0 = (s64) ((arg2 << 6) | ((arg1 << 0x20) | 0x20));
        temp_11_63 = ((u8 *)arg0 + (0x10));
        arg0->unk10 = 5;
        temp_11_63->unk10 = (s64) var_7_51->unk0;
        *(s32 *)((u8 *)(((u8 *)temp_11_63 + (0x10))) + 0x10) = (s64) var_7_51->unk10;
        return;
    }
    arg0->unk0 = (s64) ((arg2 << 6) | ((arg1 << 0x20) | 0x20));
    temp_11_85 = ((u8 *)arg0 + (0x10));
    arg0->unk10 = 5;
    temp_11_85->unk10 = (s64) ((((0x8000 << 0x1D) | 0x9980) << 0x13) | 0x7FFB);
    *(s32 *)((u8 *)(((u8 *)temp_11_85 + (0x10))) + 0x10) = 0;
}
#endif /* NON_MATCHING */
