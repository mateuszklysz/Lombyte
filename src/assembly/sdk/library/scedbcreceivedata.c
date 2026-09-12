/*
STATE: C_NON_MATCHING
SYMBOL: sceDbcReceiveData
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDbcReceiveData; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scedbcreceivedata/sceDbcReceiveData.s", sceDbcReceiveData);
#else
#include "rnc/assembly_sdk_library_scedbcreceivedata_types.h"
#include "types.h"


extern u8 D_001536A0[];
extern u8 D_0015B008[];
extern struct M2c_D_0015B080 D_0015B080;
extern s32 func_00124A20();
extern s32 sceSifCallRpc();
s32 sceDbcReceiveData(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 var_2_29;
    s32 var_5_42;
    u8 *temp_4_47;
    u8 *temp_6_43;
    u8 *var_2_44;

    D_0015B080.unk0 = arg0;
    D_0015B080.unk4 = arg1;
    D_0015B080.unk8 = (s32) *arg2;
    if (sceSifCallRpc(D_0015B008, 0x8000091A, 0, &D_0015B080, 0x400, &D_0015B080, 0x400, 0, 0) >= 0) {
        var_2_29 = D_0015B080.unk8C;
        if (var_2_29 >= 0) {
            *arg2 = D_0015B080.unk8;
            var_5_42 = 0;
            if (D_0015B080.unk8 > 0) {
                temp_6_43 = ((u8 *)&D_0015B080 + 0xC);
                var_2_44 = temp_6_43;
                do {
                    temp_4_47 = arg3 + var_5_42;
                    var_5_42 += 1;
                    *temp_4_47 = *var_2_44;
                    var_2_44 = temp_6_43 + var_5_42;
                } while (var_5_42 < D_0015B080.unk8);
            }
            var_2_29 = D_0015B080.unk8C;
        }
    } else {
        func_00124A20(D_001536A0);
        var_2_29 = 0;
    }
    return var_2_29;
}
#endif /* NON_MATCHING */
