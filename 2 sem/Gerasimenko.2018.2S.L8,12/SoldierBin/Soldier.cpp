#include "Soldier.h"
#include <iostream>

using namespace std;

Soldier::Soldier(char *, char *, char *, int, char *, char *, char *, char *, char*, int, int, char *, int, char *, int, char *, char *)
{
	cout << "Constructor works!" << endl;

	this->SetSurname(surname);
	this->SetFirsName(firstname);
	this->SetSecondName(secondname);
	this->SetAdress(index, country, region, district, city, street, house, flat);
	this->SetNationality(nationality);
	this->SetPosition(position);
	this->SetRank(rank);
}

Soldier::~Soldier()
{
	cout << "Destructor works!" << endl;
	delete[] surname;
	delete[] firstname;
	delete[] secondname;
	delete[] country;
	delete[] city;
	delete[] region;
	delete[] district;
	delete[] street;
	delete[] nationality;
	delete[] position;
	delete[] rank;
}

void Soldier::SetFirsName(char * firstname)
{
	if (firstname == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->firstname = AllocateMemory(firstname);
	strcpy(this->firstname, firstname);
}

void Soldier::SetSecondName(char * secondname)
{
	if (secondname == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->secondname = AllocateMemory(secondname);
	strcpy(this->secondname, secondname);
}

void Soldier::SetSurname(char * surname)
{
	if (surname == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->surname = AllocateMemory(surname);
	strcpy(this->surname, surname);
}

void Soldier::SetAdress(int index, char * country, char * region, char * district, char* city, char * street, int house, int flat) 
{
	SetIndex(index);
	SetCountry(country);
	SetRegion(region);
	SetDistrict(district);
	SetCity(city);
	SetStreet(street);
	SetHouseNumber(house);
	SetFlatNumber(flat);
}

void Soldier::SetNationality(char * nationality)
{
	if (nationality == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->nationality = AllocateMemory(nationality);
	strcpy(this->nationality, nationality);
}

void Soldier::SetDateOfBirth(int year, char * month, int day)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
}

void Soldier::SetPosition(char * position)
{
	if (position == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->position = AllocateMemory(position);
	strcpy(this->position, position);
}

void Soldier::SetRank(char * rank)
{
	if (rank == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->rank = AllocateMemory(rank);
	strcpy(this->rank, rank);
}

void Soldier::SetIndex(int index)
{
	if (index <= 0)
	{
		throw invalid_argument("Index can not be less then zero!");
	}
	this->index = index;
}

void Soldier::SetCountry(char * country)
{
	if (country == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->country = AllocateMemory(country);
	strcpy(this->country, country);
}

void Soldier::SetRegion(char * region)
{
	if(region == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->region = AllocateMemory(region);
	strcpy(this->region, region);
}

void Soldier::SetDistrict(char * district)
{
	if(district == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->district = AllocateMemory(district);
	strcpy(this->district, district);
}

void Soldier::SetCity(char * city)
{
	if (city == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->city = AllocateMemory(city);
	strcpy(this->city, city);
}

void Soldier::SetStreet(char * street)
{
	if (street == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->street = AllocateMemory(street);
	strcpy(this->street, street);
}

void Soldier::SetHouseNumber(int house)
{
	if (house <= 0)
	{
		throw invalid_argument("House number can not be less then zero!");
	}
	this->house = house;
}

void Soldier::SetFlatNumber(int flat)
{
	if (flat <= 0)
	{
		throw invalid_argument("House number can not be less then zero!");
	}
	this->flat = flat;
}

void Soldier::SetYear(int year)
{
	if (year <= 0)
	{
		throw invalid_argument("Year can not be less then zero!");
	}
	this->year = year;
}

void Soldier::SetMonth(char * month)
{
	if (month == nullptr)
	{
		throw invalid_argument("Name can not be empty!");
	}

	this->month = AllocateMemory(month);
	strcpy(this->month, month);
}

void Soldier::SetDay(int date)
{
	if (date <= 0)
	{
		throw invalid_argument("Date can not be less then zero!");
	}
	this->date = date;
}

char * Soldier::GetFirstName() const
{
	return firstname;
}

char * Soldier::GetSecondName() const
{
	return secondname;
}

char * Soldier::GetSurname() const
{
	return surname;
}

void Soldier::GetAddress(int, char *, char *, char *, char *, char *, int, int) const
{
	GetIndex();
	GetCountry();
	GetRegion();
	GetDistrict();
	GetCity();
	GetStreet();
	GetHouseNumber();
	GetFlatNumber();
}

char * Soldier::GetNationality() const
{
	return nationality;
}

void Soldier::GetDateOfBirth(int, char *, int) const
{
	GetYear();
	GetMonth();
	GetDay();
}

char * Soldier::GetPosition() const
{
	return position;
}

char * Soldier::GetRank() const
{
	return rank;
}

int Soldier::GetIndex() const
{
	return index;
}

char * Soldier::GetCountry() const
{
	return country;
}

char * Soldier::GetRegion() const
{
	return region;
}

char * Soldier::GetDistrict() const
{
	return district;
}

char * Soldier::GetCity() const
{
	return city;
}

char * Soldier::GetStreet() const
{
	return street;
}

int Soldier::GetHouseNumber() const
{
	return house;
}

int Soldier::GetFlatNumber() const
{
	return flat;
}

int Soldier::GetYear() const
{
	return year;
}

char * Soldier::GetMonth() const
{
	return month;
}

int Soldier::GetDay() const
{
	return date;
}

void Soldier::EnterSoldier()
{
	const int N = 256;
	char surname[N] = "", firstname[N] = "", secondname[N] = "", country[N] = "", region[N] = "", district[N] = "", city[N] = "", street[N] = "", nationality[N] = "", position[N] = "", rank[N] = "", month[N] = "";
	int index, house, flat, year, day;
	cout << "Enter the surname: ";
	cin.ignore();
	cin.getline(surname, N, '\n');
	cout << "Enter the first name: ";
	cin.getline(firstname, N, '\n');
	cout << "Enter the second name: ";
	cin.getline(secondname, N, '\n');
	cout << "Enter nationality: ";
	cin >> nationality;
	cout << "Enter the country: ";
	cin.ignore();
	cin.getline(country, N, '\n');
	cout << "Enter the region: ";
	cin.getline(region, N, '\n');
	cout << "Enter the district: ";
	cin.getline(district, N, '\n');
	cout << "Enter the city: ";
	cin.getline(city, N, '\n');
	cout << "Enter index of the city: ";
	cin >> index;
	cout << "Enter the street: ";
	cin.ignore();
	cin.getline(street, N, '\n');
	cout << "Enter number of the house: ";
	cin >> house;
	cout << "Enter number of the flat: ";
	cin >> flat;
	cout << "Enter the year of birth: ";
	cin >> year;
	cout << "Enter the month of birth: ";
	cin.getline(month, N, '\n');
	cout << "Enter the day of birth: ";
	cin >> date;
	cout << "Enter the rank: ";
	cin.getline(rank, N, '\n');
	cout << "Enter the position: ";
	cin.getline(position, N, '\n');
}

void Soldier::DisplaySoldier()
{
	cout << endl << this->surname << " " << this->firstname << " " << this->secondname << ", \t";
	cout.precision(3);
	cout << this->index << " , " << this->country << " , " << this->city << " , " << this-> region << " , " << this->district << " , " << this->street << " , " << this->house << " , " << this->flat << " ." << endl;
	cout << "/t" << this->nationality << endl;
	cout << "/t" << this->position << endl;
	cout << "/t" << this->rank << endl;
	cout << "/t Date of birth: " << this->date << " " << this->month << " " << this->year << endl;
}

char * Soldier::AllocateMemory(char * n)
{
	if (n == nullptr)
	{
		throw std::invalid_argument("Name can not be empty!");
	}

	return new char[strlen(n) + 1];
}

int * Soldier::AllocateMemory(int n)
{
	if (n <= 0)
	{
		throw std::invalid_argument("Dimension of array can not be negative or zero!");
	}

	return new int[n];
}
