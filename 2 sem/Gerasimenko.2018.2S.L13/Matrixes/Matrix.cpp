#include"Matrix.h"

using namespace std;

Matrix::Matrix(int row, int column)
{
	this->SetRow(row);
	this->SetColumn(column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}
}

int Matrix::GetRow() const
{
	return this->row;
}

int Matrix::GetColumn() const
{
	return this->column;
}

int Matrix::GetElement(int row, int column) const
{
	if ((row < GetRow()) && (column < GetColumn()))
		return this->matrix[row][column];
	else
		throw out_of_range("Invalid data");
}

void Matrix::SetElement(int row, int column, int element)
{
	if ((row < this->GetRow()) && (column < this->GetColumn()))
		this->matrix[row][column] = element;
	else
		throw out_of_range("Invalid data");
}

bool Matrix::CompareMatrixes(const Matrix & matrix1, const Matrix & matrix2)
{
	for (int i = 0; i < matrix1.GetRow(); i++)
	{
		for (int j = 0; j < matrix1.GetColumn(); j++)
		{
				if (matrix1.GetElement(i,j) != matrix2.GetElement(i,j))
					return false;
		}
	}
	return true;
}

void Matrix::SetRow(int row)
{
	if ((row > 0) && (row < 20))
		this->row = row;
	else
		throw out_of_range("Invalid data");
}

void Matrix::SetColumn(int column)
{
	if ((column > 0) && (column < 20))
		this->column = column;
	else
		throw out_of_range("Invalid data");
}

//istream& operator>>(istream& input, Matrix& matrix)
//{
//	int element;
//	for (int i = 0; i <= matrix.GetRow(); i++)
//	{
//		for (int j = 0; j <= matrix.GetColumn(); j++)
//		{
//			input >> element;
//
//			matrix.SetElement(i, j, element);
//		}
//	}
//
//	return input;
//}

void Matrix::Display()
// ostream& operator<<(ostream& output, const Matrix& matrix)
{
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}
