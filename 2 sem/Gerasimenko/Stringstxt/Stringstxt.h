#pragma once
#ifdef STRINGSTXT_EXPORTS
#define STRINGSTXT __declspec(dllexport) 
#else
#define STRINGSTXT __declspec(dllimport) 
#endif

namespace Stringstxt
{
	STRINGSTXT_API char** ObtainWords(char * source, int & n);
	STRINGSTXT_API void DisplayWords(char** words, int n);
	STRINGSTXT_API void FreeHeap(char** words, int n);
	STRINGSTXT_API void FindMaxAndMinWords(char** words, int n, int &max, int &min);
	STRINGSTXT_API char* FindMoreMaxAndMin(char** words, int n, int max, int min);
}