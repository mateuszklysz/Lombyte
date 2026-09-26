#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_update_stream/FUN_002160a8.s", FUN_002160a8);
#else
#include "types.h"

struct M2c_arg0 {
    s32 unk0;
    u8 pad_4[0x6];
    s16 unkA;
    s16 unkC;
};

extern void func_0012E368();
extern void func_0012E448();
extern void func_0012EC70();
extern void func_0012ECA0();
extern void func_0012ECD0(s32, void *, u64);
extern void func_0012ED00(s32, void *, u64);
extern s32 func_001F9770();
extern void func_00216990();
extern void func_00216B68();
extern void func_00216BC0();

void music_update_stream(struct M2c_arg0 *arg0) __asm__("FUN_002160a8");

void music_update_stream(struct M2c_arg0 *arg0) {
    s16 temp_3_12;
    s32 temp_4_15;
    s32 temp_4_91;
    s32 temp_4_99;
    s32 temp_17_92;
    u64 temp_16_95;

    temp_3_12 = arg0->unkA;
    if (temp_3_12 == 9) {
        goto block_29;
    }
    temp_4_15 = arg0->unk0;
    if (temp_4_15 == 0) {
        goto block_29;
    }
    if (temp_4_15 == -1) {
        goto block_29;
    }
    if (temp_3_12 == 5) {
        if (temp_4_15 != 0) {
            func_0012E368(temp_4_15);
            arg0->unkA = 6;
        } else {
            arg0->unkA = 0;
        }
        goto block_9;
    }
    if (temp_3_12 == 6) {
        if (temp_4_15 == 0) {
            arg0->unkA = 0;
            goto block_9;
        }
        goto block_10;
    }
block_9:
    if (arg0->unk0 == 0) {
        return;
    }
block_10:
    if (arg0->unkC & 0x8000) {
        if (!(arg0->unkA & 0x8000)) {
            func_0012EC70(arg0->unk0);
            arg0->unkA = (s16) ((u16) arg0->unkA | 0x8000);
        }
        if (func_001F9770(((u8 *)arg0 + (0xE))) == 2) {
            arg0->unkC = 4;
        }
        goto block_17;
    }
    if (arg0->unkA & 0x8000) {
        func_0012ECA0(arg0->unk0);
        arg0->unkA = (s16) ((u16) arg0->unkA ^ 0x8000);
    }
block_17:
    if (arg0->unkA & 0x8000) {
        return;
    }
    if (((s16) ((u16) arg0->unkA) != 1) && ((s16) ((u16) arg0->unkA) != 8) && ((s16) ((u16) arg0->unkA) != 9)) {
        if ((u32) ((u16) arg0->unkA - 2) >= 2U) {
            temp_17_92 = arg0->unk0;
            temp_16_95 = (u64) (s32) arg0;
            temp_4_99 = temp_17_92;
            arg0->unk0 = -1;
            func_0012ECD0(temp_4_99, (void *) &func_00216BC0, temp_16_95);
            func_0012E448(temp_17_92, (void *) &func_00216B68, temp_16_95);
        } else {
            temp_4_91 = arg0->unk0;
            if (temp_4_91 == -1) {
                return;
            }
            if ((s16) ((u16) arg0->unkA) == 2) {
                func_0012ED00(temp_4_91, (void *) &func_00216990, (u64) (s32) arg0);
            }
        }
    }
    return;
block_29:
    if ((temp_3_12 == 7) || (arg0->unk0 == 0)) {
        arg0->unkA = 0;
    }
}
#endif /* NON_MATCHING */
