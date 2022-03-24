//Maya Hampton
//This is my own work

#include "Cow.h"

//default Cow constructor
Cow::Cow() : Animal() //explicitly invokes Animal() constructor
{
	setName("");
	setWeight(0.0);
	setHeight(0.0);
}

//nondefault Cow constructor
Cow::Cow(std::string name, double weight, double height)
{
	setName(name);
	setWeight(weight);
	setHeight(height);
}

//prints out Cow is eating and gains weight
void Cow::eat()
{
	std::cout << getName() << " the Cow is eating now" << std::endl;
	gainWeight();
}

//Cow's weight is increased by 5 pounds
void Cow::gainWeight()
{
	setWeight(getWeight() + 5.0);
	std::cout << getName() << " gained 5 pounds" << std::endl;
	std::cout << getName() << "'s weight is now " << getWeight() << " pounds" << std::endl;

}

//prints what the Cow says
void Cow::speak() {
	std::cout << "MOOOOO." << std::endl;
}

//returns the top weight
double Cow::getTopWeight() const {
	return 1500;
}

//returns the species as a string
std::string Cow::getSpecies() const
{
	return "Cow";
}
