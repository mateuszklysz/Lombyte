#include "types.h"

s32 CountTrailingZeroBits(u32 *value) __asm__("_lo0bits");

s32 CountTrailingZeroBits(u32 *value) {
    u32 word = *value;
    s32 bit_count;

    if (word & 7) {
        if (word & 1) {
            return 0;
        }
        if (word & 2) {
            word >>= 1;
            *value = word;
            return 1;
        }
        word >>= 2;
        *value = word;
        return 2;
    }

    if (!(word & 0xffff)) {
        bit_count = 16;
        word >>= 16;
    } else {
        bit_count = 0;
    }
    if (!(word & 0xff)) {
        bit_count += 8;
        word >>= 8;
    }
    if (!(word & 0xf)) {
        bit_count += 4;
        word >>= 4;
    }
    if (!(word & 3)) {
        bit_count += 2;
        word >>= 2;
    }
    if (!(word & 1)) {
        word >>= 1;
        bit_count += 1;
        if (!word) {
            return 32;
        }
    }
    *value = word;
    return bit_count;
}
