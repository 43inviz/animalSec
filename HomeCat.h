#pragma once
#include "HomeAnimal.h"

class HomeCat:public HomeAnimal
{
public:
	HomeCat() = default;
	HomeCat(string name,string type,string sound):HomeAnimal(name,type,sound){}
};

