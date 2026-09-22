#include "types.h"

extern u64 D_00152078[];

void PackDmaTag(u64 arg0, u64 arg1, u64 arg2) {
    register u64 value __asm__("a1") = arg1 << 8;

    value = arg0 | value;
    value = value | (arg2 << 16);
    value = value | (0x8000ULL << 16);
    D_00152078[0] = value;
}
