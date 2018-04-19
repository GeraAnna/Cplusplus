#pragma once
#include <iostream>

using namespace std;

class String
{
	friend ostream& operator<<(ostream&, const String&);
	friend istream& operator>>(istream&, String&);
public:
	String(const char*);
	String(const String &);
	~String();
	char* GetString() const;
	int CountSymbols()const;
	String operator+(const String&);
	const String &operator=(const String &);
	bool operator==(const String&) const;
	char &operator[](int);
private:
	char* string;
	bool flag;
	void SetString(const char*);
	static char* AllocateMemory(const char*);
};