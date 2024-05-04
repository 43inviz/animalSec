#pragma once
#include "HomeAnimal.h"
#include <string>

class HomeDog:public HomeAnimal
{
public:
	HomeDog() = default;
	HomeDog(string name,string type,string sound):HomeAnimal(name,type,sound){}

};

