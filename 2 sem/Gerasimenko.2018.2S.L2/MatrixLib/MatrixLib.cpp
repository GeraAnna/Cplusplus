// MatrixLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>
#include "..\MatrixLib\MatrixLib.h"
#include <stdexcept> 
#include <iostream>

using namespace std;

MATRIXLIB_API double Math::SinTaylor(double x, double eps)
{
	double term = x, sum = 0;
	int k = 0;
	double a = 0;
	while (a > 0)
	{
		k++;
		a = x - 2 * 3.14159265359*k;
	}
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i) / (2 * i + 1);
	}
	return sum;
}

MATRIXLIB_API double ** Math::AllocateMemory(int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}

	double** a = new double*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new double[n];
	}

	return a;
}

MATRIXLIB_API void Math::DisplayMatrix(double** a, int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}

	if (a == nullptr)
	{
		throw std::invalid_argument("Pointer can not be null!");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(20);
			cout << a[i][j];
		}

		cout << endl;
	}
}

MATRIXLIB_API void Math::FreeMemory(double** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}

	delete[] a;
}

MATRIXLIB_API void Math::InitMatrix(double** matrix, int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}

	if (matrix == nullptr)
	{
		throw std::invalid_argument("Pointer can not be null!");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				matrix[i][j] = (i + j)*exp(i + j) / (sin(2 * i) + 4);
			}
			else
				matrix[i][j] = i - j;
		}
	}
}

MATRIXLIB_API void Math::InitMatrixSinTaylor(double** matrixeps, int n)
{
	double eps = 0.0001;
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}

	if (matrixeps == nullptr)
	{
		throw std::invalid_argument("Pointer can not be null!");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				matrixeps[i][j] = (i + j)*exp(i + j) / (SinTaylor(2 * i, eps) + 4);
			}
			else
				matrixeps[i][j] = i - j;
		}
	}
}

MATRIXLIB_API double Math::CompareMatrixes(double** matrix, double** matrixeps, int n)
{
	double max = 0;
	double dif = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		    dif = fabs(matrix[i][j] - matrixeps[i][j]);
			if (dif > max)
			{
				max = dif;
			}
		}
	}
	return max;
}