//Maya Hampton
//This is my own work

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
private:
	std::string name;
	double weight;
	double height;
	void gainWeight();

public:
	Animal();
	Animal(std::string, double, double);
	std::string getName() const;
	double getWeight() const;
	double getheight() const;
	void setName(std::string);
	void setWeight(double);
	void setHeight(double);

	virtual void eat();
	virtual void speak() = 0; //" = 0;" means pure virtual function
	virtual double getTopWeight() const = 0;
	virtual std::string getSpecies() const = 0;
};

#endif