#include "cpperrors.h"
#include "compiler.h"
#include "linker.h"


// uncomment line below to explode
//#define CANNOT_CONVERT_ERROR

// uncomment line below to explode
//#define MISSING_PARENTHESIS_ERROR


int compilerFuncionDoesNotExistsError(int a)
{
	int ret = a * 2;
	return ret;
}


int mySum(int x, int y)
{
	return x + y;
}

int myAbs(int x)
{
	return +x;
}


int main()
{
	int ret = 0;
	int x = 13;
	int y = 31;

#ifdef CANNOT_CONVERT_ERROR
	ret = cannotConvertError(3);
#endif

#ifdef MISSING_PARENTHESIS_ERROR
	while( (x < y) && mySum(y, myAbs(x) != 2 )
	{
		;
	}
#endif

	linkerErrors();

	return ret;
}
