/*
STATE: C_EXACT
SYMBOL: checkModelVersion
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: checkModelVersion
unit: assembly/sdk/library/checkModelVersion
code_percent: 100.0000
function_percent: 100.0000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "160", "object": "checkModelVersion.c.o", "text_size": "160"}
current: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "160", "object": "candidate.o", "text_size": "160"}
diff: {"code_gap_percent": 0.0, "current_instruction_mismatch_count": 0, "data_gap_percent": 0.0, "function_gap_percent": 0.0, "instruction_mismatches": [], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 0}
*/

/* checkModelVersion c2: read the model-version string and validate its range. */

#include "types.h"

extern s32 sceOpen(const char *path, s32 flags);
extern s32 sceRead(s32 fd, void *buf, s32 size);
extern s32 sceClose(s32 fd);
extern s32 CheckStateRange(const char *str);
extern u8 D_00153030[];

s32 checkModelVersion(void) {
    s32 fd;
    u32 i;
    s8 buf[0x100];

    fd = sceOpen((const char *)D_00153030, 1);
    if (fd < 0)
        return -1;

    for (i = 0; i < 0x100; i++) {
        sceRead(fd, &buf[i], 1);
        if (buf[i] == 0)
            break;
    }

    sceClose(fd);
    return 0x1315670 < CheckStateRange((const char *)&buf[i - 9]);
}
