#pragma once
#ifndef matrix_h
#define matrix_h

#include<iostream>
#include<fstream>

class Matrix
{
public:
	Matrix() {};
	Matrix(int, int);

	int GetRow() const;
	int GetColumn() const;
	int GetElement(int, int) const;

	void SetElement(int, int, int);


	void Display();
	//void Input();
	//friend istream& operator>>(istream &, Matrix &);
	//friend ostream& operator<<(ostream&, const Matrix&);

	static bool CompareMatrixes(const Matrix &, const Matrix &);

private:
	void SetRow(int);
	void SetColumn(int);

	int row, column;
	int matrix[20][20];
};
#endif 
