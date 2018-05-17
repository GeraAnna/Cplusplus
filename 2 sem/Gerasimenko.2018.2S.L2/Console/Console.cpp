// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../MatrixLib/MatrixLib.h"
#include <iostream>

using namespace Math;

int main()
{
	int n = 10;
	double** matrix = AllocateMemory(n);
	double** matrixeps = AllocateMemory(n);
	InitMatrix(matrix, n);
	std::cout << "Matrix by Sin" << std::endl;
	DisplayMatrix(matrix, n);
	InitMatrixSinTaylor(matrixeps, n);
	std::cout << "Matrix by SinTaylor" << std::endl;
	DisplayMatrix(matrixeps, n);
	std::cout <<"The biggest difference is  "<< CompareMatrixes(matrix, matrixeps, n)<< std::endl;
	FreeMemory(matrix, n);
	FreeMemory(matrixeps, n);
	system("pause");

    return 0;
}

