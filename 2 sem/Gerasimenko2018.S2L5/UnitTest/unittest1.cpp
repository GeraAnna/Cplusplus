#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Strings/Strings.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Strings;


namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char  source[] = "  Double hall-48/oil fill body Sun. Bubble;-09487 jail detective  ";
			int n = 256;
			char** String = ObtainWords(source, n);
			char words[] = "oil Sun detective";
			int max, min;
			FindMaxAndMinWords(String, n, max, min);
			char * sortedwords = FindMoreMaxAndMin(String, n, max, min);
			for (int i = 0; i < strlen(words); i++)
			{
				Assert::AreEqual(words[i], sortedwords[i]);
			}
		}

		TEST_METHOD(TestMethod2)
		{
			char  source[] = "  Doublehhhhhh hall-48/o fill body Sun. Bubble;-09487 jail detective  ";
			int n = 256;
			char** String = ObtainWords(source, n);
			char words[] = "Doublehhhhhh o";
			int max, min;
			FindMaxAndMinWords(String, n, max, min);
			char * sortedwords = FindMoreMaxAndMin(String, n, max, min);
			for (int i = 0; i < strlen(words); i++)
			{
				Assert::AreEqual(words[i], sortedwords[i]);
			}
		}

	};
}