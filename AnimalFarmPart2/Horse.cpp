//Maya Hampton
//This is my own work

#include "Horse.h"

//default Horse constructor
Horse::Horse() : Animal()
{
	setName("");
	setWeight(0.0);
	setHeight(0.0);
}

//nondefault Horse constructor
Horse::Horse(std::string name, double weight, double height)
{
	setName(name);
	setWeight(weight);
	setHeight(height);
}

//prints that Horse is eating and gains weight
void Horse::eat()
{
	std::cout << getName() << " the Horse is eating now" << std::endl;
	gainWeight();
}

//Horse's weight is increased by 4 pounds
void Horse::gainWeight()
{
	setWeight(getWeight() + 4.0);
	std::cout << getName() << " gained 4 pounds" << std::endl;
	std::cout << getName() << "'s weight is now " << getWeight() << " pounds" << std::endl;

}

//prints what the horse says
void Horse::speak() {
	std::cout << "Neigh!" << std::endl;
}

//returns the top weight of the Horse
double Horse::getTopWeight() const {
	return 2200;
}

//returns the species as a string
std::string Horse::getSpecies() const
{
	return "Horse";
}
