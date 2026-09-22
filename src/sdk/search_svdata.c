#include "types.h"

u8 *SearchSvdata(u32 key, u8 *ctx) {
    u8 *node = *(u8 **)(ctx + 0x28);
    u8 *entry;

    if (node != 0) {
        do {
            entry = *(u8 **)(node + 8);
            while (entry != 0) {
                if (*(u32 *)entry == key) {
                    return entry;
                }
                entry = *(u8 **)(entry + 0x38);
            }
            node = *(u8 **)(node + 0x14);
        } while (node != 0);
    }
    return 0;
}
