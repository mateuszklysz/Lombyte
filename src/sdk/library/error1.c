/*
STATE: C_EXACT
SYMBOL: _Error1
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern int FormatErrorMessage(char *buffer, const char *format, ...)
    __asm__("sprintf");
extern void ReportError(void *error_state, char *message) __asm__("_Error");

void ErrorWithMessage(void *error_state, const char *format)
    __asm__("_Error1");

void ErrorWithMessage(void *error_state, const char *format)
{
    char message[0x100];
    FormatErrorMessage(message, format);
    ReportError(error_state, message);
}
