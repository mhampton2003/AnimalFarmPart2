#include "Chicken.h"

//default chicken constructor
Chicken::Chicken() : Animal()
{
	setName("");
	setWeight(0.0);
	setHeight(0.0);
}

//nondefault chicken constructor
Chicken::Chicken(std::string name, double weight, double height)
{
	setName(name);
	setWeight(weight);
	setHeight(height);
}

//prints out chicken is eating and gains weight
void Chicken::eat()
{
	std::cout << getName() << " the chicken is eating now" << std::endl;
	gainWeight();
}

//chicken's weight is increased by 1 pound
void Chicken::gainWeight()
{
	setWeight(getWeight() + 1.0);
	//weight += 1;
	std::cout << getName() << " gained 1 pound" << std::endl;
	std::cout << getName() << "'s weight is now " << getWeight() << " pounds" << std::endl;

}