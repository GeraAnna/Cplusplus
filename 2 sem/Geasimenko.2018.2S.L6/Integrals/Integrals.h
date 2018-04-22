#pragma once
#ifdef INTEGRALS_EXPORTS
#define INTEGRALS_API __declspec(dllexport) 
#else
#define INTEGRALS_API __declspec(dllimport) 
#endif

namespace Integrals
{
	INTEGRALS_API double Expr(double);
	INTEGRALS_API typedef double(*IntegralFunction)(double);
	INTEGRALS_API typedef double(*QuadratureFormula)(double, double, unsigned, IntegralFunction);
	INTEGRALS_API double RightRectangle(double, double, unsigned, IntegralFunction);
	INTEGRALS_API double MiddleRectangle(double, double, unsigned, IntegralFunction);
	INTEGRALS_API double ValueOfIntegral(double, double, double, unsigned, IntegralFunction, QuadratureFormula);
}