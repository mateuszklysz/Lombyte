/* STATE: C_EXACT
 * SYMBOL: exit
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2 (-O2 -g2 -gstabs)
 * DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
 * BLOCKER: none
 */
/*
AUTO-DIAGNOSIS
symbol: exit
unit: assembly/sdk/library/exit
code_percent: 100.0000
function_percent: 100.0000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "176", "object": "exit.c.o", "text_size": "176"}
current: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "176", "object": "candidate.o", "text_size": "176"}
diff: {"code_gap_percent": 0.0, "current_instruction_mismatch_count": 0, "data_gap_percent": 0.0, "function_gap_percent": 0.0, "instruction_mismatches": [], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 0}
*/

/* exit x1: newlib exit.c with the game reent and JumpToRfuStatus as _exit. */
#include "types.h"

struct _atexit {
    struct _atexit *_next;
    int _ind;
    void (*_fns[32])(void);
};

typedef struct ExitReent {
    u8 reserved0[0x38];
    int __sdidinit;
    void (*__cleanup)(struct ExitReent *);
    u8 reserved1[0x148 - 0x40];
    struct _atexit *_atexit;
} ExitReent;

extern ExitReent *D_0012F76C __attribute__((section(".data")));
extern void JumpToRfuStatus(int code);

void exit(int code) {
    struct _atexit *p;
    int n;

    for (p = D_0012F76C->_atexit; p != 0; p = p->_next)
        for (n = p->_ind; --n >= 0;)
            (*p->_fns[n])();

    if (D_0012F76C->__cleanup != 0)
        (*D_0012F76C->__cleanup)(D_0012F76C);

    JumpToRfuStatus(code);
}
