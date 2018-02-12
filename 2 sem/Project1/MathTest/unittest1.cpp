#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\MathLib.h"
#include <iostream>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange

			const int N = 5;
			int array[N] = { 3, 6, 7, 98, 12 };
			bool arrayExp[N] = { true, false, true, false, false };

			//Act
			for (int i = 0; i < N; i++)
			{
				bool ret = Math::IsPrimeNumber(array[i]);

				//Assert
				Assert::IsTrue(ret == arrayExp[i]);
			}
		}


//		TEST_METHOD(TestMethod2)
//		{
//			//Arrange
//			int n = 7;
//			bool exp = false;
//			//Act
//			bool ret = Math::IsPrimeNumber(n);
//
//			//Assert
//			Assert::IsTrue(ret == exp);
//		}
//
//		TEST_METHOD(TestMethod3)
//		{
//			//Arrange
//			int n = 7;
//			bool exp = false;
//			//Act
//			bool ret = Math::IsPrimeNumber(n);
//
//			//Assert
//			Assert::IsTrue(ret == exp);
//		}
	};
}