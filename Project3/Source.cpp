#include <iostream>

using namespace std;

class Student
{
	char* number;
	char* city;
	char* country;
	char* name;
	char* surname;
	char* fathername;
	char* birthday;
	char* group;
	char* university;
public:
	Student()
	{
		this->number = nullptr;
		this->city = nullptr;
		this->country = nullptr;
		this->name = nullptr;
		this->surname = nullptr;
		this->fathername = nullptr;
		this->birthday = nullptr;
		this->group = nullptr;
		this->university = nullptr;
	}
	Student(const char* number, const char* city, const char* country, const char* name, const char* surname, const char* fathername, const char* birthday, const char* group, const char* university)
	{
		this->number = new char[strlen(number) + 1];
		strcpy_s(this->number, strlen(number) + 1, number);
		this->city = new char[strlen(city) + 1];
		strcpy_s(this->city, strlen(city) + 1, city);
		this->country = new char[strlen(country) + 1];
		strcpy_s(this->country, strlen(country) + 1, country);
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->surname = new char[strlen(surname) + 1];
		strcpy_s(this->surname, strlen(surname) + 1, surname);
		this->fathername = new char[strlen(fathername) + 1];
		strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
		this->birthday = new char[strlen(birthday) + 1];
		strcpy_s(this->birthday, strlen(birthday) + 1, birthday);
		this->group = new char[strlen(group) + 1];
		strcpy_s(this->group, strlen(group) + 1, group);
		this->university = new char[strlen(university) + 1];
		strcpy_s(this->university, strlen(university) + 1, university);
	}
	void Input()
	{
		this->number = new char[20];
		cout << "\nEnter your number: ";
		cin.getline(this->number, 19);
		this->city = new char[20];
		cout << "\nEnter your city: ";
		cin.getline(this->city, 19);
		this->country = new char[20];
		cout << "\nEnter your country: ";
		cin.getline(this->country, 19);
		this->name = new char[20];
		cout << "\nEnter your name: ";
		cin.getline(this->name, 19);
		this->surname = new char[20];
		cout << "\nEnter your surname: ";
		cin.getline(this->surname, 19);
		this->fathername = new char[20];
		cout << "\nEnter your fathername: ";
		cin.getline(this->fathername, 19);
		this->birthday = new char[20];
		cout << "\nEnter your birthday: ";
		cin.getline(this->birthday, 19);
		this->group = new char[20];
		cout << "\nEnter your group: ";
		cin.getline(this->group, 19);
		this->university = new char[20];
		cout << "\nEnter your university: ";
		cin.getline(this->university, 19);
	}
	void Print()
	{
		cout << "\n\nName: " << this->name;
		cout << "\nSurname: " << this->surname;
		cout << "\nFathername: " << this->fathername;
		cout << "\nBirthday: " << this->birthday;
		cout << "\nNumber: " << this->number;
		cout << "\nCity: " << this->city;
		cout << "\nCountry: " << this->country;
		cout << "\nGroup: " << this->group;
		cout << "\nUniversity: " << this->university << endl;
	}
	char* GetName()
	{
		return this->name;
	}
	void SetName(const char* name)
	{
		if (this->name != nullptr)
		{
			delete[]this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	char* GetSurname()
	{
		return this->surname;
	}
	void SetSurname(const char* surname)
	{
		if (this->surname != nullptr)
		{
			delete[]this->surname;
		}
		this->surname = new char[strlen(surname) + 1];
		strcpy_s(this->surname, strlen(surname) + 1, surname);
	}
	char* GetFathername()
	{
		return this->fathername;
	}
	void SetFathername(const char* fathername)
	{
		if (this->fathername != nullptr)
		{
			delete[]this->fathername;
		}
		this->fathername = new char[strlen(fathername) + 1];
		strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
	}
	char* GetNumber()
	{
		return this->number;
	}
	char* SetNumber(const char* number)
	{
		if (this->number != nullptr)
		{
			delete[]this->number;
		}
		this->number = new char[strlen(number) + 1];
		strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
	}
	char* GetBirthday()
	{
		return this->birthday;
	}
	char* SetBirthday(const char* birthday)
	{
		if (this->birthday != nullptr)
		{
			delete[]this->birthday;
		}
		this->birthday = new char[strlen(birthday) + 1];
		strcpy_s(this->birthday, strlen(birthday) + 1, birthday);
	}
	char* GetCity()
	{
		return this->city;
	}
	char* SetCity(const char* city)
	{
		if (this->university != nullptr)
		{
			delete[]this->city;
		}
		this->city = new char[strlen(city) + 1];
		strcpy_s(this->city, strlen(city) + 1, city);
	}
	char* GetCountry()
	{
		return this->country;
	}
	char* SetCountry(const char* country)
	{
		if (this->country != nullptr)
		{
			delete[]this->country;
		}
		this->country = new char[strlen(country) + 1];
		strcpy_s(this->country, strlen(country) + 1, country);
	}
	char* GetGroup()
	{
		return this->group;
	}
	char* SetGroup(const char* group)
	{
		if (this->group != nullptr)
		{
			delete[]this->group;
		}
		this->group = new char[strlen(group) + 1];
		strcpy_s(this->group, strlen(group) + 1, group);
	}
	char* GetUniversity()
	{
		return this->university;
	}
	char* SetUniversity(const char* university)
	{
		if (this->university != nullptr)
		{
			delete[]this->university;
		}
		this->university = new char[strlen(university) + 1];
		strcpy_s(this->university, strlen(university) + 1, university);
	}
	~Student()
	{
		delete[]this->name;
		this->name = nullptr;
		delete[]this->surname;
		this->surname = nullptr;
		delete[]this->fathername;
		this->fathername = nullptr;
		delete[]this->city;
		this->city = nullptr;
		delete[]this->country;
		this->country = nullptr;
		delete[]this->birthday;
		this->birthday = nullptr;
		delete[]this->group;
		this->group = nullptr;
		delete[]this->university;
		this->university = nullptr;
		delete[]this->number;
		this->number = nullptr;
	}
};

int main()
{
	Student student1;
	student1.Input();
	student1.Print();
	student1.SetName("Boris");
	cout << student1.GetName() << endl;
}