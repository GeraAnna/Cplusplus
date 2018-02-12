#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double n = 0;
	cout << "n= ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		n = sqrt(n + 2);
	}
	cout << "корни = " << n << endl;
	system("pause");
	return 0;
}