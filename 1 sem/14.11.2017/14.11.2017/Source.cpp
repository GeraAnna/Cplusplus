#include <iostream>


using namespace std;

void EnterArray(int array[], int n);
void Swap(int&, int&);
void DisplayArray(int array[], int n);
void StraightOrderArray(int array[], int n);


int main()

{
	int n;
	const int N = 100;
	int array[N] = { 0 };

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
	system("cls");
	StraightOrderArray(array, n);
	cout << "Source array" << endl;
	DisplayArray(array, n);
	system("pause");
}


	void DisplayArray(int array[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << array[i] << " ";
		}
	}



	void Swap(int& a, int& b)
	{
		int t = a;
		a = b;
		b = t;
	}


	void StraightOrderArray(int array[], int n)
	{
		for (int i = 0; i < n ; i++)
		{
			for (int k = 0; k < n - i; k++)
			if (array[k] > array[k + 1])
			{
				Swap(array[k], array[k + 1]);
			}
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
