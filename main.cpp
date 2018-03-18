#include "Student.h"
#include "menu.h"
#include "Teacher.h"
#include "Person.h"
#include "Array.h"
#include <iostream>


void main()	//головна функція програми
{
	Menu &menu_obj=Menu::Instance();
	menu_obj.Run();

}
