#include"Matrixes.h"
#include <cmath>
#include <iostream>
#include <exception>

using namespace std;

Matrix::Matrix(int n, int m)
{
	this->SetHeigth(n);
	this->SetWidth(m);
	this->InitValueMatrix(0);
}

Matrix::Matrix(int ** matrix, int n, int m)
{
	this->CopyMatrix(matrix);
	this->SetHeigth(n);
	this->SetWidth(m);
}


Matrix::Matrix(const Matrix & other)
{
	this->SetHeigth(other.Height());
	this->SetWidth(other.Width());
	this->CopyMatrix(other.matrix);
}

Matrix::~Matrix()
{

	for (int i = 0; i < this->n; i++)
	{
		delete[] this->matrix[i];
	}

	delete matrix;
}

void Matrix::InitValueMatrix(int value)
{
	this->matrix = AllocateMemory(this->Height(), this->Width());

	for (int i = 0; i < this->Height(); i++)
	{
		for (int j = 0; j < this->Width(); j++)
		{
			this->matrix[i][j] = value;
		}
	}
}

void Matrix::InitRandomMatrix(int criterion)
{
	this->matrix = AllocateMemory(this->Height(), this->Width());

	for (int i = 0; i < this->Height(); i++)
	{
		for (int j = 0; j < this->Width(); j++)
		{
			this->matrix[i][j] = rand() % criterion - criterion / 2;
		}
	}
}


inline int Matrix::Height() const
{
	return this->n;
}

inline int Matrix::Width() const
{
	return this->m;
}

inline void Matrix::SetHeigth(int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("N can not be negative or zero!");
	}


	this->n = n;
}

inline void Matrix::SetWidth(int m)
{
	if (m <= 0)
	{
		throw std::invalid_argument("N can not be negative or zero!");
	}


	this->m = m;
}

void Matrix::CopyMatrix(int ** firstmatrix)
{
	int n = this->Height(), m = this->Width();

	this->matrix = AllocateMemory(n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			(*this)[i][j] = firstmatrix[i][j];
		}
	}

}


inline int* Matrix::operator[](int i)
{
	return this->matrix[i];
}

int Matrix::FindMinInRegion(int i, int j)
{
	int itemp = 0, jtemp = 0, min = 0;
	int n = this->Height();

	if (i + j < n - 1)
	{
		itemp = jtemp = i + j;
		min = (*this)[i][j];

		for (int k = 0; k <= itemp; k++, jtemp--)
		{
			for (int q = 0; q <= jtemp; q++)
			{
				if (min >(*this)[k][q])
				{
					min = (*this)[k][q];
				}
			}
		}
	}
	else if (i + j > n - 1)
	{
		itemp = abs(i + j - n + 1);
		jtemp = n - 1;
		min = (*this)[i][j];

		for (int k = (itemp); k <= n - 1; k++, jtemp--)
		{
			for (int q = jtemp; q <= n - 1; q++)
			{
				if (min > (*this)[k][q])
				{
					min = (*this)[k][q];
				}
			}
		}

	}
	else if (j + i == n - 1)
		min = (*this)[i][j];

	return min;
}

void Matrix::Display()
{
	for (int i = 0; i < this->Height(); i++)
	{
		for (int j = 0; j < this->Width(); j++)
		{
			cout.width(4);
			cout << this->matrix[i][j];

		}
		cout << endl;
	}
}

Matrix Matrix::BuildNewMatrix()
{
	Matrix obj(this->Height(), this->Width());

	int n = this->Height(), m = this->Width();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			obj[i][j] = this->FindMinInRegion(i, j);
		}
	}

	return obj;
}



int ** Matrix::AllocateMemory(int n, int m)
{
	if (n <= 0 || m <= 0)
	{
		throw std::invalid_argument("Dimention of array can not be negative or zero!");
	}

	int ** a = new int*[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	return a;
}



//void OutOfRangeExeption(int n)
//{
//	if (n <= 0)
//	{
//		throw std::invalid_argument("N can not be negative or zero!");
//	}
//
//}

template <typename T>
void BadAllocate(T ** n)
{
	if (n == nullptr)
	{
		throw std::invalid_argument("Matrix can not be empty!");
	}
}

