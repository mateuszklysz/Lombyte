#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_start_track_body/FUN_00215d18.s", FUN_00215d18);
#else
#include "rnc/assembly_textbin_fun_00215d18_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_00216AD0[];
extern s32 func_0012EC08();
void music_start_track_body(s32 arg0, s32 arg1, s32 arg2) __asm__("FUN_00215d18");

void music_start_track_body(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_4_24;

    if (D_001516D0.unk3E != 9) {
        if ((D_001516D0.unk34 != 0) && (D_001516D0.unk34 != 0xFFFFFFFF)) {
            temp_4_24 = ((s32 *)(D_00137B80 + 0x2AA8))[arg0 + 1];
            if (temp_4_24 != 0) {
                D_001516D0.unk38 = arg0;
                D_001516D0.unk3C = arg1;
                D_001516D0.unk3E = 9;
                D_001516D0.unk48 = 0xA;
                D_001516D0.unk4C = 0xBB80;
                D_001516D0.unk3A = arg2;
                D_001516D0.unk44 = 0;
                func_0012EC08((s64) ((s64) temp_4_24 << 0x20) >> 0x20, 0, 0, 0, arg2, 0, 1, D_001516D0.unk34, (arg1 & 1) ? 0x24 : 0x20, D_00216AD0, (u64) ((s64) (((u8 *)&D_001516D0 + 0x34)) << 0x20) >> 0x20);
            }
        }
    }
}
#endif /* NON_MATCHING */
