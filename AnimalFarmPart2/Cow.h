#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : Animal {
private:
	void gainWeight();
public:
	Cow();
	Cow(std::string, double, double);
	void eat();
};

#endif