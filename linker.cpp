#include "cpperrors.h"
#include "linker.h"
#include "compiler.h"

void linkerErrors()
{
	scopeError();
}


int linkerFunction(int a, int b)
{
	int ret = a + b;
	ret *= compilerFuncionDoesNotExists(ret);
	return ret;
}


int cannotConvertError(const char* message)
{
	int ret = message[0];
	return ret;
}

int scopeError()
{
	ScopeError se;
	return se.protectedFunction();
}

#ifndef UNRESOLVED_EXTERNAL_ERROR
int compilerFuncionDoesNotExists(int a)
{
	return a * 2;
}
#endif
