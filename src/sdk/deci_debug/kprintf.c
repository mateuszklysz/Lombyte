/*
STATE: C_EXACT
SYMBOL: kprintf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef char *va_list;

extern int _printf(const char *format, va_list arguments);

int kprintf(const char *format, ...) {
    va_list arguments = __builtin_next_arg(format) - 0x38;

    return _printf(format, arguments);
}
