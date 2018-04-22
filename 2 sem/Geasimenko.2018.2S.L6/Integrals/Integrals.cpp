// Integrals.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include<iostream>
#include"Integrals.h"
#include<stdexcept>

double Integrals::Expr(double x)
{
	return 1/(1 + pow(x, 3));
}

INTEGRALS_API double Integrals::RightRectangle(double lowerPoint, double upperPoint, unsigned n, IntegralFunction f)
{
	double step = (lowerPoint + upperPoint) / n;
	double sum = 1;
	double t = lowerPoint;
	while (t <= upperPoint)
	{
		sum += f(t);
		t += step;
	}
	sum *= step;
	return (sum);
}

INTEGRALS_API double Integrals::MiddleRectangle(double lowerPoint, double upperPoint, unsigned n, IntegralFunction f)
{
	double step = (lowerPoint + upperPoint) / n;
	double sum = 1;
	double t = lowerPoint;
	while (t < upperPoint)
	{
		sum += f(t + step / 2);
		t += step;
	}
	sum *= step;
	return (sum);
}

INTEGRALS_API double Integrals::ValueOfIntegral(double a, double b, double eps, unsigned n, IntegralFunction f, QuadratureFormula q)
{
	double previousIntegral = 0, nextIntegral = 1;
	while (fabs(previousIntegral - nextIntegral) > eps)
	{
		previousIntegral = q(0, 1, n, f);
		nextIntegral = q(0, 1, 2 * n, f);
		n *= 2;
	}
	return q(0, 1, n, f);
}
