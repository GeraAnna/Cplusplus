#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1 / double(i);
	cout << "1/1+1/2+...+1/n= " << sum << endl;
	system("pause");
	return 0;
}
