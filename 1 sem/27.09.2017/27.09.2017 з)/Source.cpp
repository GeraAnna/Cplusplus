#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n = 1;
	double b = 1, sum = 0;
	cout << "n= ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		n = n * i;
		b = b + 1 / b;
		sum = sum + n / b;
	}
	cout << "1! / 1 + 2! / 1 + 1 / 2 +...+ n! / 1 + 1 / 2 +...+ 1 / n = " << result << endl;
	system("pause");
	return 0;
}