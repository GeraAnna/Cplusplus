#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += (1 / pow((2 * i + 1), 2));
	}
	cout << "1 / 3 ^ 2 + 1 / 5 ^ 2 + ... + 1 /  ( 2n  +1 )  ^ 2 = " << result << endl;
	system("pause");
	return 0;
}