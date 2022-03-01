#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"

class Chicken : Animal {
private:
	void gainWeight();
public:
	Chicken();
	Chicken(std::string, double, double);
	void eat();
};

#endif