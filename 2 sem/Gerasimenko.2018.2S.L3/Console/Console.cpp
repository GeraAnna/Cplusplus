// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../Matrix/Matrix.h"
#include <iostream>

using namespace Math;

int main()
{
	int n = 5;
	int** matrix = AllocateMemory(n);
	int** newmatrix = AllocateMemory(n);
	InitMatrix(matrix, n);
	DisplayMatrix(matrix, n);
	NewMatrixAboveTheDioganal(matrix, newmatrix, 5);
	NewMatrixUnderTheDioganal(matrix, newmatrix, 5);
	CopyMainDioganal(matrix, newmatrix, 5);
	DisplayMatrix(newmatrix, n);
	std::cout << "New matrix is " << std::endl;
	FreeMemory(matrix, n);
	FreeMemory(newmatrix, n);
	system("pause");

    return 0;
}

