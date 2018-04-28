// Equation.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include<iostream>
#include"Equation.h"
using namespace std;

EQUATION_API void Equation::NewtonMethod(double x0, double eps)
{
	double prev=x0;
	cout << "Equation \t\t\t" << "Root (NewtonMethod)" << endl;
	for (double k = 3; k <= 4; k += 0.1)
	{
		double following = prev - Function(prev, k) / Derivative(x0, k);
		while (fabs(prev - following) >= eps)
		{
			prev = following;
			following = prev - Function(prev, k) / Derivative(x0, k);
		}
		cout << k << "x - cosx - 1" << "\t\t\t" << following << endl;
	}
}

EQUATION_API double Equation::Function(double x, double k)
{
	return k*x - cos(x) - 1;
}

EQUATION_API double Equation::Derivative(double x, double k)
{
	return k + sin(x);
}

EQUATION_API void Equation::ModifiedNewtonMethod(double prev, double eps)
{
	double temp = prev;
	cout << "Equation \t\t\t" << "Root (ModifiedNewtonMethod)" << endl;
	for (double k = 3; k <= 4; k += 0.1)
	{
		prev = temp;
		double following = prev - Function(prev, k) / Derivative(prev, k) - Function(prev - pow(Derivative(prev, k), -1)*Function(prev, k), k) / Derivative(prev, k);
		while (fabs(prev - following) >= eps)
		{
			prev = following;
			following = prev - Function(prev, k) / Derivative(prev, k) - Function(prev - pow(Derivative(prev, k), -1)*Function(prev, k), k) / Derivative(prev, k);
		}
		cout << k << "x - cosx - 1" << "\t\t\t" << following << endl;
	}
}
