#include <iostream>


using namespace std;

void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n);
int SumArray(int array[], int n, int k);


int main()

{
	int n, k;
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
	cout << "Enter the number" << endl;
	cin >> k;
	GenerateRandomArray(array, n);
	cout << "Enter elements of array" << endl;
	DisplayArray(array, n);
	cout << endl;
	cout << "The number of digits that are less than your number is " << SumArray(array, n, k) <<  endl;
	system("pause");
	
}


	void DisplayArray(int array[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << array[i] << " ";
		}
	}


	void GenerateRandomArray(int array[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			array[i] = rand() % 100;
		}
	}

	int SumArray(int array[], int n, int k)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (k > array[i])
			{
				sum++;
			}
		}
		return sum;
	}