#pragma once
char** ObtainWords(char * source, int & n);
void DisplayWords(char** words, int n);
void FreeHeap(char** words, int n);
void FindMaxAndMinWords(char** words, int n, int &max, int &min);
char* FindMoreMaxAndMin(char** words, int n, int max, int min);