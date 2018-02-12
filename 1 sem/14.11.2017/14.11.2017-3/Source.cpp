#include <iostream>


using namespace std;

void DisplayArray(int array[], int n);
void EnterArray(int array[], int n);
void Counter(int array [], int n, int &less, int &more, int &equal);
void Compare(int array[], int &less, int &more, int &equal);

int main()
{
	int n;
	const int N = 100;
	int array[N] = { 0 };
	int less, more, equal;

	while (true)
	{
		cout << "Enter n <= " << N << endl;
		cin >> n;
		if (n >= 1 && n <= N)
		{
			break;
		}
		cout << "try again" << endl;
	}
	system("cls");
	EnterArray(array, n);
	DisplayArray(array, n);
	cout << endl;
	Counter(array, n, less, more, equal);
	Compare(array, less, more, equal);
	system("pause");

}



	void Counter(int array[], int n, int &less, int &more, int &equal)
	{
		less = more = equal=0;
		for (int i=0; i < n-1; i++)
		{
				if (array[i] == array[i + 1])
					equal++;
				else
					if (array[i] > array[i + 1])
						less++;
					else
						more++;
		}
	}

	void EnterArray(int array[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << " a[" << (i + 1) << "] = ";
			cin >> array[i];
		}
	}

	void DisplayArray(int array[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << array[i] << " ";
		}
	}

	void Compare(int array[], int &less, int &more, int &equal)
	{
		if ((less == 0) && (equal == 0))
			cout << "Elements of array compose strictly decreasing sequence" << endl;
		if ((less == 0) && (equal != 0))
			cout << "Elements of array compose decreasing sequence" << endl;
		if ((more == 0) && (equal == 0))
			cout << "Elements of array compose strictly increasing sequence" << endl;
		if ((more == 0) && (equal != 0))
			cout << "Elements of array compose increasing sequence" << endl;
		if ((more == 0) && (less == 0))
			cout << "Elements of array compose monotonic sequence" << endl;
		if (((more != 0) && (less != 0)) || ((equal != 0) && (less != 0)) || ((equal != 0) && (more != 0)))
			cout << "Elements of array compose unordered sequence" << endl;
	}