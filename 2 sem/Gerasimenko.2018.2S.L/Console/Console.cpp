// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\MathLib\MathLib.h"
#include <iostream>

int main()
{
	int n = 20;
	int* array = Math::AllocateMemory(n);
	Math::InitArray(array, n);
	Math::DisplayArray(array, n);
	std::cout << std::endl;
	int* newarray = Math::AllocateMemory(n);
	Math::NewArray(array, newarray, n);
	Math::DisplayArray(newarray, n);
	Math::DeleteAndCopyElements(array, newarray, n);
	Math::DisplayArray(array, n);
	int* newarray1 = Math::AllocateMemory(n);
	Math::CountDif(array, newarray1, n);
	Math::BubbleSort(newarray, newarray1, n);
	Math::DisplayArray(newarray1, n);
	return 0;
}

