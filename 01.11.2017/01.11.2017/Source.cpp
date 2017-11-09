#include <iostream>
using namespace std;

int CountDigit(int num, int sum);
int main()
{
	int num;
	int sum;
	cout << "Enter the number" << endl;
	cin >> num;
	sum = CountDigit(num, sum);
	cout << "Count of 1 in binary code is " << sum << endl;
	return 0;
}

int CountDigit(int num, int sum)
{
	int rest;
	sum = 0;
	while (num > 0)
	{
		rest = num % 2;
		if (rest == 1)
			sum++;
		num = num / 2;
	}

	return sum;

}