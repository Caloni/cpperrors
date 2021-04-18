#ifndef __LINKER_H__
#define __LINKER_H__

void linkerErrors();
int linkerFunction(int a, int b);
int cannotConvertError(const char* message);
int scopeError();

#ifndef DEFAULT_PROTECTION 
#define DEFAULT_PROTECTION public
#endif

class ScopeError
{
DEFAULT_PROTECTION:
	int protectedFunction();
};

#endif // __LINKER_H__
