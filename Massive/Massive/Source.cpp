#include <iostream>

using namespace std;

void EnterArray(int array[], int n);
void Swap(int&, int&);
void DisplayArray(int array[], int n);
void BubbleArray(int array[], int n);
void GenerateRandomArray(int array[], int n);
int SumArray(int array[], int n, int k);
void Counter(int array[], int n, int &less, int &more, int &equal);
void Compare(int array[], int &less, int &more, int &equal);
void ReverseArray(int array[], int n);
int FirstMinIndex(int array[], int n);
int FirstMaxIndex(int array[], int n);

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

void BubbleArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
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

void Counter(int array[], int n, int &less, int &more, int &equal)
{
	less = more = equal = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] == array[i + 1])
			equal++;
		else
			if (array[i] > array[i + 1])
				less++;
			else
				more++;
	}
}

void Compare(int array[], int &less, int &more, int &equal)
{
	if ((less == 0) && (equal == 0))
		cout << "Elements of array compose strictly decreasing sequence" << endl;
	if ((less == 0) && (equal != 0))
		cout << "Elements of array compose decreasing sequence" << endl;
	if ((more == 0) && (equal == 0))
		cout << "Elements of array compose strictly increasing sequence" << endl;
	if ((more == 0) && (equal != 0))
		cout << "Elements of array compose increasing sequence" << endl;
	if ((more == 0) && (less == 0))
		cout << "Elements of array compose monotonic sequence" << endl;
	if (((more != 0) && (less != 0)) || ((equal != 0) && (less != 0)) || ((equal != 0) && (more != 0)))
		cout << "Elements of array compose unordered sequence" << endl;
}

void ReverseArray(int array[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		Swap(array[i], array[n - i - 1]);
	}
}

int FirstMaxIndex(int array[], int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return max;
}

int FirstMinIndex(int array[], int n)
{
	int min = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[min] > array[i])
		{
			min = i;
		}
	}
	return min;
}