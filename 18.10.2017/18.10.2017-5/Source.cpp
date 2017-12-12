#include <iostream>

using namespace std;

long long deleteNumber(long long n, int b, int c);

int main()
{
	long long a;
	int b;
	cout << "Enter number:" << endl;
	cin >> a;
	cout << "Wich number you want to delete?" << endl;
	cin >> b;

	long long k = deleteNumber(a, b);
	cout << k << endl;

	system("pause");

	return 0;
}

long long deleteNumber(long long n, int b)
{
	long long number = n, rev = 0;
	int digit, del = b;
	while (number)
	{
		digit = number % 10;
		if (digit != del)
		{
			rev = (rev * 10) + digit;
		}
		number = number / 10;
	}
	number = 0;
	while (rev)
	{
		digit = rev % 10;
		number = (number * 10) + digit;
		rev = rev / 10;
	}
	return  number;
}