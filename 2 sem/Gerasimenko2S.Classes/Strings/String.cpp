#include "String.h"
#include <stdexcept>



ostream & operator<<(ostream & stream, const String & string)
{
	return stream << string.GetString();
}

istream & operator>>(istream & stream, String & string)
{
	char  str[279];

	stream >> str;
	string = str;

	return stream;
}

String::String(const char * string)
{
	SetString(string);
}


char * String::GetString() const
{
	char * str = new char[CountSymbols() + 1];
	strcpy(str, string);
	return str;
}

int String::CountSymbols() const
{
	return strlen(this->string);
}

String String::operator+(const String & string)
{
	char * str = new char[this->CountSymbols() + string.CountSymbols() + 1];

	strcpy(str, "");
	strcpy(str, this->GetString());
	strcat(str, string.GetString());

	return String(str);
}

const String & String::operator=(const String & string)
{
	if (this->string != string.string)
	{
		strcpy(this->string, string.GetString());
		return *this;
	}
	else return *this;
}

bool String::operator==(const String & string) const
{
	return strcmp(this->GetString(), string.GetString()) == 0;
}

inline char & String::operator[](int i)
{
	return string[i];
}

void String::SetString(const char * string)
{
	if (string == nullptr)
	{
		throw std::invalid_argument("");
	}

	if (flag == true)
	{
		delete[]this->string;
	}
	this->string = AllocateMemory(string);

	flag = true;

	strcpy(this->string, string);
}

char* String::AllocateMemory(const char * string)
{
	if (string == nullptr)
	{
		throw std::invalid_argument("String can't be null");
	}

	return new char[strlen(string) + 1];
}

String::String(const String & string)
{
	this->SetString(string.GetString());
}

String::~String()
{
	delete[] string;
}
