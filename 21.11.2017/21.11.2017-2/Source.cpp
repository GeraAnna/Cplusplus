#include <iostream>

using namespace std;
void toUpper(int array []);
int stringLength(int array[]);
bool isLowerAlphabet(char);
bool equals(char array[], char array2[]);

int main()
{
	const int N = 100;
	int leftarray[N], rightarray[N];
	cout << "Enter first string: ";
	cin >> rightarray;
	cout << "Enter second string: ";
	cin >> leftarray;
	toUpper(rightarray);
	toUpper(leftarray);
	cout << leftarray << endl << rightarray << endl;
	if (equals(leftarray, rightarray))
		cout << "Strings are equal" << endl;
	else cout << "Strings are not equal" << endl;
	system("pause");
}

int stringLength(int array[])
{
	int i = 0;
	while (array[i])
	{
		i++;
	}
	return i;
}

bool isLowerAlphabet(char sim)
{
	return(sim >= 'a' && sim <= 'z');
}

void toUpper(int  array[])
{
	int n = stringLength(array[i]);
	for (int i = 0; i < n; i++)
	{
		if (isLowerAlphabet(array[i]))
		{
			array[i] = array[i] - ('a' - 'A');
		}
	}
}

bool equals(char array[], char array2[])
{
	int n = stringLength(array[]), l = stringLength(array2[]);
	if (n != l) return false;
	for (int i = 0; i < n; i++)
	{
		if (array[i] != array2[i]) return false;
	}
	return true;
}