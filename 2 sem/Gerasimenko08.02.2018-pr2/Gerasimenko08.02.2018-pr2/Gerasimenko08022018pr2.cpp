
#include "stdafx.h"
#include <cmath>
#include "MathLib.h"
#include <stdexcept> 

MATHLIB_API bool Math::IsPolindrome(long long n)
{
	long long num = n, rev = 0;
	int digit;
	while (num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}
	if (n == rev)
		return true;
	else
		return false;
}


