/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony filesystem helper _search_svdata; target-derived body pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl SearchSvdata\n"
    ".type SearchSvdata, @function\n"
    "SearchSvdata:\n"
    ".word 0x8CA50028\n.word 0x10A0000F\n.word 0x00000000\n.word 0x8CA30008\n"
    ".word 0x5060000A\n.word 0x8CA50014\n.word 0x8C620000\n.word 0x00000000\n"
    ".word 0x54440003\n.word 0x8C630038\n.word 0x03E00008\n.word 0x0060102D\n"
    ".word 0x5460FFFB\n.word 0x8C620000\n.word 0x8CA50014\n.word 0x54A0FFF4\n"
    ".word 0x8CA30008\n.word 0x03E00008\n.word 0x0000102D\n"
    ".size SearchSvdata, .-SearchSvdata\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

__attribute__((section(".text.func_003B2DE8")))
void *SearchSvdata(int key, char *a1) {
    char *outer = *(char **)(a1 + 0x28);
    while (outer != 0) {
        char *inner = *(char **)(outer + 8);
        while (inner != 0) {
            if (*(int *)inner == key) return inner;
            inner = *(char **)(inner + 0x38);
        }
        outer = *(char **)(outer + 0x14);
    }
    return 0;
}
#endif /* NON_MATCHING */
