#pragma once
#ifdef MATRIXLIB_EXPORTS
#define MATRIXLIB_API __declspec(dllexport) 
#else
#define MATRIXLIB_API __declspec(dllimport) 
#endif

namespace Math
{
	MATRIXLIB_API double SinTaylor(double, double);
	MATRIXLIB_API double ** AllocateMemory(int);
	MATRIXLIB_API void DisplayMatrix(double**, int);
	MATRIXLIB_API void FreeMemory(double**, int);
	MATRIXLIB_API void InitMatrix(double**, int);
	MATRIXLIB_API void InitMatrixSinTaylor(double**, int);
	MATRIXLIB_API double CompareMatrixes(double**, double**, int);
}