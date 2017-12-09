#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	double result = 0;
	cout << "n= ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		result = pow(2, n);
	}
	cout << "2 * 2 * 2...2 = " << result << endl;
	system("pause");
	return 0;
}