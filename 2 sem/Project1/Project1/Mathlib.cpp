#include "stdafx.h"
#include <cmath>
#include "MathLib.h"
#include <stdexcept> 

MATHLIB_API bool Math::IsPrimeNumber(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
