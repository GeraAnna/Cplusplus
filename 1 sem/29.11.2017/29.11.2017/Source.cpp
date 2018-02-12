#include <iostream>;
#include "Matrix.h"

using namespace std;

int main()
{
	int const N = 100;
	int n, m;
	int matrix[N][N] = { 0 };
	cout << "Enter n"<< endl;
	cin >> n;
	cout << "Enter m" << endl;
	cin >> m;
	RandomMatrix(matrix, n, m, 50);
	DisplayMatrix(matrix, n, m);
	BubleSortMatrix(matrix, n, m);
	cout << "Sorted matrix is" << endl;
	DisplayMatrix(matrix, n, m);
	system("pause");
	return 0;
}
