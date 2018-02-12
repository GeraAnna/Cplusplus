#include<iostream>

using namespace std;

int const N = 100;
void RandomMatrix(int matrix[][N], int n, int m);
void DisplayMatrix(int matrix[][N], int n, int m);
void FindMaxElementInStringAndSwap(int matrix[][N], int n, int m, int &imax, int &jmax);
void Swap(int& a, int& b);
void SumOfStringMatrix(int matrix[][N], int n, int m, int array[]);
void SwapRows(int matrix[][N], int n, int m, int  i, int j);
void BubleSortMatrix(int matrix[][N], int n, int m);

int main()
{
	int n, m;
	int matrix[][N] = { 0 };
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter m > n" << endl;
	cin >> m;
	while (m < n)
	{
		cout << "Try again, n must be less then m" << endl;
		cout << "Enter n" << endl;
		cin >> n;
		cout << "Enter m > n" << endl;
		cin >> m;
		system("cls");
	}
	RandomMatrix(matrix, n, m);
	DisplayMatrix(matrix, n, m);
	cout << endl;
	int max, imax, jmax;
	FindMaxElementInStringAndSwap(matrix, n, m, imax, jmax);
	DisplayMatrix(matrix, n, m);
	cout << endl;

	int array[N] = { 0 };
	SumOfStringMatrix(matrix, n, m, array);
	cout << endl;
	BubleSortMatrix(matrix, n, m);
	cout << endl;

}


void RandomMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100 - 100 / 2;
		}
	}
}

void DisplayMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void FindMaxElementInStringAndSwap(int matrix[][N], int n, int m, int &imax, int &jmax)
{
	int a, b;
	int &max = matrix[0][0];
	for (int i = 0; i < n / n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				imax = i;
				jmax = j;
			}
		}
	}
	Swap(matrix[imax][jmax], matrix[0][0]);
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void SumOfStringMatrix(int matrix[][N], int n, int m, int array[])
{
	for (int i = 0; i < n; i++)
	{
		long s = 0;
		for (int j = 0; j < m; j++)
		{
			s = s + matrix[i][j];
		}
		array[i] = s;
	}
}

void SwapRows(int matrix[][N], int n, int m, int  i, int j)
{
	for (int k = 0; k < n; k++)
	{
		int temp = matrix[i][k];
		matrix[i][k] = matrix[j][k];
		matrix[j][k] = temp;
	}
}

void BubleSortMatrix(int matrix[][N], int n, int m)
{
	int arr[N];
	SumOfStringMatrix(matrix, n, m, arr);
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr[j], arr[j + 1]);
				SwapRows(matrix, n, m, j, j + 1);
			}
		}
	}
}