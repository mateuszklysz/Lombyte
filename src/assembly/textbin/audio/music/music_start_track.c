#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/music/music_start_track/FUN_00215c40.s", FUN_00215c40);
#else
#include "rnc/assembly_textbin_fun_00215c40_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_00216B28[];
extern s32 func_0012EC08();
void music_start_track(s16 arg0, s16 arg1, s16 arg2) __asm__("FUN_00215c40");

void music_start_track(s16 arg0, s16 arg1, s16 arg2) {
    s32 *temp_4_16;

    if (D_001516D0.unk34 == 0) {
        temp_4_16 = (arg0 * 4) + (D_00137B80 + 0x2AA8);
        if (*temp_4_16 != 0) {
            D_001516D0.unk3E = 1;
            D_001516D0.unk38 = arg0;
            D_001516D0.unk48 = 0xA;
            D_001516D0.unk4C = 0xBB80;
            D_001516D0.unk34 = 0xFFFFFFFF;
            D_001516D0.unk3C = arg1;
            D_001516D0.unk3A = arg2;
            D_001516D0.unk44 = 0;
            func_0012EC08((s64) ((s64) *temp_4_16 << 0x20) >> 0x20, 0, 0, 0, arg2, 0, 1, 0, 0x20, D_00216B28, (u64) ((s64) (((u8 *)&D_001516D0 + 0x34)) << 0x20) >> 0x20);
        }
    }
}
#endif /* NON_MATCHING */
