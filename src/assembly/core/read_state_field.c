/*
STATE: C_NON_MATCHING
SYMBOL: ReadStateField
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/core/read_state_field/ReadStateField.s", ReadStateField);
#else
#include "rnc/assembly_core_read_state_field_types.h"
#include "types.h"




s32 ReadStateField(struct M2c_arg0 *arg0) {
    if (arg0 == NULL) {
        goto block_2;
    }
    goto block_4;
block_2:
block_3:
    return 0;
block_4:
    if (!(arg0->unk34 & 0x20)) {
        goto block_3;
    }
    return arg0->unk78->unk10;
}
#endif /* NON_MATCHING */
