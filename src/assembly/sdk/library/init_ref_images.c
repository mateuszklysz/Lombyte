#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _initRefImages; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/init_ref_images/_initRefImages.s", _initRefImages);
#else
#include "types.h"
#define UNCACHED(p) (((u32)(p) & 0x0FFFFFFF) | 0x20000000)

void _initRefImages(u32 *r0, u32 *r1, u32 *r2, u32 *r3, u32 *r4, u32 *r5, u32 *r6, u32 *r7, u32 *r8,
                    u8 *y, u8 *cb, u8 *cr, s32 w, s32 h) {
    *r0 = UNCACHED(y);
    *r1 = UNCACHED(cb);
    *r2 = UNCACHED(cr);
    *r3 = UNCACHED(y);
    *r4 = UNCACHED(cb);
    *r5 = UNCACHED(cr);
    *r6 = UNCACHED(y + w * h / 512 * 384);
    *r7 = UNCACHED(cb + w * h / 512 * 384);
    *r8 = UNCACHED(cr + w * h / 512 * 384);
}
#endif /* NON_MATCHING */
