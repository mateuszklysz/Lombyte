#ifndef RNC_ASSEMBLY_TEXTBIN_FUN_00209370_TYPES_H
#define RNC_ASSEMBLY_TEXTBIN_FUN_00209370_TYPES_H

#include "types.h"

typedef struct {
    int status;
    void *func;
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    int attr;
    int option;
} ThreadParam;

#endif /* RNC_ASSEMBLY_TEXTBIN_FUN_00209370_TYPES_H */
