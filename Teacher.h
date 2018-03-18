#pragma once;
#include<string>
#include <iostream>
#include "People.h"//Підключеня файлу з описом класу "Викладач"


//Оголошення класу-наслідника "Викладач" 
class Teacher: public Person
{
	private:
		string degree; //звання
		string* subjects; //список предметів, які викладаються
		float experience //досвід викладання
			,hours; //кількість годин в тиждень
		int n;	////кількість предметів, які читає викладач
	public: 
		//Конструктор за замовчуванням для класу "Викладач"
		Teacher();
		//Конструктор з параметрами
		Teacher(pib &cur_name, string &cur_adress, brth cur_date,  string &cur_department, string &cur_telephone, string &cur_email,
		string &cur_degree, string &subject, float cur_experience, float cur_hours, int cur_n );
		//Методи ініціалізації
		void set_department (string);
		void set_degree(const string);
		void set_experience(const float);
		void set_hours(const float);
		void set_subject(const string*,const int);
		//Методи отримання значень полів
		const string get_degree()const;
		const float get_experience()const;
		const string* get_subject()const;
		const float get_hours() const;
		//Віртуальний метод для відображення полів класу "Викладач"
		virtual void print()const;
		//Метод введеня інформації
		void input();
		//Віртуальний деструктор
		virtual ~Teacher();
		//Перевантаження операторів
		friend ostream& operator<<(ostream&,const Teacher&);		
		friend istream& operator>>(istream&, Teacher&);			


};
