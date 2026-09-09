#include "types.h"

s32 CountLeadingZeroBits(s32 word) __asm__("_hi0bits");

s32 CountLeadingZeroBits(s32 word) {
    s32 bit_count;

    if (!(word & 0xffff0000)) {
        bit_count = 16;
        word <<= 16;
    } else {
        bit_count = 0;
    }
    if (!(word & 0xff000000)) {
        bit_count += 8;
        word <<= 8;
    }
    if (!(word & 0xf0000000)) {
        bit_count += 4;
        word <<= 4;
    }
    if (!(word & 0xc0000000)) {
        bit_count += 2;
        word <<= 2;
    }
    if (word >= 0) {
        bit_count += 1;
        if (!(word & 0x40000000)) {
            return 32;
        }
    }
    return bit_count;
}
