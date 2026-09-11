/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00222d98
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 71.4737%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00222d98/FUN_00222d98.s", FUN_00222d98);
#else
#include "rnc/assembly_textbin_fun_00222d98_types.h"
#include "types.h"








extern struct M2c_D_0013D290 D_0013D290;
extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern u8 D_001DDD40[];
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6AF0();
extern s32 func_001FDD10();
s32 FUN_00222d98(struct M2c_arg0 *arg0) {
    s32 temp_16_46;
    s32 temp_16_64;
    s32 temp_16_82;
    s32 temp_17_23;
    s32 temp_17_44;
    s32 temp_18_59;
    u32 temp_16_36;
    u32 temp_16_58;
    u32 temp_16_76;
    u32 temp_17_38;

    temp_17_23 = *(s32 *)((u8 *)(((u8 *)&D_0013D290 + (D_001D5BF4->unk40->unk40 * 0x1C))) + 0x20);
    func_001F4280(0, D_001D5BF4, 0x1C);
    if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0) && (D_0013D290.unk8 == 2)) {
        if (temp_17_23 == -1) {
            temp_16_36 = arg0->unk24;
            temp_17_38 = arg0->unk20;
            temp_17_44 = (s32) (temp_17_38 + (temp_17_38 >> 0x1F)) >> 1;
            temp_16_46 = ((s32) (temp_16_36 + (temp_16_36 >> 0x1F)) >> 1) - 8;
            func_001F6AF0(temp_17_44, temp_16_46, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x5217), -1);
        } else {
            temp_16_58 = arg0->unk20;
            temp_18_59 = temp_17_23 * 0xC;
            temp_16_64 = (s32) (temp_16_58 + (temp_16_58 >> 0x1F)) >> 1;
            func_001F6AF0(temp_16_64, 4, (0x80FF << 0x10) | 0xA888, func_001FDD10(*(temp_18_59 + D_001DDD40)), -1);
            temp_16_76 = arg0->unk20;
            temp_16_82 = (s32) (temp_16_76 + (temp_16_76 >> 0x1F)) >> 1;
            func_001F6AF0(temp_16_82, 0x14, (0x80FF << 0x10) | 0xA888, func_001FDD10(*(s32 *)((u8 *)(D_001DDD40 + temp_18_59) + 0x4)), -1);
        }
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
