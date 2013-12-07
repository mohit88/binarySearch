#include <stdlib.h>

typedef int CompareFunc(const void*,const void*);

void* binarySearch(const void* key,const void* base,
					size_t cntObjects,size_t sizeObject,
					CompareFunc* compare);
