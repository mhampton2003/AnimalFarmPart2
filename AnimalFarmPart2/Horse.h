//Maya Hampton
//This is my own work

#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : public Animal {
private:
	void gainWeight();
public:
	Horse();
	Horse(std::string, double, double);
	void eat();
	void speak();
	double getTopWeight() const;
	std::string getSpecies() const;
};

#endif