#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/sub_001ebb00/sub_001ebb00.s", sub_001ebb00);
#else
#include "types.h"

/* Mid-function chunk of FUN_001eb798 (transition_do_transition).
 * Retail range 0x001EBB00..0x001EBBF7: no prologue, no epilogue.  The
 * prologue is in assembly/textbin/gameplay/state/transition_do_transition
 * (0x001EB798) and the epilogue in assembly/textbin/sub_001ebc08 (0x001EBC08).
 * $16/$19/$20/$21/$23/$30 are live across the chunk, so this body is only
 * reproducible as part of the whole function. */

extern s32 D_0015F604;
extern u8 D_0016034C[];
extern s32 D_0015ED80;
extern f32 D_0015F43C;
extern s32 D_0015EF50;
extern s32 D_0015EF54;
extern s32 D_0015EF58;
extern s32 D_0015EE78;
extern s32 D_0015F5B0;
extern s32 *D_0015F938;

void transition_default_draw();
s32 func_001F96F8(s32 arg0);
void func_001E9488(s32 arg0);
void parse_space_scene_chunk(s32 index);
void vu1_init_chain(void);
void fade_to_black(s32 n);
void func_001204B8(void);
void sceGsResetGraph(s32 a0, s32 a1, s32 a2, s32 a3);
void set_pal_mode(void);

void sub_001ebb00(s32 arg0, s32 arg1, s32 *arg2) __asm__("sub_001ebb00");

void sub_001ebb00(s32 arg0, s32 arg1, s32 *arg2) {
    s32 v0;
    s32 t0;
    s32 t1;
    s32 s0;
    f32 f;

    transition_default_draw();
    v0 = D_0015F604;
    if (v0 != 0) {
        goto skip;
    }
    t1 = 0;
    func_001F96F8(0x5DC);
    t1++;
    if (t1 < v0) {
        goto tail;
    }
    func_001E9488(arg0);
    t1 = 0;
    t0 = arg1 < arg0 + 1;
    f = f;
    D_0015F43C = f;
    v0 = arg0 + 4;
    if (t0) {
        v0 = arg0 + 1;
    }
    arg2[13] = 0;
    arg0 = v0 >> 2;
    arg2[15] = 0;
    v0 = arg0 << 2;
    parse_space_scene_chunk(0);
    arg0 = arg0 + 1 - v0;
    D_0015EF50 = 0;
    D_0015EF54 = 0;
    vu1_init_chain();
    D_0015EF58 = 0;
    return;
skip:
    v0 = D_0016034C[0];
tail:
    t0 = D_0015ED80;
    if (v0 == t0) {
        return;
    }
    D_0015ED80 = t0 < 1;
    fade_to_black(4);
    func_001204B8();
    sceGsResetGraph(0, 1, D_0015ED80 ? 3 : 2, 0);
    s0 = D_0015EE78;
    set_pal_mode();
    D_0015F43C = f;
    D_0015EE78 = s0;
}
#endif /* NON_MATCHING */
