#pragma once
#ifndef ARRAY
#define ARRAY

#include"Teacher.h"
#include"Student.h"

class Collection
{
private:
	int n;			//кількість людей в колекції
	int curent;	//на даний момент
	Person **people;	
public:
	void push(Person*);	 
	void pop();		

	void remove();		
	void print()const;	

	void push_student();	
	void push_teacher();	

	void search();
	const int get_n()const;	

	Collection(int n);		
	~Collection();		

	void fileout()const;	
	void filein();			


};
#endif
