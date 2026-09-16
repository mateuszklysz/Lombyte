/*
STATE: C_EXACT
SYMBOL: sceDbcReceiveData
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc-2.9-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct DbCState { s32 unk0; s32 unk4; s32 unk8; u8 payload[0x80]; s32 unk8C; };
extern u8 D_001536A0[]; extern u8 D_0015B008[]; extern struct DbCState D_0015B080;
extern s32 func_00124A20(); extern s32 sceSifCallRpc();
s32 sceDbcReceiveData(s32 arg0, s32 arg1, s32 *arg2, u8 *arg3) {
    register struct DbCState *state __asm__("s0") = &D_0015B080;
    register s32 *out __asm__("s1") = arg2;
    register u8 *dst __asm__("s2") = arg3;
    s32 i;
    s32 v;
    state->unk0 = arg0; state->unk4 = arg1; state->unk8 = *out;
    if (sceSifCallRpc(D_0015B008, 0x8000091A, 0, state, 0x400, state, 0x400, 0, 0) < 0) {
        func_00124A20(D_001536A0); return 0;
    }
    if (state->unk8C < 0) { return state->unk8C; }
    *out = state->unk8;
    i = 0;
    if (state->unk8 <= 0) { goto ret; }
    do { dst[i] = state->payload[i]; i++; } while (i < state->unk8);
    return state->unk8C;
ret:
    v = state->unk8C;
    __asm__ volatile ("" : : "r"(v));
    return v;
}
