#include "cpperrors.h"

// uncomment line below to explode
//#define FUNCTION_NOT_DEFINED_ERROR

#ifdef FUNCTION_NOT_DEFINED_ERROR
#define __PREPROCESSOR_H__
#endif
#include "preprocessor.h"

int functionNotDefinedError(int a, int b)
{
	int ret = a * b;
	ret += functionNotDefined(a, ret);
	return ret;
}

int functionNotDefined(int a, int b)
{
	return a + b;
}
