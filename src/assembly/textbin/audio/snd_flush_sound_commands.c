#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/snd_flush_sound_commands/FUN_0012dc80.s", FUN_0012dc80);
#else
#include "types.h"

typedef void (*SndCallback)(s32, u64);

struct SndCommand {
    SndCallback fn;
    s32 pad4;
    u64 arg;
};

extern s32 D_0015EC80;
extern void (*D_0015EC90)(s32);
extern s32 D_0015EC94;
extern s32 D_0015EC98;
extern s32 D_0015EC9C;
extern s32 *D_0015ECA0[2];
extern struct SndCommand *D_0015ECB0[2];
extern s32 *D_0015ECB8[2];
extern s32 D_0015ECC0;
extern s32 D_0015ECC4;
extern s32 D_0015ECC8;
extern SndCallback D_0015ECD0;
extern u64 D_0015ECD8[];
extern SndCallback D_0015ECE0;
extern u64 D_0015ECE8;
extern s32 D_0015ED00[];
extern s32 D_00133104[];
extern s32 func_0012DE70(void);
extern void func_0012E9D8(void);
extern void func_0012EE08(s32);
extern void FlushCache(s32);

s32 snd_flush_sound_commands(void) __asm__("FUN_0012dc80");

s32 snd_flush_sound_commands(void) {
    s32 i;
    s32 idx;
    SndCallback fn;
    u64 arg;

    if (D_0015EC80 != 0 && func_0012DE70() != 0) {
        if (D_0015EC9C != 0) {
            if (D_0015ECE0 != 0) {
                D_0015ECE0(D_00133104[0], D_0015ECE8);
            }
            D_0015ECE0 = 0;
            D_0015EC9C = 0;
        } else {
            idx = D_0015ECC0 != 1;
            for (i = 0; i < *D_0015ECA0[idx]; i++) {
                struct SndCommand *c = &D_0015ECB0[idx][i];
                if (c->fn != 0) {
                    c->fn(D_0015ECB8[idx][i + 1], c->arg);
                }
            }
        }
    }
    if (D_0015ECC8 != 0) {
        FlushCache(0);
        if (D_0015ED00[0] != -1) {
            if (D_0015ECD0 != 0) {
                arg = D_0015ECD8[0];
                fn = D_0015ECD0;
                D_0015ECD0 = 0;
                D_0015ECD8[0] = 0;
                fn(D_0015ED00[0], arg);
            }
            D_0015ED00[0] = 0;
            D_0015ECC8 = 0;
        }
    }
    if (D_0015EC80 == 0) {
        if (*D_0015ECA0[D_0015ECC0] != 0 && D_0015ECC4 == 0) {
            func_0012E9D8();
        }
    }
    if (D_0015EC94 != 0) {
        func_0012EE08(1);
        if (D_0015EC98 != 0) {
            D_0015EC94 = 0;
            D_0015EC98 = 0;
            if (D_0015EC90 != 0) {
                D_0015EC90(1);
            }
        }
    }
    return D_0015EC80 != 0 || D_0015ECC8 != 0;
}
#endif /* NON_MATCHING */
