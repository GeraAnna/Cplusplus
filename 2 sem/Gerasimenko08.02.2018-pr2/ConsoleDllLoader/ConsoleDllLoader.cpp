
#include "stdafx.h"#include "stdafx.h"
#include "..\Gerasimenko08.02.2018-pr2\MathLib.h"
#include <iostream>



int main()
{
	int n;
	std::cout << "Enter the number" << std::endl;
	std::cin >> n;
	std::cout << "The number is polindrome: " << Math::IsPolindrome(n) << std::endl;
	system("pause");
	return 0;

}

