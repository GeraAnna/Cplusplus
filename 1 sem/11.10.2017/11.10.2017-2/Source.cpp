#include<iostream>
using namespace std;

int main()
{

	int n;
	{
		cout << "Enter n" << endl;
		cin >> n;
	}
	for (int i = 2; i < sqrt(n); i++);
	{
		if (n % i == 0)
		{
			return false;
		}
		
	}
	system("pause");
	return true;
}