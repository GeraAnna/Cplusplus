#pragma once
#ifdef EQUATION_EXPORTS
#define EQUATION_API __declspec(dllexport) 
#else
#define EQUATION_API __declspec(dllimport) 
#endif

namespace Equation
{
	EQUATION_API void NewtonMethod(double x0, double eps);
	EQUATION_API double Function(double x, double k);
	EQUATION_API double Derivative(double x, double k);
	EQUATION_API void ModifiedNewtonMethod(double prev, double eps);
}