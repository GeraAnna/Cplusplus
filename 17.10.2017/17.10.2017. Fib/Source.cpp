#include<iostream>
using namespace std;

main()
{
	
	int cache1 = 1;
	int cache2 = 1;
	int cache3;

	for (int i = 2; cache3 <= 100; i++) 
	{
		cache3 = cache1 + cache2; 
		cache1 = cache2;
		cache2 = cache3;
	}

	cout << cache3;
	system("pause");
	return 0;
}