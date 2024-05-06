#pragma once
#include "HomeAnimal.h"
#include <string>

class HomeHamster:public HomeAnimal
{
	string _favoriteDish;
public:
	HomeHamster() = default;
	HomeHamster(string name,string type,string sound,string dish):HomeAnimal(name,type,sound){
		_favoriteDish = dish;
	}

	void showFavDish() {
		cout << "Favorite dish: " << _favoriteDish << endl;
	}
};

