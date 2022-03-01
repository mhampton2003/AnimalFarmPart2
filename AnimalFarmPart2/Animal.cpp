#include "Animal.h"

//default Animal constructor
Animal::Animal()
{
	name = "";
	weight = 0.0;
	height = 0.0;
}

//nondefault Animal constructor
Animal::Animal(std::string name, double weight, double height)
{
	this->name = name;
	this->weight = weight;
	this->height = height;
}

//returns the name of the Animal
std::string Animal::getName() const
{
	return name;
}

//returns the weight of the Animal
double Animal::getWeight() const
{
	return weight;
}

//returns the height of the Animal
double Animal::getheight() const
{
	return height;
}

//sets the name of the Animal
void Animal::setName(std::string name)
{
	this->name = name;
}

//sets the weight of the Animal
void Animal::setWeight(double weight)
{
	this->weight = weight;
}

//sets the height of the Animal
void Animal::setHeight(double height)
{
	this->height = height;
}

//prints the Animal is eating and gains weight
void Animal::eat()
{
	std::cout << "The " << name << " is eating" << std::endl;
	gainWeight();
}

//The Animal gains 5 pounds
void Animal::gainWeight()
{
	weight += 5;
	std::cout << "The " << name << " gained 5 pounds" << std::endl;
	std::cout << "The " << name << "'s weight is now " << weight << " pounds" << std::endl;
}