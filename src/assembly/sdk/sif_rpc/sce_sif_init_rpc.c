/*
STATE: C_NON_MATCHING
SYMBOL: sceSifInitRpc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifInitRpc; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_init_rpc/sceSifInitRpc.s", sceSifInitRpc);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_init_rpc_types.h"
#include "types.h"




extern u8 D_0011B138[];
extern u32 D_0012FC08[];
extern u8 D_00155000[];
extern u8 D_00155800[];
extern u8 D_00156000[];
extern struct M2c_D_00156800 D_00156800;
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 func_0011A458();
extern s32 sceSifAddCmdHandler();
extern s32 sceSifGetReg();
extern s32 sceSifInitCmd();
extern s32 sceSifSendCmd();
extern void _request_bind();
extern void _request_end();
extern void _request_rdata();
void sceSifInitRpc(void) {
    s32 temp_7_37;
    struct M2c_temp_5_80 *temp_5_80;

    DIntr();
    if (D_0012FC08[0] == 0) {
        goto block_3;
    }
    EnableInterrupts();
    return;
block_3:
    D_0012FC08[0] = 1;
    EnableInterrupts();
    sceSifInitCmd();
    DIntr();
    temp_7_37 = (s32) D_00156000 | 0x20000000;
    D_00156800.unk20 = 0x20;
    D_00156800.unk0 = 1;
    D_00156800.unk14 = (s32) ((s32) D_00155800 | 0x20000000);
    D_00156800.unk4 = (s32) ((s32) D_00155000 | 0x20000000);
    D_00156800.unk1C = temp_7_37;
    D_00156800.unk8 = 0x20;
    D_00156800.unkC = 0;
    D_00156800.unk10 = 0;
    D_00156800.unk18 = 0x20;
    D_00156800.unk24 = 0;
    sceSifAddCmdHandler(0x80000008, &_request_end, &D_00156800, temp_7_37, &D_00156800);
    sceSifAddCmdHandler(0x80000009, &_request_bind, &D_00156800);
    sceSifAddCmdHandler(0x8000000A, D_0011B138, &D_00156800);
    sceSifAddCmdHandler(0x8000000C, &_request_rdata, &D_00156800);
    EnableInterrupts();
    if (sceSifGetReg(0x80000002) != 0) {
        goto block_8;
    }
    temp_5_80 = D_00155000 + 0x40;
    temp_5_80->unkC = 1;
    sceSifSendCmd(0x80000002, temp_5_80, 0x10, 0, 0, 0);
loop_5:
    if (func_0011A458(0) == 0) {
        goto loop_5;
    }
    sceSifSetReg(0x80000002, 1);
    return;
block_8:
    return;
}
#endif /* NON_MATCHING */
