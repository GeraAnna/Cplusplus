#include<iostream>

using namespace std;

long long CreateInverseNumber(long long number);
bool IsPalindrom(long long number);
int main()
{
	long long a;
	cout << "Enter number:" << endl;
	cin >> a;
	if (IsPalindrom(a))
	{
		cout << a << " is palindrome" << endl;
	}
	else
	{
		cout << a << " Is not palindrome" << endl;
	}
	system("pause");
	return 0;
}
long long CreateInverseNumber(long long number)
{
	long long inverse = 0;
	while (number)
	{
		int rest = number % 10;
		number /= 10;
		inverse = inverse * 10 + rest;
		return inverse;
	}
}
bool IsPalindrom(long long number)
{
	long long inverse;
	if (number == inverse)
		return 1;
	else
		return 0;
