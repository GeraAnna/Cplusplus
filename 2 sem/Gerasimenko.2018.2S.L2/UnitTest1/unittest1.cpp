#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\MatrixLib\MatrixLib.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		/*TEST_METHOD(CompareMatrixes)
		{*/
		//	//Arrange
		//	int n = 3;

		//	double** matrix = Math::AllocateMemory(n);
		//	double** matrixeps = Math::AllocateMemory(n);

		//	for (int i = 0; i < n; i++)
		//	{
		//		for (int j = 0; j < n; j++)
		//		{
		//			matrix[i][j] = i + j;
		//		}
		//	}


		//	double t = 10;
		//	for (int i = 0; i < n; i++)
		//	{
		//		t = t / 2;
		//		for (int j = 0; j < n; j++)
		//		{
		//			matrix[i][j] = i + j + t;
		//		}
		//	}
		//	double expected = t;
		//	//Act
		//	double actual = Math::CompareMatrixes(matrix, matrixeps, n);

		//	//Assert

		//	Assert::AreEqual(expected, actual);

		//	for (int i = 0; i < n; i++)
		//	{
		//		delete[] matrix[i];
		//	}

		//	delete[] matrix;

		//	for (int i = 0; i < n; i++)
		//	{
		//		delete[] matrixeps[i];
		//	}

		//	delete[] matrixeps;
		//}


		TEST_METHOD(SinTaylor)
		{
			double tolerance = 0.000001;
			double x = 0.127;
			double expected = sin(x);

			//Act
			double actual = Math::SinTaylor(x, tolerance);

			//Assert
			Assert::IsTrue(fabs(expected - actual) < tolerance);
			//or
			Assert::AreEqual(expected, actual, tolerance, L"Test failed");
		}

		TEST_METHOD(SinTaylor2)
		{
			double tolerance = 0.0001;
			double x = 0.5;
			double expected = sin(x);

			//Act
			double actual = Math::SinTaylor(x, tolerance);

			//Assert
			Assert::IsTrue(fabs(expected - actual) < tolerance);
			//or
			Assert::AreEqual(expected, actual, tolerance, L"Test failed");
		}
	};
}