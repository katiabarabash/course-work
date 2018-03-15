#pragma once; //
#include<string>
#include <istream>

using namespace std;

	//��������� "���� ����������"
	struct brth
	{
		int year;
		int month;
		int day;
	};
	//��������� "�������, ��'�, ��-�������
	struct pib
	{
		string name;
		string middle;
		string surname;
	};
//��������� �������� ������������ ����� "������"
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
	//����������� �� �������������
	Person();
	//������ "�������, ��'�, ��-�������"
	void set_names (const pib);
	const pib get_names()const;
	//������ ��� ���� "������"
	void set_adress (const string);
	const string get_adress()const;
	//������ ��� ���� "���������"
	void set_department (const string);
	const string get_department()const;
	//������ ��� ���� "����� ��������"
	void set_telephone (const string);
	const string get_telephone()const;
	//������ ��� ���� "����� email"
	void set_email(const string);
	const string get_email() const;
	//������ ��� ���� "���� ����������"
	void set_brth(const brth);
	const brth get_brth() const;
	//������ ��� ���� "�����"
	const bool get_male()const;
	void set_male(const bool);
	//³�������� ������� ��� ��������� ����� �� �����
	virtual void print()const=0;
	//³�������� ������� ��� ����� ����������
	virtual void input ();
	//³��������� ����������
	virtual ~Person(void);

};