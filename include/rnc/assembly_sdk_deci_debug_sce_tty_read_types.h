#ifndef RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_READ_TYPES_H
#define RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_READ_TYPES_H

#include "types.h"

typedef struct {
	char	pad[0x24];
	int	server;		/* 0x24 */
} Cd;

#endif /* RNC_ASSEMBLY_SDK_DECI_DEBUG_SCE_TTY_READ_TYPES_H */
