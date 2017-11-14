#include <iostream>

using namespace std;

void Counter(long long number, int &less, int &more, int &equal);
long long Compare(long long number, int less, int more, int equal);


int main()
{
	long long number;
	int e, m, l;
	cout << "Enter number:" << endl;
	cin >> number;
	Counter(number, e, m, l);
	long long k = Compare(number, e, m, l);
	cout << k << endl;

	system("pause");

	return 0;
}

long long Compare(long long number, int less, int more, int equal)
{
	if (less > 0 && more == equal == 0)
		cout << "Strict waning" << endl;
	else
		if (more > 0 && less == equal == 0)
			cout << "Strict ascending" << endl;
		else
			if (equal > 0 && less == more == 0)
				cout << "Monotonous" << endl;
			else
				if (more > 0 && equal > 0 && less == 0)
					cout << "Ascending" << endl;
				else
					if (less > 0 && equal > 0 && more == 0)
						cout << "Waning" << endl;
					else
						cout << "Unordered" << endl;
	return 1;
}

void Counter(long long number, int &less, int &more, int &equal)
{
	int prev = number % 10;
	int next;
	less = more = equal;
	while (number)
	{
		next = number % 10
			if (prev == next)
				equal++;
			else
				if (prev > next)
					less++;
				else
					more++;
		prev = number;
		number / 10;
	}
}