#include<iostream>;

using namespace std;

int fibonachi(int n);


void main()
{
	cout << fibonachi(10) << "\n";
	system("pause");
}

int fibonachi(int n)
{
	if (n == 1)
		return 1;
	else
		if (n == 2)
			return 1;
		else
			return fibonachi(n - 1) + fibonachi(n - 2);
}