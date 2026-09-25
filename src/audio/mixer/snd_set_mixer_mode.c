#include "types.h"
extern s32 func_0012E6E0();
void snd_set_mixer_mode(s32 arg0, s32 arg1) __asm__("FUN_0012e280");

void snd_set_mixer_mode(s32 arg0, s32 arg1) {
    s32 local[2];

    local[0] = arg0;
    local[1] = arg1;
    func_0012E6E0(0xD, 8, local, 0, 0);
}
