#pragma once;
#include<string>
#include <iostream>
#include "Person.h"



class Student: public Person
{
private:
	int course;			//курс, на якому навчається студент
	bool scolarship;	//наявність стипендії
	float mark;			//середня оцінка
	string group;		//назва групи
			
	

public:
	Student();			//конструктор за замовчуванням
	//блок геттерів
	const int get_course()const;
	const float get_mark()const;
	const bool get_scolarship()const;
	const string get_group() const;

	//блок сеттерів
	void set_group (const string);
	void set_course( const int);
	void set_mark( const float);
	void set_scolarship(const bool);
	void print()const;						//функція виведення на екран даних про студента
	void input();							//функція введення інформації про студента
	friend ostream& operator<<(ostream&,Student&);		// перегружена операція для виводу записів в потік інформації 
	friend istream& operator>>(istream&, Student&);		// перевантажена операція введення для зчитування даних з потоку
	virtual ~Student();						//деструктоор

};