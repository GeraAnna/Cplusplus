
#include<iostream>

using namespace std;

double cosTaylor(double, double);

int main()
{
	double a, b;
	cout << "Enter a = ";
	cin >> a;
	while (true)
	{
		cout << "Enter b > a: ";
		cin >> b;
		if (b > a) break;
		cout << "Invalid data! Try again" << endl;
	}
	double x, eps;
	while (true)
	{
		cout << "Enter 0 < epsilon < 1 : ";
		cin >> eps;
		if (eps > 0 && eps < 1)
			break;
		cout << "Invalid data! Try again!" << endl;
	}
	double h;
	while (true)
	{
		cout << "Enter h < b - a: ";
		cin >> h;
		if (h < b - a) break;
		cout << "Invalid data! Try again" << endl;
	}
	for (x = a; x < b; x = x + h)
	{
		cout << "x = " << x << "  ";
		cout << "sum = " << cosTaylor(x, eps) << "  ";
		cout << "cos = " << cos(x) << endl;
	}
	system("pause");
}

double cosTaylor(double x, double eps)
{
	double term = x, sum = 0;
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i + 1) / (2 * i + 2);
	}
	return sum;
}