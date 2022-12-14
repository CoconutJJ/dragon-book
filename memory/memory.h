#ifndef memory_h
#define memory_h
#include <stdio.h>
#include <stdlib.h>

#define DYNAMIC_ARRAY_RESIZE(array, elemtype, size, count)                     \
        dynamic_array_resize (                                                 \
                array, sizeof(elemtype), &size, count)

void *compiler_malloc (size_t sz);
void *compiler_realloc (void *ptr, size_t sz);
void *dynamic_array_resize (void *array_ptr,
                            size_t size,
                            size_t *nitems,
                            size_t count);

#endif