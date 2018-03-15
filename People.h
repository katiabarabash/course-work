#pragma once; //
#include<string>
#include <istream>

using namespace std;

	//структура "Дата народження"
	struct brth
	{
		int year;
		int month;
		int day;
	};
	//Структура "Прізвище, ім'я, по-батькові
	struct pib
	{
		string name;
		string middle;
		string surname;
	};
//Створення базового абстрактного класу "Людина"
class Person
{
protected:
	string adress
		  ,telephone
		  ,department
		  ,email;
	pib names;
	bool male;
	brth data;
public:
	//Конструктор за замовчуванням
	Person();
	//Методи "Прізвище, ім'я, по-батькові"
	void set_names (const pib);
	const pib get_names()const;
	//Методи для поля "Адреса"
	void set_adress (const string);
	const string get_adress()const;
	//Методи для поля "Факультет"
	void set_department (const string);
	const string get_department()const;
	//Методи для поля "Номер телефону"
	void set_telephone (const string);
	const string get_telephone()const;
	//Методи для поля "Назва email"
	void set_email(const string);
	const string get_email() const;
	//Методи для поля "Дата народження"
	void set_brth(const brth);
	const brth get_brth() const;
	//Методи для поля "Стать"
	const bool get_male()const;
	void set_male(const bool);
	//Віртуальна функція для виведення даних на екран
	virtual void print()const=0;
	//Віртуальна функція для вводу інформації
	virtual void input ();
	//Віртуальний деструктор
	virtual ~Person(void);

};