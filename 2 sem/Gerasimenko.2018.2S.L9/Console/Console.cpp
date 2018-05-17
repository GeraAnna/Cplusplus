// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"../TextFiles/TextFiles.h"

using namespace std;
using namespace Textfiles;

int main()
{
	const int N = 30;
	char fileName[N] = "";
	cout << "Enter the name of file: ";
	cin.getline(fileName, N, '\n');
	int n;
	cout << "Enter count of th numbers:" << endl;
	cin >> n;
	system("cls");
	CreateFile(fileName, n);
	int count = ContentsFile(fileName);
	int* array = InitArray(fileName, count);
	int* na = AllocateMemory(count);
	NewArray(array, na, count);
	DeleteAndCopyElements(array, na, count);
	BubbleSort(array, na, count);
	CountDif(array, na, count);
	int from=0;
	DeleteElementsFrom(array, count, from);
	AddFile(fileName, array, count);
	return 0;
}

