//Maya Hampton
//This is my own work

#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"

class Chicken : public Animal {
private:
	void gainWeight();
public:
	Chicken();
	Chicken(std::string, double, double);
	void eat();
	void speak();
	double getTopWeight() const;
	std::string getSpecies() const;
};

#endif