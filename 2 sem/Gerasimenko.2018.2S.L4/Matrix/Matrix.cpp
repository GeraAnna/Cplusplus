// Matrix.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>
#include "..\Matrix\Matrix.h"
#include <stdexcept> 
#include <iostream>

using namespace std;


MATRIX_API int ** Math::AllocateMemory(int n, int * d)
{
	Exception1(n);

	int** a = new int*[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[d[i]];
	}

	return a;
}

MATRIX_API void Math::InitMatrix(int ** a, int n, int * d)
{

	Exception1(n);

	Exception2(a, d);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < d[i]; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}

MATRIX_API void Math::FreeMemory(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}

	delete[] a;
}

MATRIX_API void Math::DisplayMatrix(int ** a, int n, int * d)
{
	Exception1(n);

	Exception2(a, d);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < d[i]; j++)
		{
			cout.width(10);
			cout << a[i][j];
		}

		cout << endl;
	}
}

MATRIX_API void Math::Exception1(int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}
}

MATRIX_API void Math::Exception2(int ** a, int * d)
{
	if (a == nullptr || d == nullptr)
	{
		throw std::invalid_argument("Pointer can not be null!");
	}
}

MATRIX_API int * Math::AllocateMemory(int n)
{
	Exception1(n);
	return new int[n];
}

MATRIX_API void Math::SwapArray(int* &x, int* &y)
{
	int* t = x;
	x = y;
	y = t;
}

MATRIX_API void Math::SwapElements(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

MATRIX_API void Math::BubbleSort(int ** a, int n, int * d)
{
	bool flag = true;
	while (flag)
	{
		flag = false;

		for (int i = 0; i < n - 1; i++)
		{
			if (a[i][d[i]-1] > a[i + 1][d[i + 1]-1])
			{
				flag = true;
				SwapArray(a[i], a[i + 1]);
				SwapElements(d[i], d[i + 1]);
			}
		}
	}
	
}




