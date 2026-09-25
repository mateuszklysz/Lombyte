#include "types.h"

void debug_print_stub(char *fmt, ...) __asm__("FUN_00124a20");

void debug_print_stub(char *fmt, ...) {
}

extern void func_00124A20(char *fmt, ...) __attribute__((alias("FUN_00124a20")));
