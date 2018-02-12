// ConsoleDllLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\Project1\MathLib.h"
#include <iostream>



int main()
{
	int n;
	std::cout << "Enter the number" << std::endl;
	std::cin >> n;
	std::cout << "The number is prime: " << Math::IsPrimeNumber(n) << std::endl;
	system("pause");
    return 0;

}

