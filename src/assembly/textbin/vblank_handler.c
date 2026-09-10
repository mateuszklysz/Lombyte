/* ROLE: recovered whole function `vblankHandler` (movie/disp.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.1222%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/vblank_handler/FUN_0023b3d8.s", FUN_0023b3d8);
#else
#include "types.h"
extern s32 D_001611E0;
extern s32 D_001611E4;
extern s32 D_001611E8;
extern s32 D_001611EC;
extern s32 D_001611F0;
extern s32 D_0016120C;
extern s32 func_00120558();
extern s32 func_00122FE0();
extern s32 func_001232C8();
extern s32 func_0023D2D8();
s32 FUN_0023b3d8(void) {
    s32 *temp_2_43;
    s32 temp_17_74;
    s32 temp_18_12;

    temp_18_12 = func_00122FE0(2);
    D_001611EC = (s32) ((s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20);
    if ((D_001611E0 != 0) && (D_001611E4 += 1, D_001611F0 = func_00120558(1, 0), (D_001611F0 == 0))) {
        temp_2_43 = func_0023D2D8(D_0016120C + 0xD9168);
        if (temp_2_43 == NULL) {
            M2C_SYNC();
            /* m2c-unknown:  unknown instruction: ei  */
        } else {
            if ((D_001611EC == 0) && (*temp_2_43 == 2)) {
                func_00120558(0, 0);
                func_001232C8(temp_18_12, temp_2_43 + 0x40);
                *temp_2_43 = 1;
            } else if (D_001611EC == 1) {
                temp_17_74 = *temp_2_43;
                if (temp_17_74 == D_001611EC) {
                    func_00120558(0, 0);
                    func_001232C8(temp_18_12, temp_2_43 + 0x13880);
                    *temp_2_43 = 0;
                    D_001611E8 = temp_17_74;
                }
            }
            goto block_10;
        }
    } else {
block_10:
        M2C_SYNC();
        /* m2c-unknown:  unknown instruction: ei  */
    }
    return 0;
}
#endif /* NON_MATCHING */
