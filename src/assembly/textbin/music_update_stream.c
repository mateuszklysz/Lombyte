/* ROLE: recovered whole function `music_UpdateStream__FR13music_Playing` (music.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.3033%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/music_update_stream/FUN_002160a8.s", FUN_002160a8);
#else
#include "rnc/assembly_textbin_fun_002160a8_types.h"
#include "types.h"


extern s32 func_0012E368();
extern s32 func_0012E448();
extern s32 func_0012EC70();
extern s32 func_0012ECA0();
extern s32 func_0012ECD0();
extern s32 func_0012ED00();
extern s32 func_001F9770();
extern void func_00216990();
extern void func_00216B68();
extern void func_00216BC0();
void FUN_002160a8(struct M2c_arg0 *arg0) {
    s16 temp_2_46;
    s16 temp_3_12;
    s32 temp_17_92;
    s32 temp_4_15;
    s32 temp_4_91;
    s32 temp_4_99;
    u64 temp_16_95;

    temp_3_12 = arg0->unkA;
    if ((temp_3_12 != 9) && (temp_4_15 = arg0->unk0, (temp_4_15 != 0))) {
        if (temp_4_15 != 0xFFFFFFFF) {
            if (temp_3_12 == 5) {
                if (temp_4_15 != 0) {
                    func_0012E368(temp_4_15);
                    arg0->unkA = 6;
                } else {
                    goto block_8;
                }
                goto block_9;
            }
            if (temp_3_12 == 6) {
                if (temp_4_15 == 0) {
block_8:
                    arg0->unkA = 0;
                    goto block_9;
                }
                goto block_10;
            }
block_9:
            if (arg0->unk0 != 0) {
block_10:
                temp_2_46 = arg0->unkA;
                if (arg0->unkC & 0x8000) {
                    if (!(temp_2_46 & 0x8000)) {
                        func_0012EC70(arg0->unk0);
                        arg0->unkA = (s16) ((u16) arg0->unkA | 0x8000);
                    }
                    if (func_001F9770(((u8 *)arg0 + (0xE))) == 2) {
                        arg0->unkC = 4;
                    }
                    goto block_17;
                }
                if (temp_2_46 & 0x8000) {
                    func_0012ECA0(arg0->unk0);
                    arg0->unkA = (s16) ((u16) arg0->unkA ^ 0x8000);
block_17:
                    if (!(arg0->unkA & 0x8000)) {
                        goto block_18;
                    }
                } else {
block_18:
                    if (((s16) (u16) arg0->unkA != 1) && ((s16) (u16) arg0->unkA != 8) && ((s16) (u16) arg0->unkA != 9)) {
                        if ((u32) ((s16) (u16) arg0->unkA - 2) < 2U) {
                            temp_4_91 = arg0->unk0;
                            if (temp_4_91 != 0xFFFFFFFF) {
                                if ((s16) (u16) arg0->unkA == 2) {
                                    func_0012ED00(temp_4_91, &func_00216990, (u64) ((s64) arg0 << 0x20) >> 0x20);
                                }
                            }
                        } else {
                            temp_17_92 = arg0->unk0;
                            temp_16_95 = (u64) ((s64) arg0 << 0x20) >> 0x20;
                            temp_4_99 = temp_17_92;
                            arg0->unk0 = 0xFFFFFFFF;
                            func_0012ECD0(temp_4_99, &func_00216BC0, temp_16_95);
                            func_0012E448(temp_17_92, &func_00216B68, temp_16_95);
                        }
                    }
                }
            }
        } else {
            goto block_29;
        }
    } else {
block_29:
        if ((temp_3_12 == 7) || (arg0->unk0 == 0)) {
            arg0->unkA = 0;
        }
    }
}
#endif /* NON_MATCHING */
