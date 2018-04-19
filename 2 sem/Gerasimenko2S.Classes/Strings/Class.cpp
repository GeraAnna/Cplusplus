#include "String.h"
#include <iostream>

using namespace std;

int main()
{
	String str("flfbviufh;iu kjsoe rjlknfg;olj;sfnc ");
	cout << str << endl;
	String str1("south fdkh house hourse  humble");
	cout << str1 << endl;
	cout << str + str1 << endl;
	cout << (str == str1);
	system("pause");
	return 0;

}