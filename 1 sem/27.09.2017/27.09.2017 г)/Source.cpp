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
		result += (pow(-1.0, i + 1) / i / (i + 1));
	}
	cout << "1/1/2-1/2/3+...+(-1)^n+1/n(n+1)= " << result << endl;
	system("pause");
	return 0;
}