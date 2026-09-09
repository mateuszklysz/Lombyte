/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.6154%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002050e8/FUN_002050e8.s", FUN_002050e8);
#else
#include "rnc/assembly_textbin_fun_002050e8_types.h"
#include "types.h"


extern u32 D_0013D4E1[];
extern u8 D_001601E0[];
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_002050A0();
s32 FUN_002050e8(void) {
    s32 *var_3_39;
    s32 temp_16_21;
    s32 temp_16_65;
    s32 temp_19_20;
    s32 temp_2_62;
    s32 var_17_49;
    s32 var_18_32;
    s32 var_2_69;
    s32 var_4_54;
    s32 var_4_64;

    temp_19_20 = (D_0013D4E1[0] == 0) ? 0 : 0x100;
    temp_16_21 = D_001A00F0.unk224 + temp_19_20;
    if (func_002050A0(temp_16_21) != -1) {
        var_18_32 = 0;
        if (D_001A00F0.unk224 < 0x14) {
            if (*D_001601E0 != D_001A00F0.unk224) {
                var_3_39 = *(s32 *)D_001601E0;
                do {
                    var_3_39 += 4;
                    var_18_32 += 1;
                } while (*var_3_39 != D_001A00F0.unk224);
            }
        }
        var_17_49 = 1;
        var_4_54 = var_18_32 + 1;
loop_9:
        if (var_4_54 >= 0) {
            if (var_4_54 < 0x14) {
                temp_2_62 = D_001601E0[var_4_54];
                var_4_64 = var_17_49 < 1;
                if (temp_2_62 != 0) {
                    temp_16_65 = temp_2_62 + temp_19_20;
                    var_2_69 = temp_16_65;
                    if (func_002050A0(temp_16_65) != -1) {
                        goto block_13;
                    }
                } else {
                    goto block_14;
                }
            } else {
                goto block_13;
            }
        } else {
block_13:
            var_4_64 = var_17_49 < 1;
block_14:
            var_17_49 = (var_4_64 != 0) ? (1 - var_17_49) : (0 - var_17_49);
            var_4_54 = var_18_32 + var_17_49;
            if (var_17_49 == 4) {
                var_2_69 = -1;
            } else {
                goto loop_9;
            }
        }
        return var_2_69;
    }
    return temp_16_21;
}
#endif /* NON_MATCHING */
