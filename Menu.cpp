#include "menu.h"
#include "Array.h"
#include <iostream>

using namespace std;
Menu& Menu::Instance()
{
	static Menu inst;
	return inst;
}
Menu::Menu()
{

	int a=10;
	list=new Collection(a);
}
Menu::~Menu()
{
	delete list;
}

//функція взаємодії з користувачем
void Menu::Run()
{
	
	
	 int i;
	 char s[9];
	 do
	 {
		 system("cls");
		 cout<<"                MENU           "<<endl;
		 cout<<"Actions you can choose:"<<endl;
		 cout<<"1. Create student`s object"<<endl;
		 cout<<"2. Create lecturer`s object"<<endl;
		 cout<<"3. Show the full list people"<<endl;
		 cout<<"4. Delete people from the list"<<endl;
		 cout<<"5. Remove the list people"<<endl;
		 cout<<"6. Save to the file"<<endl;
		 cout<<"7. Download from the file"<<endl;
		 cout<<"8. Show the list of bad students"<<endl;
		 cout<<"9. Leave the program"<<endl<<endl;
		 cout<<endl<<"What do you want to do?"<<endl;
		 cin.getline(s,8);
		 i=atoi(s);
		 switch(i)
		 {
		 case 1:
			 {
				 system("cls");
				 list->push_student();
				 system("pause");
				 break;
			 }
		case 2:
			 {
				 system("cls");
				 list->push_lecturer();
				 system("pause");
				 break;
			 }
		case 3:
			 {
				 system("cls");
				 list->print();
				 system("pause");
				 break;
			 }
		case 4:
			 {
				 system("cls");
				 list->pop();
				 system("pause");
				 break;
			 }
		case 5:
			 {
				 system("cls");
				 list->remove();
				 system("pause");
				 break;
			 }
		case 6:
			 {
				 system("cls");
				 list->fileout();
				 system("pause");
				 break;
			 }
		case 7:
			 {
				 system("cls");
				 list->filein();
				 system("pause");
				 break;
			 }
		
		case 8:
			 {
				 system("cls");
				 list->do_request();
				 system("pause");
				 break;

			 }
			 case 9:
			 {
				 system("cls");
				 system("pause");
				 break;

			 }
		 default:
			 {
				 if(i>9 || i<1)
				 {
					 cout<<"Please enter number for 1 to 9"<<endl;
					 
					 break;
				 }
			 }
		 }



	 }
	 while(i!=9);
}


