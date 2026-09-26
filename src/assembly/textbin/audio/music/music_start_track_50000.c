#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_start_track_50000/FUN_00215518.s", FUN_00215518);
#else
#include "types.h"
#include "rnc/d_001516d0.h"

struct TrackTable { u8 pad0[0xF00]; s32 tracks[1][6]; };

extern s32 D_0015ED88;
extern struct TrackTable D_00137B80;
extern struct M2c_D_001516D0 D_001516D0;
extern void func_002169C0();
extern void func_0012EC08(s32, s32, s32, s32, s16, s32, s32, s32, s32, void (*)(), u64);

void music_start_track_50000(s32 track, s32 arg1, s32 arg2) __asm__("FUN_00215518");

void music_start_track_50000(s32 track, s32 arg1, s32 arg2) {
    s32 handle;

    handle = D_00137B80.tracks[track - 50000][D_0015ED88];
    if (handle != 0 && D_001516D0.unk50 == 0) {
        *(u32 *)&D_001516D0.unk50 = 0xFFFFFFFF;
        D_001516D0.unk5A = 1;
        D_001516D0.unk64 = 10;
        D_001516D0.unk68 = 48000;
        D_001516D0.unk54 = track;
        D_001516D0.unk58 = arg1;
        D_001516D0.unk56 = arg2;
        D_001516D0.unk60 = 0;
        func_0012EC08(handle, 0, 0, 0, arg2, 0, 2, 0, 0x21, func_002169C0, (u32)&D_001516D0.unk50);
    }
}
#endif /* NON_MATCHING */
