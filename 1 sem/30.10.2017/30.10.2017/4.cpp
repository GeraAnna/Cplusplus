#include <iostream>

using namespace std;

long long changeNumber(long long n, int b, int c);

int main()
{
	long long a;
	int b, c;
	cout << "Enter number:" << endl;
	cin >> a;
	cout << "Wich number you want to change?" << endl;
	cin >> b;
	cout << " On which number you want to replace?" << endl;
	cin >> c;
	long long k = changeNumber(a, b, c);
	cout << k << endl;

	system("pause");

	return 0;
}

long long changeNumber(long long n, int b, int c)
{
	long long number = n, rev = 0;
	int digit, change = b, replace = c;
	while (number)
	{
		digit = number % 10;
		if (digit == change)
		{
			digit = replace;
		}
		rev = (rev * 10) + digit;
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