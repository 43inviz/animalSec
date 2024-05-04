#pragma once
#include "HomeAnimal.h"
#include <string>
class HomeParrot:public HomeAnimal
{
public:
	HomeParrot() = default;
	HomeParrot(string name, string type, string sound):HomeAnimal(name,type,sound){}

};

