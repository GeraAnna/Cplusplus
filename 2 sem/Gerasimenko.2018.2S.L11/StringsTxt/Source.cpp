#include<iostream>
#include"Strings.h"
#include"fstream"

using namespace std;

void CreateNewFile(char*, char*, int);
int ContentsFile(char*);
char* InitArray(char*, int);
void AddFile(char*, int*, int);
char* FromFile(char* );

int main()
{
	const int N = 30;
	char fileNameFrom[N] = "";
	cout << "Enter the name of file where you would like to get words: ";
	cin.getline(fileNameFrom, N, '\n');
	char fileNameTo[N] = "";
	cout << "Enter the name of file where youu would like to put new words: ";
	cin.getline(fileNameTo, N, '\n');
	char* string{};
	int i = 0;
	string = FromFile(fileNameFrom);
	CreateNewFile(fileNameTo, string, i);
	cout << "Done";
	system("pause");
	return 0;
}

void CreateNewFile(char * fileName,char* string, int n)
{
	int max, min;
	ofstream streamOut(fileName);
		if (!streamOut.is_open())
		{
			cout << "Cannot open file to write!" << endl;
			system("pause");
			exit(1);
		}
		system("cls");
	char** arrayWords = ObtainWords(string, n);
	streamOut << "Min amd max words are: ";
	FindMaxAndMinWords(arrayWords, n, max, min);
	char * sortedwords = FindMoreMaxAndMin(arrayWords, n, max, min);
	streamOut << sortedwords;
	streamOut.close();
}

int ContentsFile(char * fileName)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}

	int count = 0;
	char term;

	while (!streamIn.eof())
	{
		streamIn >> term;
		count++;
	}
	streamIn.close();
	return count;
}

char * InitArray(char * fileName, int n)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}

	char* array = new char;
	for (int i = 0; i < n; i++)
	{
		streamIn >> array[i];
	}

	streamIn.close();
	return array;
}

void AddFile(char * fileName, int * arr, int n)
{
	ofstream streamOut(fileName, ios::app);

	if (!streamOut.is_open())
	{
		cout << "\nCannot open file to addition!\n";
		system("pause");
		exit(1);
	}
	streamOut << "\nSorted array!\n";
	for (int i = 0; i < n; i++)
	{
		streamOut.width(5);
		streamOut << arr[i];
	}
	streamOut.close();
}

char * FromFile(char * fileName)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}

	int count = ContentsFile(fileName);
	char* string = new char[count];
	streamIn.getline(string, 256);

	streamIn.close();
	return string;
}
