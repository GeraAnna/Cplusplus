#include <iostream>

using namespace std;

void SortDirectInclusion(int array[], int N);
void Swap(int& a, int& b);
void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n);

int main()
{
	int n;
	const int N = 100;
	int array[N] = { 0 };

	system("cls");
	GenerateRandomArray(array, N);
	cout << "Your array: " << endl;
	DisplayArray(array, N);
	cout << endl;
	SortDirectInclusion(array, N);
	cout << "Sourced array: " << endl;
	DisplayArray(array, N);
	system("pause");
	return 0;
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



void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}


void SortDirectInclusion(int array[], int N)
{
	for (int i = 1; i <= N - 1; i++)
	{
		int min= i - 1;
		for (int j = i; j < N; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		Swap(array[i - 1], array[min]);
	}
}