#include "types.h"
typedef struct {
    u8 pad0[0x174];
    s32 pictStruct;
    s32 topFieldFirst;
} MpegDec;

void _dualPrimeVector(MpegDec *d, s32 DMV[][2], s32 *dmvector, s32 mvx, s32 mvy) {
    if (d->pictStruct == 3) {
        if (d->topFieldFirst) {
            DMV[0][0] = ((mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[0][1] = ((mvy + (mvy > 0)) >> 1) + dmvector[1] - 1;
            DMV[1][0] = ((3 * mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[1][1] = ((3 * mvy + (mvy > 0)) >> 1) + dmvector[1] + 1;
        } else {
            DMV[0][0] = ((3 * mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[0][1] = ((3 * mvy + (mvy > 0)) >> 1) + dmvector[1] - 1;
            DMV[1][0] = ((mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[1][1] = ((mvy + (mvy > 0)) >> 1) + dmvector[1] + 1;
        }
    } else {
        DMV[0][0] = ((mvx + (mvx > 0)) >> 1) + dmvector[0];
        DMV[0][1] = ((mvy + (mvy > 0)) >> 1) + dmvector[1];
        if (d->pictStruct == 1) {
            DMV[0][1]--;
        } else {
            DMV[0][1]++;
        }
    }
}
