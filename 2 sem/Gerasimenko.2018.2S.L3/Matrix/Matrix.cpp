// Matrix.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>
#include "..\Matrix\Matrix.h"
#include <stdexcept> 
#include <iostream>

using namespace std;

MATRIX_API int ** Math::AllocateMemory(int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimentions can not be less or equal zero!");
	}

	int** a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	return a;
}

MATRIX_API void Math::DisplayMatrix(int** a, int n)
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
			cout.width(5);
			cout << a[i][j];
		}

		cout << endl;
	}
}

MATRIX_API void Math::FreeMemory(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}

	delete[] a;
}

MATRIX_API void Math::InitMatrix(int** matrix, int n)
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
			matrix[i][j] = rand() % 10;
		}
	}
}

MATRIX_API int Math::FindMaxUpElement(int** matrix, int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}

MATRIX_API int Math::FindMaxDownElement(int** matrix, int n)
{
	int max = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}

MATRIX_API int ** Math::NewMatrixAboveTheDioganal(int** matrix, int** newmatrix, int n)
{
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = i + 1; j < n + 1; j++)
		{
			newmatrix[i][j] = FindMaxUpElement(newmatrix, j - i + 1);
		}
	}
	return newmatrix;
}

MATRIX_API int ** Math::CopyMainDioganal(int ** matrix, int ** newmatrix, int n)
{
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (i == j)
				newmatrix[i][j] = matrix[i][j];
		} 
	}
	return newmatrix;
}

MATRIX_API int ** Math::NewMatrixUnderTheDioganal(int** matrix, int** newmatrix, int n)
{
	for (int i = 2; i < n + 1; i++)
	{
		for (int j = i - 1; j < i; j++)
		{
			newmatrix[i][j] = FindMaxDownElement(newmatrix, i - j + 1);
		}
	}
	return newmatrix;
}




