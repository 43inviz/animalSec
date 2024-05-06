#pragma once
#include "HomeAnimal.h"
#include <string>

class HomeDog:public HomeAnimal
{
	string _favToy;
public:
	HomeDog() = default;
	HomeDog(string name,string type,string sound,string toy):HomeAnimal(name,type,sound){
		_favToy = toy;
	}

	void showToy() {
		cout << "Favorite toy: " << _favToy << endl;
	}

};

