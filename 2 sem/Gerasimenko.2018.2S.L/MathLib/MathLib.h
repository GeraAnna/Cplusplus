#pragma once

#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport) 
#else
#define MATHLIB_API __declspec(dllimport) 
#endif

namespace Math
{
	MATHLIB_API void InitArray(int * const a, int n);
	MATHLIB_API int * AllocateMemory(int n);
	MATHLIB_API void DisplayArray(const int * a, int n);
	MATHLIB_API void NewArray(int* a, int* na, int &n);
	MATHLIB_API void DeleteAndCopyElements(int* a,int *b, int &n);
	MATHLIB_API void BubbleSort(int* a, int* b, int n);
	MATHLIB_API void Swap(int* a, int* b);
	MATHLIB_API void CountDif(int* a, int* b, int n);
	MATHLIB_API void DeleteElementsFrom(int *a, int &n, int from);
}