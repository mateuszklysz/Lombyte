/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.3874%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239160/FUN_00239160.s", FUN_00239160);
#else
#include "rnc/assembly_textbin_fun_00239160_types.h"
#include "types.h"


extern u8 D_0013D428[];
extern u32 D_0013D4E3[];
extern u32 D_0015ED98[];
extern u8 D_001DFFB0[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern s32 func_001F6B88();
extern s32 func_001FB8F0();
extern s32 func_001FDD10();
void FUN_00239160(void) {
    s32 var_4_68;
    s32 *temp_3_47;
    s32 temp_2_30;
    s32 temp_6_23;
    s32 temp_9_25;
    s32 var_3_81;
    u16 var_3_53;
    s32 *temp_8_22;

    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if (D_001E63C0.unk5C != 0) {
        temp_8_22 = ((u8 *)&D_001E63C0 + 0xD0);
        temp_6_23 = D_001E63C0.unk58 * 0x14;
        temp_9_25 = *(s32 *)((u8 *)(((u8 *)&D_001E63C0 + temp_6_23)) + 0xD4);
        if (temp_9_25 == 1) {
            temp_2_30 = *(temp_6_23 + temp_8_22);
            if (*((temp_2_30 * 4) + D_0013D428) < (s32) *(s32 *)((u8 *)((temp_2_30 * 0x18) + D_001DFFB0) + 0xE)) {
                if (temp_9_25 == 1) {
                    temp_3_47 = temp_6_23 + temp_8_22;
                    if (D_001E63C0.unk40 != 0) {
                        var_3_53 = *(s32 *)((u8 *)((*temp_3_47 * 0x18) + D_001DFFB0) + 0xA);
                    } else {
                        var_3_53 = *(s32 *)((u8 *)((*temp_3_47 * 0x18) + D_001DFFB0) + 0x8);
                    }
                    if (D_0015ED98[0] >= (s32) var_3_53) {
                        var_4_68 = 0x4EE0;
                        goto block_15;
                    }
                } else {
                    goto block_10;
                }
            }
        } else {
block_10:
            if (D_0013D4E3[0] != 0) {
                var_3_81 = *(s32 *)((u8 *)(D_001DFFB0 + (*(temp_6_23 + temp_8_22) * 0x18)) + 0x4);
            } else {
                var_3_81 = *((*(temp_6_23 + temp_8_22) * 0x18) + D_001DFFB0);
            }
            if (D_0015ED98[0] >= var_3_81) {
                var_4_68 = 0x524B;
block_15:
                func_001F6B88(0x28, 0x14, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(var_4_68, 0x18, temp_6_23, &D_001E63C0, temp_8_22, temp_9_25, D_001DFFB0, 1), -1);
            }
        }
    } else {
        func_001F6B88(0x28, 0x14, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(0x4EE0), -1);
    }
}
#endif /* NON_MATCHING */
