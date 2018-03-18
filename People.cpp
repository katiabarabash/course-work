#include<iostream>
#include<string>
#include"People.h"//Підключеня файлу з описом класу


//Конструктор за замовчуванням класу "Людина"

Person::Person()
{
       
}
//Деструктор
Person::~Person()
{}
//Методи ініціалізації полів класу "Людина"(сеттери)

 void Person::set_brth(const brth cur_brth)
{
	data=cur_brth;
}

 void Person:: set_names(const pib cur_names)
 {
	 names=cur_names;
 }
void Person::set_department(const string cur_department)
{
 department=cur_department;
}

void Person::set_email(const string cur_email)
{
	email=cur_email;
}
void Person::set_adress(const string cur_adress)
{
	adress=cur_adress;
}
void Person::set_telephone(const string cur_telephone)
{
	adress=cur_telephone;
}
void Person::set_male(const bool cur_male)
	{
		male=cur_male;
	}
//Методи повернення значень полів класу "Людина"(геттери)
const brth Person::get_brth()const
	{
		return data;
	}

 const pib Person::get_names()const
 {
	 return names;
 }

const string Person::get_adress()const
{
	return adress;
}
const string Person::get_telephone()const
{
	return telephone;
}
const string Person::get_email()const
{
	return email;
}
const string Person::get_department()const
{
	return department;
}
const bool Person::get_male()const
	{
		return male;
	}

//Функція виведення на екран
 void Person::print()const
	{
		cout<<"Surname:"<<names.surname<<endl;
		cout<<"Name: "<<names.name<<endl;
		cout<<"Midle name: "<<names.middle<<endl;
		cout<<"Birth: ";
		if (data.day<10) cout<<"0"<<data.day<<".";
		else cout<<data.day<<".";
		if (data.month<10) cout<<"0"<<data.month<<".";
		else cout<<data.month<<".";
		cout<<data.year<<endl;
		cout<<"Department: "<<department<<endl;
		cout<<"Adress: "<<adress<<endl;
		cout<<"Telephone: "<<telephone<<endl;
		cout<<"E-mail: "<<email<<endl;
	}
 //Функція для введенн даних та перевірка їх коректності
	void Person::input()
	{
		cout<<"Input name: ";
		cin>>names.name;
		cout<<"last name ";
		cin>>names.middle;
		cout<<"and surname ";
		cin>>names.surname;
		cout<<"Input birthday ( day mouth year) ";
		cin>>data.day>>data.month>>data.year;
		if (data.day>31)
		{
			cout<<"Not correct day. Input right date!";
			cin>>data.day;
		}
		if (data.month>12)
		{
			cout<<"Not correct month. Input right date!";
			cin>>data.month;
		}
		cout<<"Input department ";
		cin>>department;
		cout<<"Input sex/ If person is male enter 1, if female enter 0 ";
		while(!(cin>>male) || (cin.fail()) || (cin.peek() != '\n'))
		{
			cin.clear();
		    while (cin.get() != '\n');
		    cout << "Not correct. Enter again: \n";
		}
		cout<<"Input email: ";
		cin>>email;
		cout<<"Input telephone number: ";
		cin>>telephone;
		cin.ignore(100,'\n');
		cout<<"Input adress: ";
		getline(cin,adress);
		}






