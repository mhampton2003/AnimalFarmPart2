#ifndef BARN_H
#define BARN_H

#include <vector>
#include "Chicken.h"
#include "Horse.h"
#include "Cow.h"

class Barn {
private:
	std::vector<Chicken> coop;
	std::vector<Horse> stalls;
	std::vector<Cow> pen;
public:
	Barn();
	void feedChickens();
	void feedHorses();
	void feedCows();
};

#endif