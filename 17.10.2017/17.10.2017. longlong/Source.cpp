#include <iostream>

using namespace std;

int main()

{

	long long a;

	int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, digit, max = 0, min = 9;

	cout << "enter number" << endl;

	cout << "a=";

	cin >> a;

	while (a>0)

	{

		digit = a % 10;

		a /= 10;

		if (digit>max) max = digit;

		if (digit<min) min = digit;

		switch (digit)

		{

		case 0: a0++;

			break;

		case 1: a1++;

			break;

		case 2: a2++;

			break;

		case 3: a3++;

			break;

		case 4: a4++;

			break;

		case 5: a5++;

			break;

		case 6: a6++;

			break;

		case 7: a7++;

			break;

		case 8: a8++;

			break;

		case 9: a9++;

			break;

		}



	}

	cout << "0-" << a0 << endl;

	cout << "1-" << a1 << endl;

	cout << "2-" << a2 << endl;

	cout << "3-" << a3 << endl;

	cout << "4-" << a4 << endl;

	cout << "5-" << a5 << endl;

	cout << "6-" << a6 << endl;

	cout << "7-" << a7 << endl;

	cout << "8-" << a8 << endl;

	cout << "9-" << a9 << endl;

	cout << "max=" << max << endl;

	cout << "min" << min << endl;




	system("pause");
	return 0;

}