#include <iostream>
#include "HomeAnimal.h"
#include "HomeCat.h"
#include "HomeDog.h"
#include "HomeHamster.h"
#include "HomeParrot.h"
#include <string>

using namespace std;




int main() {

	HomeCat cat("Barsik", "Kot", "Myay","Sleep");
	HomeDog dog("King", "Pes", "Gav","Ball");
	HomeHamster hamster("Borys", "homyak", "idk","Bread");
	HomeParrot parrot("Kesha", "popygaj", "4irik","Fly");

	cat.show();
	cat.sound();
	cat.type(); 
	cat.showSleep();

	return 0;
}