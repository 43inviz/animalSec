#pragma once
#include <iostream>
#include <string>
using namespace std;

class HomeAnimal
{
	string _name;
	string _type;
	string _sound;
public:
	HomeAnimal() = default;
	HomeAnimal(string name, string type, string sound) {
		_name = name;
		_type = type;
		_sound = sound;
	}

	virtual void show() {
		cout << "Name: " << _name << endl;
	}

	virtual void sound() {
		cout << "\n<" << _sound << ">\n";
	}

	virtual void type() {
		cout << "Type: " << _type << endl;
	}



};

