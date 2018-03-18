#pragma once;
#include<string>
#include <iostream>
#include "People.h"//ϳ�������� ����� � ������ ����� "��������"


//���������� �����-��������� "��������" 
class Teacher: public Person
{
	private:
		string degree; //������
		string* subjects; //������ ��������, �� ������������
		float experience //����� ����������
			,hours; //������� ����� � �������
		int n;	////������� ��������, �� ���� ��������
	public: 
		//����������� �� ������������� ��� ����� "��������"
		Teacher();
		//����������� � �����������
		Teacher(pib &cur_name, string &cur_adress, brth cur_date,  string &cur_department, string &cur_telephone, string &cur_email,
		string &cur_degree, string &subject, float cur_experience, float cur_hours, int cur_n );
		//������ �����������
		void set_department (string);
		void set_degree(const string);
		void set_experience(const float);
		void set_hours(const float);
		void set_subject(const string*,const int);
		//������ ��������� ������� ����
		const string get_degree()const;
		const float get_experience()const;
		const string* get_subject()const;
		const float get_hours() const;
		//³��������� ����� ��� ����������� ���� ����� "��������"
		virtual void print()const;
		//����� ������� ����������
		void input();
		//³��������� ����������
		virtual ~Teacher();
		//�������������� ���������
		friend ostream& operator<<(ostream&,const Teacher&);		
		friend istream& operator>>(istream&, Teacher&);			


};
