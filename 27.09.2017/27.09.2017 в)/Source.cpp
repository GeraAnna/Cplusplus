#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= (1 + (1.0 / i / i));
	}
	cout << "(1+1/1/1)(1+1/2/2)...(1+1/n/n)= " << result << endl;
	system("pause");
	return 0;
}