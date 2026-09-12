/*
STATE: C_NON_MATCHING
SYMBOL: sceTtyInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceTtyInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/deci_debug/sce_tty_init/sceTtyInit.s", sceTtyInit);
#else
#include "types.h"
struct M2c_D_00154A50 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

extern struct M2c_D_00154A50 D_00154A50;
extern u8 D_00154A80[];
extern u8 D_00154BC0[];
extern s32 FlushCache();
extern s32 func_00119568();
extern s32 sceDeci2Open();
extern void sceTtyHandler();
s32 sceTtyInit(void) {
    s32 temp_2_28;

    FlushCache(0);
    D_00154A50.unk0 = sceDeci2Open(0x210, &D_00154A50, &sceTtyHandler);
    if (D_00154A50.unk0 < 0) {
        return 0;
    }
    D_00154A50.unk8 = 0;
    temp_2_28 = (s32) D_00154A80 | 0x20000000;
    D_00154A50.unkC = 0;
    D_00154A50.unk4 = 0;
    D_00154A50.unk14 = (s32) ((s32) D_00154BC0 | 0x20000000);
    D_00154A50.unk10 = temp_2_28;
    *(s32 *)((u8 *)temp_2_28 + 0x4) = 0x210;
    *(s32 *)((u8 *)temp_2_28 + 0x6) = 0x45;
    *(s32 *)((u8 *)temp_2_28 + 0x7) = 0x48;
    *(s32 *)((u8 *)temp_2_28 + 0x8) = 0;
    *(s32 *)((u8 *)temp_2_28 + 0x2) = 0;
    D_00154A50.unk18 = func_00119568(0x100, 0x45, 0x210);
    return 1;
}
#endif /* NON_MATCHING */
