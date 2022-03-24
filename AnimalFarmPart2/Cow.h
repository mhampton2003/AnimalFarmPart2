//Maya Hampton
//This is my own work

#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {
private:
	void gainWeight();
public:
	Cow();
	Cow(std::string, double, double);
	void eat();
	void speak();
	double getTopWeight() const;
	std::string getSpecies() const;
};

#endif