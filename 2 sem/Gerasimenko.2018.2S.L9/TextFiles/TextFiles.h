#pragma once
#ifdef TEXTFILES_EXPORTS
#define TEXTFILES_API __declspec(dllexport) 
#else
#define TEXTFILES_API __declspec(dllimport) 
#endif

namespace Textfiles
{
	TEXTFILES_API void CreateFile(char* , int);
	TEXTFILES_API int ContentsFile(char*);
	TEXTFILES_API int* InitArray(char*, int);
	TEXTFILES_API void AddFile(char*, int*, int); 
	TEXTFILES_API void InitArray(int * const a, int n);
	TEXTFILES_API int * AllocateMemory(int n);
	TEXTFILES_API void DisplayArray(const int * a, int n);
	TEXTFILES_API void NewArray(int* a, int* na, int &n);
	TEXTFILES_API void DeleteAndCopyElements(int* a, int *b, int &n);
	TEXTFILES_API void BubbleSort(int* a, int* b, int n);
	TEXTFILES_API void Swap(int* a, int* b);
	TEXTFILES_API void CountDif(int* a, int* b, int n);
	TEXTFILES_API void DeleteElementsFrom(int *a, int &n, int from);
}