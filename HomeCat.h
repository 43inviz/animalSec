#pragma once
#include "HomeAnimal.h"

class HomeCat:public HomeAnimal
{
	string _sleep;
public:
	HomeCat() = default;
	HomeCat(string name,string type,string sound,string sleep):HomeAnimal(name,type,sound){
		_sleep = sleep;
	}
	
	void showSleep() {
		cout << "Sleep: " << _sleep << endl;
	}
};

