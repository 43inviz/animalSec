#include <iostream>
#include "HomeAnimal.h"
#include "HomeCat.h"
#include "HomeDog.h"
#include "HomeHamster.h"
#include "HomeParrot.h"
#include <string>

using namespace std;




int main() {

	HomeCat cat("Barsik", "Kot", "Myay");
	HomeDog dog("King", "Pes", "Gav");
	HomeHamster hamster("Borys", "homyak", "idk");
	HomeParrot parrot("Kesha", "popygaj", "4irik");

	cat.show();
	cat.sound();
	cat.type(); 
	

	return 0;
}