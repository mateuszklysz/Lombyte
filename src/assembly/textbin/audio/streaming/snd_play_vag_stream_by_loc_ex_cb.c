#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/streaming/snd_play_vag_stream_by_loc_ex_cb/FUN_0012ec08.s", FUN_0012ec08);
#else
#include "types.h"
#include "types.h"
extern s32 func_0012E6E0(s32, s32, void *, s32, u64);
void snd_play_vag_stream_by_loc_ex_cb(s32 loc, s32 size, s32 vol_l, s32 vol_r, s32 pitch, s32 flags,
                                      s32 voice, s32 channel, s32 id, s32 cb, u64 cb_data) __asm__("FUN_0012ec08");

void snd_play_vag_stream_by_loc_ex_cb(s32 loc, s32 size, s32 vol_l, s32 vol_r, s32 pitch, s32 flags,
                                      s32 voice, s32 channel, s32 id, s32 cb, u64 cb_data) {
    s32 buf[7];

    buf[0] = loc;
    buf[1] = size;
    buf[2] = (pitch << 16) | (vol_l & 0xFFFF);
    buf[3] = (flags << 16) | (vol_r & 0xFFFF);
    buf[4] = voice;
    buf[5] = channel;
    buf[6] = pitch;
    func_0012E6E0(0x2C, 0x1C, buf, voice, (u64) ((s64) ((s32) id) << 0x20) >> 0x20);
}
#endif /* NON_MATCHING */
