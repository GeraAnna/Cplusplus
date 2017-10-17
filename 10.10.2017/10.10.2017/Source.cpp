#include <iostream>

using namespace std;

double eps, x;

double difference(double eps, double x);

int main()

{

	cin >> eps >> x;

	cout << difference(eps, x);

	system("pause");

	return 0;





}

double difference(double eps, double x)

{

	double yone, diff, ytwo;

	yone = diff = ytwo = 1;

	int i = 1;

	for (; diff > eps; i++)

	{

		ytwo = (0.5*(yone + (x / yone)));

		diff = fabs(ytwo - yone);

		yone = ytwo;

	}

	cout << i << endl;

	return diff;



}