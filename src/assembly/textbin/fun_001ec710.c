#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec710/FUN_001ec710.s", FUN_001ec710);
#else
#include "types.h"
struct M2c_D_0013F350 {
    u8 pad_0[0x2080];
    s32 unk2080;
};

struct M2c_D_001871B0 {
    u8 pad_0[0x90];
    s32 unk90;
    u8 pad_94[0xC];
    s64 unkA0;
    u8 pad_A8[0x8];
    s64 unkB0;
    u8 pad_B8[0x18];
    s32 unkD0;
};

extern struct M2c_D_0013F350 D_0013F350;
extern struct M2c_D_001871B0 D_001871B0;
extern s32 func_001EC530();
extern s32 func_001F9BF8();
void FUN_001ec710(void) {    s32 sp0;
u8 sp_slot[0x90];    s64 sp10;
    s64 sp20;

    func_001F9BF8(sp_slot, D_0013F350.unk2080 + 0xC0, 0x3F800000);
    func_001F9BF8(&sp10, D_0013F350.unk2080 + 0xD0, 0x3F800000);
    func_001F9BF8(&sp20, D_0013F350.unk2080 + 0xE0, 0x3F800000);
    D_001871B0.unk90 = sp0;
    D_001871B0.unkA0 = (s64) sp20;
    func_001EC530(((u8 *)&D_001871B0) + 0x70, ((u8 *)&D_001871B0) + 0xC0, ((u8 *)&D_0013F350) + 0x80, sp_slot, &sp10, &sp20);
    D_001871B0.unkB0 = (s64) D_001871B0.unkD0;
}

extern void func_001EC710(void) __attribute__((alias("FUN_001ec710")));
#endif /* NON_MATCHING */
