#include<iostream>;

using namespace std;

void GenerateRandomArray(int array[], int n);
void DisplayArray(int array[], int n);
int LastNegative(int array[], int n);
int FirstPositive(int array[], int n);
long long Sum(int array[], int n, int a, int b, long long sum);
void EnterArray(int array[], int n);
void Swap(int&, int&);
void NewOrder(int array[], int n);


int main()
{
	int n, m, a, b, sum, j;
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
	//GenerateRandomArray(array, n);
	EnterArray(array, n);
	DisplayArray(array, n);
	cout << endl;
	FirstPositive(array, n);
	cout << "First positive is " << endl << FirstPositive(array, n);
	LastNegative(array, n);
	cout << "Last negative is " << endl << LastNegative(array, n);
	Sum(array, n, a, b, sum);
    m = n;
	DeleteZeroElements(array, n, m, j);
	DisplayArray(array, n);
	NewOrder(array, n);
	DisplayArray(array, n);
	system("pause");

}


void GenerateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100 - 100 / 2;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

int FirstPositive(int array[], int n)
{
	int pos = 0;
	int t = 1;
	for (int i = 0; i < n; i++)
	{
		if (t < 2)
		{
			if (array[i] > 0)
			{
				pos = array[i];
				t++;
			}
		}
	}
	return pos;
}

int LastNegative(int array[], int n)
{
	int neg = 0;
	for (int i = 0; i < n; i++)
	{
			if (array[i] < 0)
			{
				neg = array[i];
			}
	}
	return neg;

}

long long Sum(int array[], int n, int a, int b, long long sum)
{
	sum = 0;
	a = FirstPositive(array, n);
	b= LastNegative(array, n);
	for (int i = 0; i < n; i++)
	{
		while (i > a && i < b)
		{
			if (array[i] > 0)
			{
				if (i % 2 == 0)
				{
					if (array[i] % 2 == 1)
					{
						sum= sum + array[i];
					}
				}
			}
		}
	}
	return sum;
}

int DeleteZeroElements(int array[], int n, int m, int j)
{
		for (int i = 0; i < m; i++)
		{
			if (array[i] == 0)
			{
				for (j = i; j < n - 1; j++)
				{
					array[j] = array[j + 1];

				}
				m--;
			}
	}
	return 0;
}

void EnterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void NewOrder(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] > 0 && array[i + 1] < 0)
			Swap(array[i], array[i + 1]);
		else
			for (int j = i + 1; j < n - 1; j++)
				if (array[j] > 0 && array[j + 1] < 0)
					Swap(array[j], array[j + 1]);
	}
}