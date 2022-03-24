//Maya Hampton
//This is my own work

#include "Barn.h"

//default Barn constructor
Barn::Barn()
{
	numAnimals = 0;
	myAnimals[numAnimals++] = new Chicken("Pickles", 12.0, 5.2);
	myAnimals[numAnimals++] = new Chicken("Lettuce", 4.6, 6.4);
	myAnimals[numAnimals++] = new Chicken("Tomato", 4.2, 5.5);
	myAnimals[numAnimals++] = new Chicken("Potato", 3.7, 4.9);
	myAnimals[numAnimals++] = new Chicken("Mayonnaise", 3.9, 5.1);
	myAnimals[numAnimals++] = new Chicken("Mustard", 5.3, 7.2);
	myAnimals[numAnimals++] = new Cow("Milkyway", 1000.2, 25.3);
	myAnimals[numAnimals++] = new Cow("Mr. Moo", 1200.6, 32.1);
	myAnimals[numAnimals++] = new Cow("Beefcake", 897.5, 29.4);
	myAnimals[numAnimals++] = new Cow("Princess", 1498.3, 27.7);
	myAnimals[numAnimals++] = new Cow("Hank", 903.3, 31.0);
	myAnimals[numAnimals++] = new Horse("Spirit", 1805.0, 45.2);
	myAnimals[numAnimals++] = new Horse("Willow", 1625.8, 40.7);
	myAnimals[numAnimals++] = new Horse("Rusty", 1900.5, 37.2);
	myAnimals[numAnimals++] = new Horse("Beauty", 2200.2, 43.4);
}

//barn destructor. deletes each animal in the barn
Barn::~Barn() {
	for (int i = 0; i < numAnimals; ++i) {
		delete myAnimals[i];
	}
}

//prints the animal's name and species
void Barn::show() {
	for (int i = 0; i < numAnimals; i++) {
		std::cout << myAnimals[i]->getName() << " the " << myAnimals[i]->getSpecies() << std::endl;
	}
}

//puts animal out to pasture and replace if top weight exceeded
void Barn::outToPasture(Animal*& a) {
	std::cout << a->getName() << " the " << a->getSpecies() << " exceeded the top weight of " << a->getTopWeight() << " pounds" << std::endl;
	std::cout << a->getName() << " the " << a->getSpecies() << " is put out to pasture" << std::endl;

	//if the sepcies is a cow the cow is replaced with another
	if (a->getSpecies() == "Cow") {
		std::string temp = a->getName();
		delete a;
		a = new Cow("Bessie", 890.3, 30.3);
		std::cout << temp << " the Cow is replaced with " << a->getName();
	}

	//if the species is a horse the horse is replaced with another
	if (a->getSpecies() == "Horse") {
		std::string temp = a->getName();
		delete a;
		a = new Horse("Stormy", 1993.7, 39.8);
		std::cout << temp << " the Horse is replaced with " << a->getName();
	}

	//if the species is a chicken the chicken is replaced with another
	if (a->getSpecies() == "Chicken") {
		std::string temp = a->getName();
		delete a;
		a = new Chicken("Fruit Snacks", 10.1, 6.1);
		std::cout << temp << " the Chicken is replaced with " << a->getName();
	}
	std::cout << std::endl;
}

//feeds all the animals in the barn
void Barn::feedAnimals() {
	std::cout << "Feeding the animals: " << std::endl;
	for (int i = 0; i < numAnimals; ++i) {
		myAnimals[i]->eat();
		//if the animal's weight is greater than its topWeight, send to pasture
		if ((myAnimals[i]->getWeight()) >= (myAnimals[i]->getTopWeight())) {
			outToPasture(myAnimals[i]);
		}
		std::cout << std::endl;
	}
}