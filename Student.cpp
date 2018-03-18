
#include<string>
#include "Student.h"
#include "People.h"//Підключеня файлу з описом класу "Студент"
#include <iostream>


//Конструктор для класу "Студент"
Student::Student()
	{

	}
//Опис методів для ініціалізації полів
void Student::set_course(const int cur_course)
	{
		course=cur_course;
	}
void Student::set_number(const int cur_number)
	{
		course=cur_number;
	}
void Student::set_mark(const float cur_mark)
	{
		mark=cur_mark;
	}

void Student::set_group(const string cur_group)
{
	group=cur_group;
}

//gМетоди для отримання значень полів
const int Student::get_course()const
	{
		return course;
	}

const float Student::get_mark()const
	{
		return mark;
	}
const string Student::get_group()const
{
	return group;
}
const int Student::get_number()const
	{
		return number;
	}




void Student::print() const
{
	Person::print();
	cout<<"Course: "<<this->course<<endl;
	cout<<"Average mark: "<<this->mark<<endl;
	cout<<"Group: "<<this->group<<endl;
	cout<<"Number of gradebook: "<<number<<endl;
}

Student::~Student()
{
}
void Student::input()
{
	Person::input();
		cout<<"Input course ";
		while(!(cin>>course) || (cin.fail()) || (cin.peek() != '\n'))
	{
     cin.clear();
     while (cin.get() != '\n');
	 cout << "Not correct data. Enter again: \n";
	}
		cout<<"Enter average mark: ";
		cin>>mark;
		if (cin.fail()) 
		{ 
		cin.clear(); 
		cout<<"The data is not correct! Try again!"; 
		system("pause"); 
		}
		cout<<"Input group of student: ";
		cin>>group;
		cout<<"Input number of gradebook: " ;
		while(!(cin>>number) || (cin.fail()) || (cin.peek() != '\n'))
	{
     cin.clear();
     while (cin.get() != '\n');
	 cout<<"Not correct data. Enter again!";
}
}
ostream& operator<<(ostream& out, Student& s)
	{
		out<<s.get_brth().day<<endl;
		out<<s.get_brth().month<<endl;
		out<<s.get_brth().year<<endl;
		out<<s.get_male()<<endl;
		out<<s.get_names().name<<endl;
		out<<s.get_names().middle<<endl;
		out<<s.get_names().surname<<endl;
		out<<s.get_department()<<endl;
		out<<s.get_mark()<<endl;
		out<<s.get_group()<<endl;
		out<<s.course<<endl;
				

		return out;
	}

istream& operator>>(istream& in, Student& Students)
	{
			brth D;
		in>>D.day>>D.month>>D.year;
		string c;
		in>>c;
		string u;
		in>>u;
		bool ma;
		in>>ma;
		pib na;
		
		in>>na.name>>na.middle>>na.surname;
		
		string dep;
		in>>dep;
		string gr;
		in>>gr;
		float dl;
		in>>dl;


		
		Students.set_male(ma);
		
		Students.set_names(na);
		
		Students.set_group(gr);
		
		
		in>>Students.mark;
		in>>Students.course;
		
		return in;
	}

