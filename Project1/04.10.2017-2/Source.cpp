#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	double x = 1;
	while (true)
	{
		cout << "Enter n > 0 ";
		cin >> n;
		if (n > 0)
		{
			break;
		}
		cout << "Invalid data! Try again!";
		system("pause");
		system("cls");
	}
	cout << "Enter x  ";
	cin >> x;
	system("cls");

	double term = x, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i) / (2 * i + 1);
	}
	cout << "sum = " << sum << endl;
	cout << "sin = " << sin(x) << endl;
	system("pause");
	return 0;
}