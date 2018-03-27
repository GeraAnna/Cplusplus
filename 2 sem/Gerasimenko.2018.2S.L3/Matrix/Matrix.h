#pragma once

#ifdef MATRIX_EXPORTS
#define MATRIX_API __declspec(dllexport) 
#else
#define MATRIX_API __declspec(dllimport) 
#endif

namespace Math
{
	MATRIX_API int ** AllocateMemory(int);
	MATRIX_API void DisplayMatrix(int**, int);
	MATRIX_API void FreeMemory(int**, int);
	MATRIX_API void InitMatrix(int**, int);
	MATRIX_API int FindMaxUpElement(int**, int);
	MATRIX_API int FindMaxDownElement(int**, int);
	MATRIX_API int** NewMatrixAboveTheDioganal(int**, int**, int);
	MATRIX_API int** CopyMainDioganal(int**, int**, int);
	MATRIX_API int ** NewMatrixUnderTheDioganal(int**, int**, int);
}