//Maya Hampton
//This is my own work

#ifndef BARN_H
#define BARN_H

#include <vector>
#include "Chicken.h"
#include "Horse.h"
#include "Cow.h"

class Barn {
private:
	int numAnimals;
	Animal* myAnimals[15];
public:
	Barn();
	void feedAnimals();
	void outToPasture(Animal*&);
	void show();
	Barn();
};

#endif