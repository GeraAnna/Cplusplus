// MathLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h".
#include <cmath>
#include "..\MathLib\MathLib.h"
#include <stdexcept> 
#include <iostream>

MATHLIB_API void Math::InitArray(int * const a, int n)
	{
		if (n <= 0)
		{
			throw std::out_of_range("Dimension of array must be more zero!");
		}

		if (a == nullptr)
		{
			throw std::invalid_argument("Argument is null!");
		}

		for (int* p = a; p < a + n; p++)
		{
			*p = rand() % 100;
		}
	}


MATHLIB_API	int * Math::AllocateMemory(int n)
	{
		if (n <= 0)
		{
			throw std::out_of_range("Dimension of array must be more zero!");
		}

		int* a = new int[n];
		return a;
}

MATHLIB_API void Math::DisplayArray(const int * a, int n)
{
	if (n <= 0)
	{
		throw std::out_of_range("Dimension of array must be more zero!");
	}

	if (a == nullptr)
	{
		throw std::invalid_argument("Argument is null!");
	}

	for (const int* p = a; p < a + n; p++)
	{
		std::cout << *p << " ";
	}
}

		MATHLIB_API void Math::NewArray(int* a, int* na, int &n)
	{
			int s = 0;
			for (int* p = a + 1; p < a + n; p += 2)
		{
				if ((*p < 0) && (*p % 2 != 0))
			{
					na[s] = *p;
					s++;
			}
		}
	}

		MATHLIB_API void Math::DeleteAndCopyElements(int* a,int* b, int &n)
		{
			int k = 0;
			for (int* p = a + 1; p < a + n; p += 2)
			{
				if ((*p < 0) && (*p % 2 != 0))
				{
					b[k] = *p;
					k++;
					*p = 0;
				}
			}

			for (int i = 0; i < n;  i++)
			{
				if (a[i] == 0)
				{
					Math::DeleteElementsFrom(a, n, i);
				}
			}
		}

		MATHLIB_API void Math::DeleteElementsFrom(int *a, int &n, int from)
		{
			for (int i = from; i < n; i++)
			{
				a[i] = a[i + 1];
			}

			n--;
		}

		MATHLIB_API void Math::CountDif(int* a, int* b, int n)
		{
		
			for (int i = 0; i < n; i++)
			{
				unsigned int count1 = 0;
				unsigned int count0 = 0;
				int num = a[i];
				unsigned int count = 0;
				for (; num; num >>= 1)
				{
					if ((num & 1)==1)
					{
						count1++;
					}
					else
					{
						count0++;
					}
					b[i] = count1 - count0;
					
				}
			}
		}

		
		MATHLIB_API void Math::BubbleSort(int* a, int* b, int n)
		{
			for (int i = n - 1; i >= 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (b[j] < b[j + 1])
					{
						Swap(a + j, a + j + 1);
						Swap(b + j, b + j + 1);
					}
				}
			}
		}

		MATHLIB_API void Math::Swap(int* a, int* b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}