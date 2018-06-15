#include<iostream>
#include<cstring>
#include"Numbers.h"

using namespace std;

Numbers::Numbers(int numberInDecimalSystem, int ultimateSystem)
{
	this->SetNumberInDecimalSys(numberInDecimalSystem);
	this->SetUltimateSystem(ultimateSystem);
	this->SetNumberInUltimateSys();
}

void Numbers::SetUltimateSystem(int ultimateSystem)
{
	this->ultimateSystem = ultimateSystem;
}

void Numbers::SetNumberInDecimalSys(int numberInDecimalSystem)
{
	this->numberInDecimalSystem = numberInDecimalSystem;
}

int Numbers::GetUltimateSystem()
{
	return this->ultimateSystem;
}

char* Numbers::GetNumberInUltimateSys()
{
	return this->numberInUltimateSystem;
}

int Numbers::GetNumberInDecimalSys()
{
	return this->numberInDecimalSystem;
}

void Numbers::DisplayNumber()
{
	cout << GetNumberInDecimalSys() << ", \t";
	cout << GetUltimateSystem() << ", \t";
	cout << GetNumberInUltimateSys() << "." << endl;
}

void Numbers::EnterNumber()
{

}

void Numbers::SetNumberInUltimateSys()
{
	TransformToSys();
	// strcpy(numberInUltimateSystem, temp);
}

void Numbers::TransformToSys()
{
	char * performance = new char[LengthOfNumberInUltimateSys()];
	int d = GetNumberInDecimalSys();
	int u = GetUltimateSystem();
	int i = 0;
	for (; d; i++)
	{
		performance[i] = IntToChar(d % u);
		d /= u;
	}
	performance[i] = '\0';
	ReverseStr(performance);
	strcpy(numberInUltimateSystem, performance);
}

int Numbers::LengthOfNumberInUltimateSys()
{
	int d = GetNumberInDecimalSys();
	int u = GetUltimateSystem();
	int k = 0;
	for (int i = 0; d; i++)
	{
		k++;
		d /= u;
	}

	return k;
}

char Numbers::IntToChar(int n)
{
	char symbols[] = "0123456789ABCDEF";
	return symbols[n];
}

void Numbers::ReverseStr(char* performance)
{
	int n = strlen(performance);

	for (int i = 0; i < n/2; i++)
	{
		Swap(performance[i], performance[n - i - 1]);
	}
	//return performance;
}

void Numbers::Swap(char & a, char & b)
{
	char t = a;
	a = b;
	b = t;
}
