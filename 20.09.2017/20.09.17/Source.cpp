#include<iostream>
using namespace std;


int main()
{
	int m;
	cout << " Enter your mark " << endl;
	cin >> m;
	switch (m)
	{
	case 1:
	case 2: 
		cout << "Was absent" << endl;
		break;
	case 3:
	case 4:
		cout << "Not satisfactorily" << endl;
		break;
	case 5:
	case 6:
		cout << "Satisfactorily" << endl;
		break;
	case 7:
	case 8:
		cout << "Good" << endl;
		break;
	case 9:
	case 10:
		cout << "Exellent" << endl;
		break;
	default:
		cout << "Error" <<endl;

	}
	system("pause");
}