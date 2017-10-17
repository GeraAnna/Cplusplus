#include<iostream>
using namespace std;

int main()
{
	int n;
	{
		cout << "Enter n" << endl;
		cin >> n;
	}
	int i;
	for (i = 2; i < sqrt(n); i++);
	{
		if (n % i == 0)
		{
			cout << "The number is composite"<< endl;

		}
		else
		{
			cout << "The number is prime"<< endl;
		}
	}
	system("pause");
	return 0;
}