#include<iostream>
using namespace std;


int main()
{
	int m;
	cout << " Enter your number " << endl;
	cin >> m;
	switch (m)
	{
	case 1:
	case 2:
	case 3:
		cout << "Winter" << endl;
		break;
	case 4:
	case 5:
	case 6:
		cout << "Spring" << endl;
		break;
	case 7:
	case 8:
	case 9:
		cout << "Summer" << endl;
		break;
	case 10:
	case 11:
	case 12:
		cout << "Autumn" << endl;
		break;
	default:
		cout << "Error" << endl;

	}
	system("pause");
}