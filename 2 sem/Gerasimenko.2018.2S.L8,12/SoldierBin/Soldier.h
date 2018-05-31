#pragma once
#ifndef soldier_h
#define soldier_h

class Soldier
{
public:
Soldier(){}
Soldier(char*, char*, char*, int, char*, char*, char*, char*, char*, int, int, char*, int, char*, int, char*, char*);
~Soldier();

void SetFirsName(char*);
void SetSecondName(char*);
void SetSurname(char*);
void SetAdress(int, char*, char*, char*, char*, char*, int, int);
void SetNationality(char*);
void SetDateOfBirth(int, char*, int);
void SetPosition(char*);
void SetRank(char*);
void SetIndex(int);
void SetCountry(char*);
void SetRegion(char*);
void SetDistrict(char*);
void SetCity(char*);
void SetStreet(char*);
void SetHouseNumber(int);
void SetFlatNumber(int);
void SetYear(int);
void SetMonth(char*);
void SetDay(int);

char* GetFirstName() const;
char* GetSecondName() const;
char* GetSurname() const;
void GetAddress(int, char*, char*, char*, char*, char*, int, int) const;
char* GetNationality() const;
void GetDateOfBirth(int, char*, int) const;
char* GetPosition() const;
char* GetRank() const;
int GetIndex() const;
char* GetCountry() const;
char* GetRegion() const;
char* GetDistrict() const;
char* GetCity() const;
char* GetStreet() const;
int GetHouseNumber() const;
int GetFlatNumber() const;
int GetYear() const;
char* GetMonth() const;
int GetDay() const;

void DisplaySoldier();
void EnterSoldier();

private:
	char* surname;
	char* firstname;
	char* secondname;
	int index;
	char* country;
	char* region;
	char* district;
	char* city;
	char* street;
	int house;
	int flat;
	char* nationality;
	int year;
	int date;
	char* month;
	char* position;
	char* rank;
	
	char* AllocateMemory(char*);
    int* AllocateMemory(int);
};
#endif
