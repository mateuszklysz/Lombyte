#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_start_track_body/FUN_00215d18.s", FUN_00215d18);
#else
#include "types.h"
#include "rnc/d_001516d0.h"

struct MusicTable { u8 pad0[0x2AA8]; s32 tracks[1]; };
extern struct MusicTable D_00137B80;
extern struct M2c_D_001516D0 D_001516D0;
extern void D_00216AD0();
extern void func_0012EC08(s32, s32, s32, s32, s16, s32, s32, s32, s32, void (*)(), u64);
void music_start_track_body(s32 arg0, s32 arg1, s32 arg2) __asm__("FUN_00215d18");

void music_start_track_body(s32 arg0, s32 arg1, s32 arg2) {
    s32 val;
    s64 v;

    if (D_001516D0.unk3E != 9) {
        if ((D_001516D0.unk34 != 0) && (D_001516D0.unk34 != 0xFFFFFFFF)) {
            val = D_00137B80.tracks[arg0 + 1];
            if (val != 0) {
                D_001516D0.unk38 = arg0;
                D_001516D0.unk3C = arg1;
                D_001516D0.unk3E = 9;
                D_001516D0.unk48 = 0xA;
                D_001516D0.unk4C = 0xBB80;
                D_001516D0.unk3A = arg2;
                D_001516D0.unk44 = 0;
                v = val;
                func_0012EC08(v, 0, 0, 0, arg2, 0, 1, D_001516D0.unk34, (arg1 & 1) ? 0x24 : 0x20,
                              D_00216AD0, (u32)&D_001516D0.unk34);
            }
        }
    }
}
#endif /* NON_MATCHING */
