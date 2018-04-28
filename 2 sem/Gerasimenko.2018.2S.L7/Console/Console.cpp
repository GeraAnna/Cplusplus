// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"../Equation/Equation.h"

using namespace Equation;
using namespace std;

int main()
{
	double x0, eps;
	while (true)
	{
		cout << ("Enter the initial approximation ");
		cin >> x0;
		cout << ("Enter the accuracy");
		cin >> eps;
		if ((eps < 1) && (eps > 0)) break;
		cout << ("Accuracy is incorrect! Try again");
	}
	
	 NewtonMethod(x0, eps);
	 cout << endl;
	 ModifiedNewtonMethod(x0, eps);
	 system("pause");

}

