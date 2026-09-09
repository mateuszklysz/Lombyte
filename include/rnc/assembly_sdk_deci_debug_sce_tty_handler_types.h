#ifndef RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_HANDLER_TYPES_H
#define RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_HANDLER_TYPES_H

#include "types.h"

typedef struct Rep {
    size_t len;
    size_t res;
    size_t ref;
    int selfish;
} Rep;

typedef struct String {
    char *dat;
} String;

#endif /* RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_HANDLER_TYPES_H */
