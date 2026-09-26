#include "types.h"
#include "rnc/d_001516d0.h"
extern s32 D_0015ED88;
extern s32 D_0011C178[];
extern u8 D_0015EE1C;
extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_00151720[];
extern void func_002169C0();
extern void func_0012EC08(s32, s32, s32, s32, s16, s32, s32, s32, s32, void (*)(), u64);
void music_start_track_30000(s32 track, s32 arg1, s32 arg2) __asm__("FUN_002156d8");

void music_start_track_30000(s32 track, s32 arg1, s32 arg2) {
    s32 *entry;

    entry = (s32 *)((u8 *)D_0011C178 + (track * 4 + D_0015ED88 * 600));
    if (*entry != 0 && D_001516D0.unk50 == 0) {
        *(u32 *)&D_001516D0.unk50 = 0xFFFFFFFF;
        D_001516D0.unk5A = 1;
        D_001516D0.unk54 = track;
        D_001516D0.unk58 = arg1;
        D_001516D0.unk64 = 10;
        D_001516D0.unk68 = 48000;
        D_001516D0.unk56 = arg2;
        D_001516D0.unk60 = 0;
        func_0012EC08(*entry, 0, 0, 0, D_0015EE1C ? arg2 : 0, 0, 2, 0, 0x21, func_002169C0, (u32)D_00151720);
    }
}

extern __typeof__(music_start_track_30000) func_002156D8 __attribute__((alias("FUN_002156d8")));
