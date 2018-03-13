#include "stdafx.h"
#include "CppUnitTest.h"
#include"..\MathLib\MathLib.h"
#include<iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:


		TEST_METHOD(DeleteAndCopyElementsTest1)
		{
			//Arrange
			int n = 4;
			int* InArray = new int[n] {11, -3, 4, -5};
			int* OutArray = new int[2]{};
			int* ExpNewArray = new int[n] {11, 4};

			//Act
			Math::DeleteAndCopyElements(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], InArray[i]);
			}

			delete[] InArray;
			delete[] ExpNewArray;
		}


		TEST_METHOD(DeleteAndCopyElementsTest2)
		{
			//Arrange
			int n = 8;
			int* InArray = new int[n] {11, -3, 4, -5, 73, -16, 65, -11};
			int* OutArray = new int[5]{};
			int* ExpNewArray = new int[n] {11, 4, 73, -16, 65};

			//Act
			Math::DeleteAndCopyElements(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], InArray[i]);
			}

			delete[] InArray;
			delete[] ExpNewArray;
		}

		TEST_METHOD(NewArrayTest1)
		{
			//Arrange
			int n = 8;
			int* InArray = new int[n] {9, 5, 156, -3, 11, 67, -6, -75};
			int* OutArray = new int[n] {};
			int* ExpNewArray = new int[n] {-3, -75};

			//Act
			Math::NewArray(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], OutArray[i]);
			}
			delete[] InArray;
			delete[] ExpNewArray;
		}

		TEST_METHOD(NewArrayTest2)
		{
			//Arrange
			int n = 8;
			int* InArray = new int[n] {37, -3, -52, -28, 110, -13, -6, -21};
			int* OutArray = new int[n] {};
			int* ExpNewArray = new int[n] {-3, -13, -21};

			//Act
			Math::NewArray(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], OutArray[i]);
			}
			delete[] InArray;
			delete[] ExpNewArray;

		}

		TEST_METHOD(CountDifTest1)
		{
			//Arrange
			int n = 4;
			int* InArray = new int[n] {0, 4, 6, 7};
			int* OutArray = new int[n];
			int* ExpNewArray = new int[n] {-1, -1, 1, 3};

			//Act
			Math::CountDif(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], OutArray[i]);
			}
			delete[] InArray;
			delete[] ExpNewArray;
		}

		TEST_METHOD(CountDifTest2)
		{
			//Arrange
			int n = 4;
			int* InArray = new int[n] {-5, 8, 2, 5};
			int* OutArray = new int[n];
			int* ExpNewArray = new int[n] {6, -2, 0, 1};

			//Act
			Math::CountDif(InArray, OutArray, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], OutArray[i]);
			}
			delete[] InArray;
			delete[] ExpNewArray;
		}

		TEST_METHOD(BubbleSortTest1)
		{
			//Arrange
			int n = 4;
			int* InArray = new int[n] {2, 4, 6, 7};
			int* InArray1 = new int[n] {0, -1, 1, 3};
			int* ExpNewArray = new int[n] {7, 6, 2, 4};
			int* ExpNewArray1 = new int[n] {3, 1, 0, -1};
			//Act
			Math::BubbleSort(InArray, InArray1, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], InArray[i]);
				Assert::AreEqual(ExpNewArray1[i], InArray1[i]);
			}
		}

		TEST_METHOD(BubbleSortTest2)
		{
			//Arrange
			int n = 4;
			int* InArray = new int[n] {3, 8, 2, 5};
			int* InArray1 = new int[n] {2, -2, 0, 1};
			int* ExpNewArray = new int[n] {3, 5, 2, 8};
			int* ExpNewArray1 = new int[n] {2, 1, 0, -2};
			//Act
			Math::BubbleSort(InArray, InArray1, n);

			//Assert
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(ExpNewArray[i], InArray[i]);
				Assert::AreEqual(ExpNewArray1[i], InArray1[i]);
			}
		}
	};
}