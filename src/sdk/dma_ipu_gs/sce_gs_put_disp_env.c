/*
STATE: C_EXACT
SYMBOL: sceGsPutDispEnv
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: Himuro -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct DispEnv { u64 f0; u64 f8; u64 f10; u64 f18; u64 f20; };
extern s32 GetCoreDataTable();
void sceGsPutDispEnv(struct DispEnv *env) {
    s32 *core;

    core = (s32 *)GetCoreDataTable();
    if (*(s16 *)((u8 *)core + 6) == 1) {
        *(volatile u64 *)0x12000000 = env->f0;
        *(volatile u64 *)0x12000070 = env->f10;
        *(volatile u64 *)0x12000080 = env->f18;
        *(volatile u64 *)0x120000C0 = env->f20;
    } else {
        *(volatile u64 *)0x12000000 = env->f0;
        *(volatile u64 *)0x12000020 = env->f8;
        *(volatile u64 *)0x12000090 = env->f10;
        *(volatile u64 *)0x120000A0 = env->f18;
        *(volatile u64 *)0x120000E0 = env->f20;
    }
}
