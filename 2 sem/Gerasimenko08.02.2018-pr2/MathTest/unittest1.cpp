#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Gerasimenko08.02.2018-pr2\Mathlib.h"
#include<iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
		int n = 7;
		bool exp = false;
			//Act
		bool ret = Math::IsPolindrome(n);
			
			//Assert
		Assert::IsTrue(ret == exp);
		}

		TEST_METHOD(TestMethod2)
		{
			//Arrange
			int n = 565;
			bool exp = false;
			//Act
			bool ret = Math::IsPolindrome(n);

			//Assert
			Assert::IsTrue(ret == exp);
		}
	};
}