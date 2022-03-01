#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : Animal {
private:
	void gainWeight();
public:
	Horse();
	Horse(std::string, double, double);
	void eat();
	void speak();

};

#endif