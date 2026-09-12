/*
STATE: C_NON_MATCHING
SYMBOL: _getPtsDtsFlags
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _getPtsDtsFlags; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_getPtsDtsFlags/_getPtsDtsFlags.s", _getPtsDtsFlags);
#else
#include "rnc/assembly_sdk_library__getPtsDtsFlags_types.h"
#include "types.h"




extern s32 __muldi3();
void _getPtsDtsFlags(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, s64 *arg2, s64 *arg3, s64 *arg4) {
    s64 *sp0;
    s32 temp_22_35;
    s32 temp_23_24;
    s64 temp_16_30;
    s64 temp_17_41;
    s64 temp_18_31;
    s64 temp_2_65;

    sp0 = arg4;
    if (arg0->unk70 != 0) {
        if ((arg1->unk18 < 0) && (temp_23_24 = arg0->unk80, (temp_23_24 >= 0))) {
            temp_16_30 = (s64) (arg0->unk88 << 0x20) >> 0x20;
            temp_18_31 = temp_16_30 & 1;
            temp_22_35 = arg0->unk90;
            temp_17_41 = (s64) (__muldi3(__muldi3(temp_18_31, arg0->unk78 & 1), temp_22_35 & 1) << 0x20) >> 0x20;
            *arg2 = temp_23_24 + (((s64) (__muldi3(arg0->unk78, temp_16_30) << 0x1F) >> 0x20) + temp_17_41);
            if (__muldi3(temp_18_31, arg0->unk78 & 1) != 0) {
                arg0->unk90 = (s32) (temp_22_35 + 1);
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        *arg2 = arg1->unk18;
    }
    if (arg0->unkF8 == 2) {
        temp_2_65 = arg0->unkF0;
        if (temp_2_65 >= 0) {
            do {
                *arg2 = temp_2_65;
            } while(0);
            arg0->unkF8 = 0;
            arg0->unkF0 = -1;
        }
    }
    *arg3 = arg1->unk20;
    *sp0 = ((s64) arg1->unk34 << 8) | arg1->unk2C | (((s64) arg1->unk40 << 5) | ((s64) arg1->unk3C << 6)) | (((s64) arg1->unk38 << 7) | ((s64) arg1->unk30 * 8));
}
#endif /* NON_MATCHING */
