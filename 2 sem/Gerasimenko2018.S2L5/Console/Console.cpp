// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "..\Strings\Strings.h"

using namespace Strings;


int main()
{
	int n = 9;
	int max, min;
	char source[] = "Double hall-48/oil fill body Sun. Bubble;-09487 jail detective";
	char** String = ObtainWords(source, n);
	DisplayWords(String, n);
	FindMaxAndMinWords(String, n, max, min);
	char * sortedwords = FindMoreMaxAndMin(String, n, max, min);
	std::cout << std::endl <<sortedwords;
	system("pause");
	return 0;
}

