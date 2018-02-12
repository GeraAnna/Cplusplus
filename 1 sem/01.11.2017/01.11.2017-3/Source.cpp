#include <iostream>
using namespace std;

int ConvertNum(char rest);
int CountNum(int n, int dig);

int main()
{
	int num , k, n, dig;
	char t;
	cout << "Enter integer number: " << endl;
	cin >> num;
	cout << "Enter a simbol which you want to count: " << endl;
	cin >> t;
	int ConvertNum(char rest);
	k = CountNum(n , dig);
	cout << "The number of simbol you choose in your code is " << k << endl;

	return 0;
}

int ConvertNum(char rest)
{
	int sum = 0, dig;
	if (rest == '0') dig = 0;
	if (rest == '1') dig = 1;
	if (rest == '2') dig = 2;
	if (rest == '3') dig = 3;
	if (rest == '4') dig = 4;
	if (rest == '5') dig = 5;
	if (rest == '6') dig = 6;
	if (rest == '7') dig = 7;
	if (rest == '8') dig = 8;
	if (rest == '9') dig = 9;
	if (rest == 'A' || rest == 'a') dig = 10;
	if (rest == 'B' || rest == 'b') dig = 11;
	if (rest == 'C' || rest == 'c') dig = 12;
	if (rest == 'D' || rest == 'd') dig = 13;
	if (rest == 'E' || rest == 'e') dig = 14;
	if (rest == 'F' || rest == 'f') dig = 15;
	return dig;
}

int CountNum(int n, int dig)
{
	int p, sum;
	while (n > 0)
	{
		p = n % 16;
		if (p == dig)
		{
			sum++;
		}
		n = n / 16;
	}
	return sum;
}