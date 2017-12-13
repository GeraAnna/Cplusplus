#include <iostream>;
#include "Matrix.h";

using namespace std;

void GenerateFourQuadraticMatrix(int matrix[][N], int n, int p);

int main()
{
	int n;
	int matrix[N][N] = { 0 };
	cout << "Enter n" << endl;
	cin >> n;
	GenerateFourQuadraticMatrix(matrix, n);
	int m = n;
	DisplayMatrix(matrix, n, m);
	system("pause");
}

void GenerateFourQuadraticMatrix(int matrix[][N], int n, int p)
{
	int k = (n % 2) ? n / 2 + 1 : n / 2;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			matrix[i][j] = rand() % p - p / 2;
		}
	}

	for (int i = k; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			matrix[i][j] = rand() % p - p / 2;
		}
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = k; j < n; j++)
		{
			matrix[i][j] = rand() % p - p / 2;
		}
	}

	for (int i = k; i < n; i++)
	{
		for (int j = k; j < n; j++)
		{
			matrix[i][j] = rand() % p - p / 2;
		}
	}
}