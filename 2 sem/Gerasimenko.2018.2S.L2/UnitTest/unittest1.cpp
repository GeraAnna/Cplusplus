#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\MatrixLib\MatrixLib.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Math;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CompareMatrixes)
		{
			//Arrange
			int n = 3;

			double** matrix = Math::AllocateMemory(n);
			double** matrixeps = Math::AllocateMemory(n);
			
			for (int i = 0; i < n; i++)
			{
				**(matrix + i) = i;
			}
			
			
			double t;
			for (int i = 0; i < n; i++)
			{
				t+= 0.2;
					**(matrixeps) = t + i;
			}
			double expdif = 1.8;
			//Act
			double dif= Math::CompareMatrixes(matrix, matrixeps, n);

			//Assert

			Assert::AreEqual(expdif, dif);

					for (int i = 0; i < n; i++)
					{
						delete[] matrix[i];
					}

				delete[] matrix;

				for (int i = 0; i < n; i++)
				{
					delete[] matrixeps[i];
				}

				delete[] matrixeps;
		}

	};
}