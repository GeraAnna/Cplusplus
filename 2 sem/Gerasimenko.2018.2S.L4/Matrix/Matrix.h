#pragma once
#ifdef MATRIX_EXPORTS
#define MATRIX_API __declspec(dllexport) 
#else
#define MATRIX_API __declspec(dllimport) 
#endif

namespace Math
{
	MATRIX_API int ** AllocateMemory(int, int* );
	MATRIX_API void InitMatrix(int**, int, int*);
	MATRIX_API void FreeMemory(int**, int);
	MATRIX_API void DisplayMatrix(int**, int, int*);
	MATRIX_API void Exception1(int);
	MATRIX_API void Exception2(int**, int*);
	MATRIX_API int* AllocateMemory(int);
	MATRIX_API void SwapArray(int* &x, int* &y);
	MATRIX_API void SwapElements(int&, int&);
	MATRIX_API void BubbleSort(int**, int, int*);
}