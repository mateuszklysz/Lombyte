#ifndef RNC_ASSEMBLY_SDK_LIBRARY_MALLOC_EXTEND_TOP_TYPES_H
#define RNC_ASSEMBLY_SDK_LIBRARY_MALLOC_EXTEND_TOP_TYPES_H

#include "types.h"

struct malloc_chunk {
    INTERNAL_SIZE_T prev_size;
    INTERNAL_SIZE_T size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};

#endif /* RNC_ASSEMBLY_SDK_LIBRARY_MALLOC_EXTEND_TOP_TYPES_H */
