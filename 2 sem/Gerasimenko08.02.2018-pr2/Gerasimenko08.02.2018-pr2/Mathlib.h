#pragma once

#ifdef Gerasimenko08022018pr2_EXPORTS
#define MATHLIB_API __declspec(dllexport) 
#else
#define MATHLIB_API __declspec(dllimport) 
#endif

namespace Math
{
	MATHLIB_API bool IsPolindrome(long long);
}
