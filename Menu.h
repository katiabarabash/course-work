#pragma once

#include "Array.h"

class Menu
{
private:
	Menu();	
	Collection *list;

public:
	static Menu& Instance();
	void Run();
	 ~Menu();
	

};
