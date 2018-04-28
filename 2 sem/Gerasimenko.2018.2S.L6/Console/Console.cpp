// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"../Integrals/Integrals.h"

using namespace Integrals;
using namespace std;

int main()
{
	cout << ValueOfIntegral(0, 1, 0.00005, 6, Expr, RightRectangle) << endl;
	cout << ValueOfIntegral(0, 1, 0.00005, 6, Expr, MiddleRectangle) << endl;
	system("pause");
	return 0;
}


