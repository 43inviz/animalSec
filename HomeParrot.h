#pragma once
#include "HomeAnimal.h"
#include <string>
class HomeParrot:public HomeAnimal
{
	string _fly;
public:
	HomeParrot() = default;
	HomeParrot(string name, string type, string sound,string fly):HomeAnimal(name,type,sound){
		_fly = fly;
	}

	void showFly() {
		cout << "Fly: " << _fly << endl;
	}
};

