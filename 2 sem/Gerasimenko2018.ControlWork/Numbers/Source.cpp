#include"Numbers.h"
#include<iostream>
#include<fstream>
//#include <stdlib>
//#include <process>

using namespace std;

void CreateFile(char*, int );
int ContentsFile(char*);
void FromTextToClassToBin(char*, char*, int);
void DisplayFile(char*);
void SystemFun();
int InitNumbers(char*, int);
void InitFile(char*, Numbers);


int main()
{
	char fileNameTxt[N] = "File.txt";
	char fileNameBin[N] = "Filee";
	CreateFile(fileNameTxt, 15);
	int p = 0;
	cout << " Enter the ultimate system " ;
	cin >> p;
	FromTextToClassToBin(fileNameTxt, fileNameBin, p);
	DisplayFile(fileNameBin);
	system("pause");
	return 0;
}


void CreateFile(char * fileNameTxt, int n)
{
	ofstream streamOut(fileNameTxt);
	//ofstream streamOut;
	//streamOut.open(fileNameTxt, ios::out);

	if (!streamOut.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}

	system("cls");
	for (int i = 1; i <= n; i++)
	{
		//cout << "enter value # " << i << " : ";
		//cin >> temp;
		int temp = n - i;
		streamOut.width(5);
		streamOut << temp;
		//cout << temp << endl;
	}

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

	int count = 0, term;

	while (!streamIn.eof())
	{
		streamIn >> term;
		count++;
	}
	streamIn.close();
	return count;
}

void FromTextToClassToBin(char * fileNameTxt, char * fileNameBin, int ultimateSystem)
{
	int n = ContentsFile(fileNameTxt);

	for (int i = 1; i < n+1; i++)
	{
		int tempNumber = InitNumbers(fileNameTxt, i);
		if (tempNumber > 0)
		{
			Numbers number(tempNumber, ultimateSystem);
			InitFile(fileNameBin, number);
		}
	}

}

void DisplayFile(char * fileName)
{
	ifstream streamIn(fileName, ios::binary);
	if (!streamIn.is_open())
	{
		cout << "Can't open file to read!";
		SystemFun();
		return;
	}
	int bufSize = sizeof(Numbers);
	 Numbers* num = new Numbers;
	while (streamIn.read((char*)num, bufSize))
	{
		num->DisplayNumber();
	}
	streamIn.close();
}

void SystemFun()
{
	cout << endl;
	system("pause");
	system("cls");
}

int InitNumbers(char* fileNameTxt, int n)
{
	ifstream streamIn(fileNameTxt);
	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}
	int num = 0;
	for(int i = 0; i < n; i++)
		streamIn >> num;
	streamIn.close();
	return num;
}

void InitFile(char* fileNameBin, Numbers num)
{
	ofstream streamOut(fileNameBin,ios::app | ios::beg | ios::binary);
	if (!streamOut.is_open())
	{
		cout << "Can't open file to write!";
		SystemFun();
		return;
	}
	int bufSize = sizeof(Numbers);
	{
		streamOut.write((char*)&num, bufSize);
	}
	streamOut.close();
}


