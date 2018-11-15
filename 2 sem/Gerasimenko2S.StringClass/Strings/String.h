#pragma once
#include <iostream>

using namespace std;

class String
{
	friend ostream& operator<<(ostream&, const String&);
	friend istream& operator>>(istream&, String&);
public:
	String() {};
	String(const char*);
	String(const String &);
	~String();
	char* GetString() const;
	int CountSymbols()const;
	String operator+(const String&);
	String& operator+=(const String&);
	const String &operator=(const String &);
	bool operator==(const String&) const;
	bool operator>(const String&) const;
	bool operator<(const String&) const;
	char &operator[](int);

	void EnterString();
	friend void DisplayString(String & string);
	friend char* ConCat(String string1, const String & string);
	char FindByIndex(int);
	friend bool ComparingStrings(String string1, const String & string);

private:
	char* string;
	bool flag;
	void SetString(const char*);
	static char* AllocateMemory(const char*);
};