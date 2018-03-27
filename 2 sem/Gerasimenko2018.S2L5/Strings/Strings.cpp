// Strings.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include<iostream>
#include"Strings.h"
#include<stdexcept>

char** Strings::ObtainWords(char * source, int & n)
{
	char* copy = new char[strlen(source) + 1];
	strcpy(copy, source);

	char** words = new char*[strlen(copy) / 2];
	n = 0;
	char* symbols = "	1234567890-=!@#$%^&*()_+{}|][:;'<>?/., \x22";
	char* pword = strtok(copy, symbols);
	words[n] = new char[strlen(pword) + 1];
	strcpy(words[n], pword);

	n++;
	while (pword)
	{
		pword = strtok('\0', symbols);
		if (pword)
		{
			words[n] = new char[strlen(pword) + 1];
			strcpy(words[n], pword);
			n++;
		}
	}

	delete[] copy;
	return words;
}


void Strings::DisplayWords(char** words, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << (i + 1) << ". " << words[i] << std::endl;
}


void Strings::FreeHeap(char** words, int n)
{
	for (int i = 0; i < n; i++)
		delete[] words[i];
	delete[] words;
}



void Strings::FindMaxAndMinWords(char** words, int n, int &max, int &min)
{
	max = 0;
	min = strlen(words[0]);
	for (int i = 0; i < n; i++)
	{
		if (strlen(words[i]) > max)
		{
			max = strlen(words[i]);
		}
		if (strlen(words[i]) < min)
		{
			min = strlen(words[i]);
		}
	}
}

char* Strings::FindMoreMaxAndMin(char** words, int n, int max, int min)
{
	int sum = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (strlen(words[i]) == max || strlen(words[i]) == min)
		{
			sum += strlen(words[i]);
			num++;
		}
	}
	char* sortedwords = new char[sum + num];
	strcpy(sortedwords, "");

	for (int i = 0; i < n; i++)
	{
		if (strlen(words[i]) == max || strlen(words[i]) == min)
		{
			strcat(sortedwords, words[i]);
			strcat(sortedwords, " ");
		}
	}

	return sortedwords;
}