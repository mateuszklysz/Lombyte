/*
STATE: C_EXACT
SYMBOL: FUN_0012ed58
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: p37-game-no-strict-aliasing -O2 -g2 -gstabs -mastra-r5900-extern-buffer
DECISION: promoted
*/

#include "types.h"
extern s32 D_0015EC8C;
extern s32 D_0015EC94;
extern s32 D_0015EC98;
extern volatile s32 D_00137B00[];
extern s32 sceCdRead();
extern s32 func_0012EE08();
extern s32 func_0012E6E0();
/* ROLE: snd_StreamSafeCdRead: stream-safe CD read entry; if the CD subsystem is
   not up it forwards to sceCdRead, otherwise it queues the read request and
   reports the new state. Name recovered from config/us/recovered_names.json. */
s32 FUN_0012ed58(s32 arg0, s32 arg1, s32 arg2) {
    s32 buf[3];

    if (D_0015EC8C == 0) {
        return sceCdRead(arg0, arg1, arg2);
    }
    if (func_0012EE08(1) != 1) {
        buf[0] = arg0;
        D_00137B00[0] = 1;
        D_00137B00[4] = 0;
        buf[1] = arg1;
        buf[2] = arg2;
        func_0012E6E0(0x38, 0xC, buf, 0, 0);
        D_0015EC94 = 1;
        D_0015EC98 = 0;
        return 1;
    }
    return 0;
}

extern s32 func_0012ED58(s32 arg0, s32 arg1, s32 arg2) __attribute__((alias("FUN_0012ed58")));
extern s32 snd_StreamSafeCdRead(s32 arg0, s32 arg1, s32 arg2) __attribute__((alias("FUN_0012ed58")));
