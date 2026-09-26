#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/texture/parse_particle_textures/FUN_002026c8.s", FUN_002026c8);
#else
#include "types.h"
struct ParticleHdr { s32 count; s32 pad4; s32 data_offset; s32 data_size; u32 ptrs[1]; };
struct ParticleTex { s32 tex0; s32 tex1; };
extern s32 D_001600C0;
extern u8 D_001CE180[];
extern u32 D_001CDF80[];
extern struct ParticleTex D_001CD980[];
extern void func_001F9838(void *, void *, s32);
extern s32 func_001F97A0(s32);
void parse_particle_textures(struct ParticleHdr *hdr, s32 base, s32 *src, s32 count) __asm__("FUN_002026c8");

void parse_particle_textures(struct ParticleHdr *hdr, s32 base, s32 *src, s32 count) {
    s32 n;
    s32 offset;
    s32 size;
    s32 i;
    u32 *p;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    p = hdr->ptrs;
    n = hdr->count;
    offset = hdr->data_offset;
    size = hdr->data_size;
    for (i = 0; i < n; i++) {
        if (p[i] == 0) {
            D_001CDF80[i] = (u32)D_001CE180;
        } else {
            D_001CDF80[i] = p[i] - (offset - (u32)D_001CE180);
        }
    }
    func_001F9838(D_001CE180, (u8 *)hdr + offset, size);
    for (D_001600C0 = 0; D_001600C0 < count; D_001600C0++) {
        a = base + *src++;
        b = *src++;
        c = base + *src++;
        d = *src++;
        D_001CD980[D_001600C0].tex0 = (a << 4) + b;
        D_001CD980[D_001600C0].tex1 = (c << 4) + func_001F97A0(d);
    }
}
#endif /* NON_MATCHING */
