// TextFiles.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include<iostream>
#include"TextFiles.h"
#include<fstream>
//#include <stdlib>
//#include <process>

using namespace std;

TEXTFILES_API void Textfiles::CreateFile(char * fileName, int n)
{
	//ofstream streamOut(fileName);
	ofstream streamOut;
	streamOut.open(fileName, ios::out);

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

TEXTFILES_API int Textfiles::ContentsFile(char * fileName)
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

TEXTFILES_API int * Textfiles::InitArray(char * fileName, int n)
{
	ifstream streamIn(fileName);
	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		streamIn >> arr[i];
	streamIn.close();
	return arr;
}

TEXTFILES_API void Textfiles::AddFile(char * fileName, int * array, int n)
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
		streamOut << array[i];
	}
	streamOut.close();
}

TEXTFILES_API void Textfiles::InitArray(int * const a, int n)
	{
		if (n <= 0)
		{
			throw std::out_of_range("Dimension of array must be more zero!");
		}

		if (a == nullptr)
		{
			throw std::invalid_argument("Argument is null!");
		}

		for (int* p = a; p < a + n; p++)
		{
			*p = rand() % 100;
		}
	}

TEXTFILES_API	int * Textfiles::AllocateMemory(int n)
	{
		if (n <= 0)
		{
			throw std::out_of_range("Dimension of array must be more zero!");
		}

		int* a = new int[n];
		return a;
}

TEXTFILES_API void Textfiles::DisplayArray(const int * a, int n)
{
	if (n <= 0)
	{
		throw std::out_of_range("Dimension of array must be more zero!");
	}

	if (a == nullptr)
	{
		throw std::invalid_argument("Argument is null!");
	}

	for (const int* p = a; p < a + n; p++)
	{
		std::cout << *p << " ";
	}
}

TEXTFILES_API void Textfiles::NewArray(int* a, int* na, int &n)
	{
			int s = 0;
			for (int* p = a + 1; p < a + n; p += 2)
		{
				if ((*p < 0) && (*p % 2 != 0))
			{
					na[s] = *p;
					s++;
			}
		}
	}

TEXTFILES_API void Textfiles::DeleteAndCopyElements(int* a,int* b, int &n)
		{
			int k = 0;
			for (int* p = a + 1; p < a + n; p += 2)
			{
				if ((*p < 0) && (*p % 2 != 0))
				{
					b[k] = *p;
					k++;
					*p = 0;
				}
			}

			for (int i = 0; i < n;  i++)
			{
				if (a[i] == 0)
				{
					Textfiles::DeleteElementsFrom(a, n, i);
				}
			}
		}

TEXTFILES_API void Textfiles::DeleteElementsFrom(int *a, int &n, int from)
		{
			for (int i = from; i < n; i++)
			{
				a[i] = a[i + 1];
			}

			n--;
		}

TEXTFILES_API void Textfiles::CountDif(int* a, int* b, int n)
		{
		
			for (int i = 0; i < n; i++)
			{
				unsigned int count1 = 0;
				unsigned int count0 = 0;
				int num = a[i];
				if (num == 0)
					b[i] = -1;
				else 
				for (; num; num >>= 1)
				{
					if ((num & 1)==1)
					{
						count1++;
					}
					else
					{
						count0++;
					}
				}
				b[i] = count1 - count0;
			}
		}
	
TEXTFILES_API void Textfiles::BubbleSort(int* a, int* b, int n)
		{
			for (int i = n - 1; i >= 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (b[j] < b[j + 1])
					{
						Swap(a + j, a + j + 1);
						Swap(b + j, b + j + 1);
					}
				}
			}
		}

TEXTFILES_API void Textfiles::Swap(int* a, int* b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		} 