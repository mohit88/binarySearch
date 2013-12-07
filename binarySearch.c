#include "binarySearch.h"

void* binarySearch(const void *key, const void *base, size_t cntObject, size_t sizeObject, CompareFunc* compare){
	int start = 0,
	end = cntObject-1,
	middle = (end+(end%2)/2),
	relation;
	
	if (3 > cntObject){
		if(0 == compare(key,base)) return base;
		if(0 == compare(key,base+sizeObject)) return base+sizeObject;
		return NULL;
	}
	relation = compare(key,base+(middle*sizeObject));
	if(0 == relation) return base+(middle*sizeObject);
	if(0 < relation)
		return binarySearch(key,base+(middle+1*sizeObject),cntObject-(middle+1),sizeObject,compare);	
	if(0 > relation)
		return binarySearch(key,base,middle,sizeObject,compare);
	return NULL;
}
