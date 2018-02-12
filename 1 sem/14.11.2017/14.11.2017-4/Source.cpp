#include <iostream>


using namespace std;

void DisplayArray(int array[], int n);
void EnterArray(int array[], int n);
void Counter(int array[], int n, int &negative, int &positive, int &zero);


int main()
{
	int n;
	const int N = 100;
	int array[N] = { 0 };
	int negative, positive, zero;

	while (true)
	{
		cout << "Enter n <= " << N << endl;
		cin >> n;
		if (n >= 1 && n <= N)
		{
			break;
		}
		cout << "try again" << endl;
	}
	system("cls");
	EnterArray(array, n);
	DisplayArray(array, n);
	cout << endl;
	Counter(array, n, negative, positive, zero);
	cout << "The number of negative is " << negative << endl;
	cout << "The number of positive is " << positive << endl;
	cout << "The number of zero is " << zero << endl;

	system("pause");
}




void Counter(int array[], int n, int &negative, int &positive, int &zero)
{
	negative = positive = zero = 0;
	for (int i = 0; i < n 
		; i++)
	{
		if (array[i] < 0)
			negative++;
		else
			if (array[i] > 0)
				positive++;
			else
				zero++;
	}
}

void EnterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

