#include "String.h"
#include <iostream>

using namespace std;


void SortMassive(String*, int);
int Menu();
String* CreateMassive(String*, int);
void Swap(String &, String &);
void DisplayMassive(String*, int);

int main()
{
	//String strin();//default constructor
	//String sstr("thanks!");//with parametr

	//Foo(sstr);
	//int Foo(String & name);
	String str1;
	String str2;



	int i, k, n;
	
	cout << "Enter string 1";
	
	cin >> str1;

	cout << "Enter string 2";
	
	cin >> str2;
	
	cout << "To create a massive enter the number of strings" << endl;
	
	cin >> n;
	

	String* string = new String[n];
	
	CreateMassive(string, n);

	cout << "MENU" << endl;
	cout << "/t" << "Things to do with strings: " << endl;

	enum { Add = 1, Compare, Display, FindByIndex, SortMassiv, DisplayMassiv, Exit };
	while (true)
	{
		int key = Menu();
		if (key == Exit)
			return 0;
		system("cls");
		switch (key)
		{
		case Add:
			cout<<(str1 + str2);
			break;

		case Compare:
			cout<<ComparingStrings(str1, str2);
			break;

		case Display:
			cout << "What do you want to display?(string 1--1/string 2--2/all -- 3" << endl;
			cin >> k;
			if (k == 1)
			{
				DisplayString(str1);
			}
			else if (k == 2)
			{
				DisplayString(str2);
			}
			else
			{
				DisplayString(str1);
				DisplayString(str2);
			}
			break;

		case FindByIndex:
			cout << "Enter Index " << endl;
			cin >> i;
			cout<<endl<<str1.FindByIndex(i);
			break;

		case SortMassiv:
			SortMassive(string, n);
			DisplayMassive(string, n);
			break;

		case DisplayMassiv:
			DisplayMassive(string, n);
			break;

		default:
			cout << "\nIncorrect input! Try again!";


			/*		String* string = new String[5];
					String str("Today is a good day!");
					cout << str << endl;
					String str3("Tomorrow will be also a good day!");
					cout << str1 << endl;
					cout << str + str3 << endl;
					cout << (str == str3) << endl;
					cout << (str += str3);*/
			system("pause");
			return 0;

		}
	}
}

void SortMassive(String* string, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (string[i] > string[i + 1])
		{
			Swap(string[i], string[i + 1]);
		}
	}
}


int Menu()
{
	int k;
	cout << "\n Enter the number - the mode of operations with strings:"
		"\n 1 - CONCAT STRINGS"
		"\n 2 - COMPARE STRINGS"
		"\n 3 - DISPLAY STRINGS"
		"\n 4 - FIND BY INDEX"
		"\n 5 - SORT MASSIVE"
		"\n 6 - DISPLAY MASSIVE"
		"\n 7 - EXIT\n";
	cin >> k;
	return k;
}

String* CreateMassive(String *string, int n)
{
	cout << "Enter strings:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> string[i];
		/*		char m[30];
				cin.getline(m, 29);
				string[i] =*new String(m);*/
	}
	return string;
}

void Swap(String & a, String & b)
{
	String temp = a;
	a = b;
	b = temp;
}

void DisplayMassive(String* string, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << string[i];
	}
}