#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_start_track/FUN_00215c40.s", FUN_00215c40);
#else
#include "types.h"
#include "rnc/d_001516d0.h"
struct MusicTable { u8 pad0[0x2AA8]; s32 tracks[1]; };
extern struct MusicTable D_00137B80;
extern struct M2c_D_001516D0 D_001516D0;
extern void D_00216B28();
extern void func_0012EC08(s32, s32, s32, s32, s16, s32, s32, s32, s32, void (*)(), u64);
void music_start_track(s32 track, s32 arg1, s32 arg2) __asm__("FUN_00215c40");

void music_start_track(s32 track, s32 arg1, s32 arg2) {
    volatile s32 *entry;
    s64 v;

    if (D_001516D0.unk34 != 0) {
        return;
    }
    entry = &D_00137B80.tracks[track];
    if (*entry != 0) {
        *(u32 *)&D_001516D0.unk34 = 0xFFFFFFFF;
        D_001516D0.unk3E = 1;
        D_001516D0.unk38 = track;
        D_001516D0.unk3C = arg1;
        D_001516D0.unk48 = 10;
        D_001516D0.unk4C = 48000;
        D_001516D0.unk44 = 0;
        D_001516D0.unk3A = arg2;
        v = *entry;
        func_0012EC08(v, 0, 0, 0, arg2, 0, 1, 0, 0x20, D_00216B28, (u32)&D_001516D0.unk34);
    }
}
#endif /* NON_MATCHING */
