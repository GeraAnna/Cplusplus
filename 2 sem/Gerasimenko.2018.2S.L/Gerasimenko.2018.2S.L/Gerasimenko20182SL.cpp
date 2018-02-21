// Gerasimenko20182SL.cpp : Defines the exported functions for the DLL application.
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
	Math::NewOrder(array, newarray, n);
	Math::DisplayArray(newarray, n);
	Math::DeleteElements(array, n);
	Math::DisplayArray(array, n);
	Math::CountUnit(array, newarray, n);
}