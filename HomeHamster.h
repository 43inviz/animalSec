#pragma once
#include "HomeAnimal.h"
#include <string>

class HomeHamster:public HomeAnimal
{
public:
	HomeHamster() = default;
	HomeHamster(string name,string type,string sound):HomeAnimal(name,type,sound){}
};

