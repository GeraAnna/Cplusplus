#include<iostream>;
using namespace std;

double power(double x, double eps);
void createTable(double a, double b, double h, double eps);
double moreThanValue(double value);
double lessThanValue(double value1);
double returnValidValue(double value2);

int main()
{
	double a = moreThanValue(0);// проверка для а>0
	double b =lessThanValue(a);//проверка для b>a
	double h = returnValidValue(a);//проверка для h<b-a
	createTable(a, b, h, eps);
	system pause;
}

{
	double yPrev = x, yNext = 1. / 2 * (yPrev + x / yPrev);
	while (fabs(yPrev - yNext) > eps)
	{
		yPrev = yNext;
		yNext = 1. / 2 * (yPrev + x / yPrev);
	}
	return yNext;
}
//Цикл while сначала проверит, потом сделает
// Цикл do while сначала сделает, потом проверит
{
	for (double x = a; x <= b; x += h)
		cout << "x= " << x << " y= " << power(x, eps) << " yt= " << sqrt(x) << endl;
}
{
	double x;
	while (true)
	{
		cout << "x > " << value << " : ";
		cin >> x;
		if (x > value)
			return x;
		cout <<"Not correct" ;
	}
}

{
	double x;
	while (true)
	{
		cout << "x < " << value1 << " : ";
		cin >> x;
		if (x < value1)
			return x;
		cout << "Not correct";
	}
}

//int main()
//{
//
//	while (true)
//	{
//		cout << "Enter number a > 0" << endl;
//		cin >> a;
//		if (a < 0)
//		{
//			cout << "Enter a > 0 ";
//			continue;
//		}
//
//		cout << "Enter number b > a" << endl;
//		cin >> b;
//		if (b < a)
//		{
//			cout << "Enter b < a ";
//			continue;
//		}
//
//		cout << "Enter number h > (b - a)" << endl;
//		cin >> h;
//		if (h > (b - a)
//		{
//			cout << "Enter h > (b - a) ";
//			continue;
//		}
//
//		cout << "Enter number eps" << endl;
//		cin >> eps;
//		if (eps > 0 && eps < 1)
//		{
//			cout << "Enter a > 0 ";
//			continue;
//		}
//
//
//
//
//	}
//}