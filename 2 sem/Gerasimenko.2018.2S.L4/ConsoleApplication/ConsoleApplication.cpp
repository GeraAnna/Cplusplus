// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\Matrix\Matrix.h"
#include <iostream>

using namespace Math;
using namespace std;

int main()
{
	int n = 10;
	int* d = AllocateMemory(n);

	for (int i = 0; i < n; i++)
	{
		d[i] = rand() % 10 + 2;
	}

	int** matrix = nullptr;
	try
	{
		matrix = AllocateMemory(n, d);
	}
	catch (const std::invalid_argument& ex)
	{
		cout << ex.what() << endl;
	}

	InitMatrix(matrix, n, d);
	DisplayMatrix(matrix, n, d);
	cout << endl;
	cout << "---------" << endl;
	BubbleSort(matrix, n, d);
	DisplayMatrix(matrix, n, d);
	FreeMemory(matrix, n);
	system("pause");
	return 0;

}

