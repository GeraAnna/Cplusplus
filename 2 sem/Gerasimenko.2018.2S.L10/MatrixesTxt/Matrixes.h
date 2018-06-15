#pragma once
#ifndef numbers_h
#define numbers_h

class Matrix
{
public:
	Matrix(int, int);
	Matrix(int **, int, int);
	Matrix(const Matrix&);
	~Matrix();
	int Height() const;
	int Width() const;
	int* operator [](int);
	void Display();
	Matrix BuildNewMatrix();

private:
	int ** matrix;
	int n;
	int m;
	void InitValueMatrix(int = 0);
	void InitRandomMatrix(int);
	void CopyMatrix(int**);
	int FindMinInRegion(int, int);
	void SetHeigth(int);
	void SetWidth(int);

	static int ** AllocateMemory(int, int);

};
#endif
