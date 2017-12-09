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
		result += (1.0 / i / i / i / i / i);
	}
	cout << "(1/1/1/1/1/1)(1/2/2/2/2/2)...(1/n/n/n/n/n)= " << result << endl;
	system("pause");
	return 0;
}