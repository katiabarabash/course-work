#include<string>
#include "Teacher.h"
#include <iostream>
using namespace std;

//Конструктор
Teacher::Teacher():Person()
{
}

//Сеттери
void Teacher::set_degree(const string cur_degree)
	{
		degree=cur_degree;
	}
	void Teacher::set_experience(const float cur_experience)
	{
		experience=cur_experience;
	}
	void Teacher::set_hours(const float cur_hours)
	{
		hours=cur_hours;
	}
	void Teacher::set_subject(const string* cur_subject, const int N)
	{
		n=N;
		subjects=new string[n];
		for(int i=0;i<n;i++)
			subjects[i]= cur_subject[i];
	}

	//Геттери
	const string Teacher::get_degree()const
	{
		return degree;
	}
	const float Teacher::get_experience()const
	{
		return experience;
	}
	const float Teacher::get_hours()const
	{
		return hours;
	}
	const string* Teacher::get_subject()const
	{
		return subjects;
	}
	
//Деструктор
	Teacher::~Teacher()
	{
		delete[] subjects;	
	}

	//Функція виведення інформації про викладача на екан
	void Teacher::print()const
	{
		Person::print();
		cout<<"Degree: "<<degree<<endl;
		cout<<"Experience: "<<experience<<endl;
		cout<<"Hours on a week: "<<endl;
		cout<<"Subjects"<<endl;
		for(int i=0;i<n;i++)
			cout<<"\t"<<i+1<<") "<<subjects[i]<<endl;
	}
//Функція зчитування даних з клавіатури
	void Teacher::input()
	{
		Person::input();
		cout<<"input degree: ";
		cin>>degree;
		cout<<"input experience: ";
		cin>>experience;
		cout<<"input count of hours on a week: ";
		cin>>hours;
		cout<<"input number subjects: ";
		cin>>n;
		subjects=new string[n];
		for(int i=0;i<n;i++)
		{
			cout<<"input name "<<i+1<<" subjects: ";
			cin>>subjects[i];
		}
	}
	//перевантаження
	//out
	ostream& operator<<(ostream& out,const Teacher &Teachers)
	{
		out<<Teachers.get_brth().day<<endl;
		out<<Teachers.get_brth().month<<endl;
		out<<Teachers.get_brth().year<<endl;
		out<<Teachers.get_male()<<endl;
		out<<Teachers.get_names().name<<endl;
		out<<Teachers.get_names().middle<<endl;
		out<<Teachers.get_names().surname<<endl;
		out<<Teachers.degree<<endl;
		out<<Teachers.experience<<endl;
		out<<Teachers.hours<<endl;
		out<<Teachers.n<<endl;
		for(int i=0;i<Teachers.n;i++)
			out<<Teachers.subjects[i]<<endl;

		return out;
	}
	//in 
	istream& operator>>(istream& in, Teacher &Teachers)
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
		Teachers.set_male(ma);
		
		Teachers.set_names(na);
		
		
		in>>Teachers.degree;
		in>>Teachers.hours;
		in>>Teachers.experience;
		in>>Teachers.n;
		Teachers.subjects=new string[Teachers.n]; 
		for(int i=0;i<Teachers.n;i++)
		{
			in>>Teachers.subjects[i];
		}
		return in;
	}

