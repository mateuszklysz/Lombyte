#include "types.h"
typedef struct {
    u8 pad0[0x12C];
    s32 mbWidth;
    s32 mbHeight;
    u8 pad134[0x40];
    s32 pictStruct;
    u8 pad178[0x698];
    s32 unk810;
    s32 unk814;
} MpegDec;

extern char D_001537E0[];
extern s32 _slice0(MpegDec *d, s32 mbs);
extern void _waitIpuIdle(MpegDec *d);
extern s32 _waitBdecOut(MpegDec *d);
extern void _doMC(MpegDec *d, s32 flag);
extern void _Error(MpegDec *d, char *msg);

s32 _pictureData0(MpegDec *d) {
    s32 ret;
    s32 mbs;

    d->unk810 = 0;
    d->unk814 = 0;
    mbs = d->mbWidth * d->mbHeight;
    if (d->pictStruct != 3) {
        mbs >>= 1;
    }
    do {
        ret = _slice0(d, mbs);
    } while (ret == 1 || ret == 3);
    _waitIpuIdle(d);
    if (_waitBdecOut(d) == 0) {
        ret = 2;
    }
    while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
    }
    if (ret == 0) {
        _doMC(d, d->unk810 == 0);
    }
    if (ret == 1 || ret == 2) {
        _Error(d, D_001537E0);
    }
    return ret == 0;
}
