#pragma once;
#include<string>
#include <iostream>
#include "Person.h"



class Student: public Person
{
private:
	int course;			//����, �� ����� ��������� �������
	bool scolarship;	//�������� ������䳿
	float mark;			//������� ������
	string group;		//����� �����
			
	

public:
	Student();			//����������� �� �������������
	//���� �������
	const int get_course()const;
	const float get_mark()const;
	const bool get_scolarship()const;
	const string get_group() const;

	//���� �������
	void set_group (const string);
	void set_course( const int);
	void set_mark( const float);
	void set_scolarship(const bool);
	void print()const;						//������� ��������� �� ����� ����� ��� ��������
	void input();							//������� �������� ���������� ��� ��������
	friend ostream& operator<<(ostream&,Student&);		// ����������� �������� ��� ������ ������ � ���� ���������� 
	friend istream& operator>>(istream&, Student&);		// ������������� �������� �������� ��� ���������� ����� � ������
	virtual ~Student();						//�����������

};