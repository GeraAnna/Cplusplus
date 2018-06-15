#include<iostream>
#include<fstream>
#include"Matrix.h"

using namespace std;

void InitFile(char*);
int SetRow();
int SetColumn();
void DisplayFile(char*);
void AddToSecondFile(char*, char*);
int CountElements(char*);
void SystemFun();
void AddToEndFile(char *, const Matrix&);

int main()
{
	const int N = 20;
	char fileNameFrom[N] = "File";
	char fileNameTo[N] = "Filee";
	cout << "Enter the matrixes in the first file" << endl;
	InitFile(fileNameFrom);
	cout << "Enter the matrixes in the second file" << endl;
	InitFile(fileNameTo);
	DisplayFile(fileNameFrom);
	DisplayFile(fileNameTo);
	AddToSecondFile(fileNameFrom, fileNameTo);
	DisplayFile(fileNameTo);
	system("pause");
	return 0;
}

void InitFile(char * fileName)
{
	ofstream streamOut(fileName, ios::binary | ios::trunc);
	if (!streamOut.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}

	system("cls");
	while (true)
	{
		cout << "Add new matrix? Y/N" << endl;
		char answer;
		cin >> answer;
		if (answer == 'N') break;
		int r = SetRow(), c = SetColumn();
		Matrix matrix(r, c);
		//cin >> matrix;
		//cout << matrix;
		matrix.Display();
		streamOut.write((char*)&matrix, sizeof(Matrix));
	}

	streamOut.close();
}


int SetColumn()
{
	int column;
	while (true)
	{
		cout << "Enter the number of coloumns in matrix:" << endl;
		cin >> column;

		if (column > 0 && column < 20)
			return column;
	}
}

int SetRow()
{
	int row;
	while (true)
	{
		cout << "Enter the number of rows in matrix:" << endl;
		cin >> row;

		if (row > 0 && row < 20)
			return row;
	}
}

void DisplayFile(char* fileName)
{
	ifstream streamIn(fileName);
	if (!streamIn.is_open())
	{
		std::cout << "The file is not opened!" << std::endl;
		system("pause");
		exit(1);
	}

	Matrix matrix;

	while (streamIn.read((char*)&matrix, sizeof(Matrix)))
	{
		matrix.Display();
		//cout << matrix << endl;
	}

	streamIn.close();
}

void AddToSecondFile(char * fileNameFrom, char * fileNameTo)
{
	ifstream streamIn(fileNameFrom);
	ifstream streamInn(fileNameTo);
	if (!streamIn.is_open() && !streamInn.is_open())
	{
		std::cout << "The file is not opened!" << std::endl;
		system("pause");
		exit(1);
	}

	Matrix* matrix = new Matrix[CountElements(fileNameFrom)];
	int k = 0;
	while (streamIn.read((char*)&matrix[k], sizeof(Matrix)))
	{
		k++;
	}
	streamIn.close();

	Matrix* matrix1 = new Matrix[CountElements(fileNameTo)];
	int l = 0;
	while (streamInn.read((char*)&matrix1[k], sizeof(Matrix)))
	{
		l++;
	}
	streamInn.close();

	bool flag = false;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (Matrix::CompareMatrixes(matrix[i], matrix1[j]))
			{
				flag = true;
			}
		}

		if (!flag)
		{
			AddToEndFile(fileNameTo, matrix[i]);
		}

	}
}


int CountElements(char* fileName)
{
	ifstream streamIn(fileName);
	if (!streamIn.is_open())
	{
		std::cout << "The file is not opened!" << std::endl;
		system("pause");
		exit(1);
	}
	Matrix matrix;
	int count = 0;
	while (streamIn.read((char*)&matrix, sizeof(Matrix)))
	{
		count++;
	}
	return count;
}

void AddToEndFile(char * fileNameTo, const Matrix& matrix)
{
	ofstream streamOut(fileNameTo, ios::app | ios::binary);
	if (!streamOut.is_open())
	{
		cout << "Can't open file to write!";
		SystemFun();
		return;
	}
	int bufSize = sizeof(Matrix);

	streamOut.write((char*)&matrix, bufSize);

	streamOut.close();
}

void SystemFun()
{
	cout << endl;
	system("pause");
	system("cls");
}