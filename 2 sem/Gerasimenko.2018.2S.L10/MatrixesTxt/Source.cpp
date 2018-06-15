#include <iostream>
#include "Matrixes.h"
#include<fstream>

using namespace std;

int ** InitMatrix(char *, int &, int &);
void AddFile(char *, Matrix);


int main()
{
	char fileName[30] = "matrix.txt";
	//CreateFile(fileName, 10);
	int n, m;
	int ** matrix = InitMatrix(fileName, n, m);

	Matrix obj(n, m);

	Matrix two = obj.BuildNewMatrix();

	AddFile(fileName, two);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
		//cout << endl;

	//two.Display();

	system("pause");

	return 0;
}



int ** InitMatrix(char * fileName, int & n, int & m)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}

	int count = 0;
	int temp;

	while (!streamIn.eof())
	{
		streamIn >> temp;
		count++;
	}

	streamIn.seekg(0, ios::beg);
	streamIn.clear();

	int countSpace = 0;
	char symbol;
	while (!streamIn.eof())
	{
		streamIn.get(symbol);
		if (symbol == ' ') countSpace++;
		if (symbol == '\n') break;
	}

	streamIn.seekg(0, ios::beg);
	streamIn.clear();

	n = count / (countSpace + 1);
	m = countSpace + 1;


	int **matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			streamIn >> matrix[i][j];
		}
	}

	return matrix;
}

void AddFile(char * fileName, Matrix obj)
{
	ofstream streamOut(fileName, ios::app);

	if (!streamOut.is_open())
	{
		cout << "\nCannot open file to addition!\n";
		system("pause");
		exit(1);
	}

	int n = obj.Height(), m = obj.Width();
	streamOut << "\nSorted Matrix!\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j< m; j++)
		{
			streamOut.width(5);
			streamOut << obj[i][j];
		}
		streamOut << "\n";

	}
	streamOut.close();
}
