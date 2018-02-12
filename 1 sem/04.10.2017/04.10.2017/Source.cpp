
#include <iostream>
using namespace std;
double power(double x, double eps);
void createTable(double a, double b, double h, double eps);
double cheking1(double a);
double cheking2(double a);
double cheking3(double a, double b);

int main()
{
	double a = cheking1(0);
	double b = cheking1(a);
	double h = cheking2(b - a);
	double eps = cheking3(0, 1);
	createTable(a, b, h, eps);
	system("pause");
}

double cheking1(double value)
{
	double x;
	while (true)
	{
		cout << "Enter x > " << value << ": ";
		cin >> x;
		if (x > value)
			return x;
		cout << "Invalid data!" << endl;
	}
}

double cheking2(double value)
{
	double x;
	while (true)
	{
		cout << "Enter x < " << value << ": ";
		cin >> x;
		if (x < value)
			return x;
		cout << "Invalid data!" << endl;
	}
}

void createTable(double a, double b, double h, double eps)
{
	for (double x = a; x <= b; x += h)
		cout << "x = " << x << " y = " << power(x, eps) << " yt = " << sqrt(x) << endl;
}

double power(double x, double eps)
{
	double yPrev = x, yNext = 1. / 2 * (yPrev + x / yPrev);
	while (fabs(yPrev - yNext) > eps)
	{
		yPrev = yNext;
		yNext = 1. / 2 * (yPrev + x / yPrev);
	}
	return yNext;
}

double cheking3(double a, double b)
{
	double eps;
	while (true)
	{
		cout << "Enter " << a << " < eps < " << b << " : ";
		cin >> eps;
		if (eps < b && eps > a)
			return eps;
		cout << "Invalid data! Try again" << endl;
	}
}