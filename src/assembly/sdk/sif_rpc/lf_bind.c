/*
STATE: C_NON_MATCHING
SYMBOL: _lf_bind
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _lf_bind; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/lf_bind/_lf_bind.s", _lf_bind);
#else
#include "rnc/assembly_sdk_sif_rpc_lf_bind_types.h"
#include "types.h"




extern s32 D_0012FCB0;
extern struct M2c_D_00158200 D_00158200;
extern struct M2c_D_00158400 D_00158400;
extern s32 D_00158428;
extern u8 D_FFFFF[];
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
s32 _lf_bind(void) {
    s32 *var_2_52;
    if (D_0012FCB0 >= 0) {
        goto block_13;
    }
loop_2:
    if (sceSifBindRpc(&D_00158400, 0x80000006, 0) < 0) {
        goto block_4;
    }
    goto block_6;
block_4:
    return -1;
block_6:
    if (D_00158400.unk24 == 0) {
        goto block_10;
    }
    D_0012FCB0 = 0;
    if (sceSifCallRpc(&D_00158400, 0xFF, 0, 0, 0, &D_00158200, 4, 0, 0) >= 0) {
        goto block_9;
    }
    return 0xFFFEFFFF;
block_9:
    D_00158428 = (s32 *) D_00158200.unk0;
    goto block_13;
block_10:
    var_2_52 = D_FFFFF;
loop_11:
    if (var_2_52 != (void *)-1) {
        goto loop_11;
    }
    goto loop_2;
block_13:
    return 0;
}
#endif /* NON_MATCHING */
