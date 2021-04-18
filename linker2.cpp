#include "cpperrors.h"

// uncomment line below to explode
//#define SCOPE_ERROR

#ifdef SCOPE_ERROR
#undef DEFAULT_PROTECTION
#define DEFAULT_PROTECTION protected
#endif
#include "linker.h"


int ScopeError::protectedFunction()
{
	return 10;
}
