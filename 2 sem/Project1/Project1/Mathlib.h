#pragma once

#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport) 
#else
#define MATHLIB_API __declspec(dllimport) 
#endif

namespace Math
{
	MATHLIB_API bool IsPrimeNumber(int);
}