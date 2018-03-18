#include"Array.h"
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

//constructor
	Collection::Collection(int N)
	{
		curent=N;
		n=0;
		people=new Person*[curent];
	}

//destructor
	Collection::~Collection()
	{
		remove();
		delete [] people;
	}
//function to delete
	void Collection::remove()
	{
		curent=0;
		n=0;
		for(int i=0;i<curent;i++)
			delete people[i];
		delete [] people;
		people=new Person*[n];

	}
//function to add
	void Collection::push(Person* N)
	{

		if(n>curent)
		{
			Person ** tmp;
			tmp=new Person*[curent+10];
			for(int i=0;i<n-1;i++)
			{
				tmp[i]=people[i];
			}
			for(int i=0;i<curent;i++)
				delete people[i];
			delete [] people;
			people=tmp;
			curent+=10;
		}
			people[n]=N;
		n++;
	}
	//pop
	void Collection::pop()
	{
		int v;
		do{
		cout<<"Enter 0 to exit"<<endl;
		for(int i=0;i<n;i++)
		{

			cout<<i+1<<". "<<people[i]->get_names().name;
			cout<<" "<<people[i]->get_names().middle;
			cout<<" "<<people[i]->get_names().surname<<endl;
		}
		
		cin>>v;
		}while(v <= n && v >= 0);
		if(v!=0)
		{
			for(int i=v;i<n-1;i++)
				people[i]=people[i+1];
			n--;
		}
	}
//print
	void Collection::print()const
	{

		{
			cout<<"LIST OF PEOPLE"<<endl;
			for(int i=0;i<n;i++)
			{
				
				if (typeid(*people[i])==typeid(Teacher))
				{
					cout<<"Teacher";
					people[i]->print(); 
				}
				else
				{
					cout<<"Student";
					people[i]->print(); 
				}
				cout<<endl;
			}
			
	}
	}


	//push_People
	void Collection::push_student()
	{
	 Person*tmp;
		tmp=new Student();
		tmp->input();	
		push(tmp);		


	}
	void Collection::push_teacher()
	{
		Person *tmp;
		tmp=new Teacher();
		tmp->input();	
		push(tmp);		
	}
//get number
	const int Collection::get_n()const
	{
		return n;
	}
//save file
	void Collection::fileout()const
	{
		if(n==0)
			cout<<"Сollection is empty"<<endl;
		else
		{
			ofstream out("People.txt");//потік виведення
			out<<n<<endl;
			for(int i=0;i<n;i++) 
			{
				if(typeid(*people[i])==typeid(Teacher))		
				{
					out<<1<<endl;	
					out<<(*((Teacher*)(people[i])));		
				}
				if(typeid(*people[i])==typeid(Student))		
				{
					out<<0<<endl;		
					out<<(*((Student*)(people[i])));	
				}
			}
			out.close();	
		}
	}


	//в файл
	void Collection::filein()
	{
		ifstream in("People.txt");
		if(in)
		{
			Student* S;
			Teacher* L;
			int k;
			int number;
			in>>number;
			if(n+number>curent)
			{
				curent=n+number+10;
				Person** tmp=new Person*[curent];
				for(int i=0;i<n;i++)
					tmp[i]=people[i];
				delete [] people;
				people=tmp;
			}
			in>>k;
			while(!in.eof())
			{
				if(k==1)	
				{
					L=new Teacher;
					in>>(*L);
					push(L);

				}
				if(k==0)
				{
					S=new Student;
					in>>(*S);
					push(S);
				}
				in>>k;	// next
			}
		}
		else
			cout<<"file not found"<<endl;
		in.close();
	}

	void Collection::search()
	{

		float min_score=75;// межа неуспішності для студентів
		for(int i=0;i<n;i++)
		{
			
			if(typeid(*people[i])==typeid(Student))		//якщо людина є студентом
			{
				float sum;
				//підрахуємо середній бал заліковки
				sum=static_cast<Student*>(people[i])->get_mark();
			if(sum<=min_score)	//якщо студент знаходиться ниже межі неуспішності виводимо його
			{
				cout<<people[i]->get_names().name<<" "<<people[i]->get_names().surname<<endl;
				cout<<static_cast<Student*>(people[i])->get_mark()<<" "<<endl;
				
			}
		}


	}
	}


