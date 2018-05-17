#pragma once
#ifndef numbers_h
#define numbers_h

const int N = 33;
class Numbers 
{
public:
	Numbers(){}
	Numbers(int, int);
	~Numbers(){}
	int GetUltimateSystem();
	char* GetNumberInUltimateSys();
	int GetNumberInDecimalSys();
	void DisplayNumber();
	void EnterNumber();
private:
	void SetUltimateSystem(int);
	void SetNumberInDecimalSys(int);
	void SetNumberInUltimateSys(int);
	int ultimateSystem;
	int numberInDecimalSystem;
	char numberInUltimateSystem[N];

	char* TransformToSys();
	int LengthOfNumberInUltimateSys();
	char IntToChar(int);
	char* ReverseStr(char*);
	static void Swap(char&, char&);
};
#endif