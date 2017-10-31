#include <iostream>



using namespace std;
main()
{
	int i = 5, s = 0;
	for (; i > 0; s += --i);
	{
		cout << " s = " << s << endl;
	}
	{
		cout << " i = " << i;
	}
	return 0;
}
