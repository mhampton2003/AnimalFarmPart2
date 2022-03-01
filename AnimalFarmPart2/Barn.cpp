#include "Barn.h"

Barn::Barn()
{
	coop.push_back(Chicken("pickles", 3, 2));
	coop.push_back(Chicken("lettuce", 2, 1));
	stalls.push_back(Horse("h1", 75.4, 66.5));
	stalls.push_back(Horse("h2", 89.1, 34));
	pen.push_back(Cow("Betsy", 32, 102.3));
	pen.push_back(Cow("Carter", 76.4, 204.2));
}

void Barn::feedChickens()
{
	std::cout << "Feeding the chickens:" << std::endl;
	for (int i = 0; i < coop.size(); ++i) {
		coop[i].eat();
		std::cout << std::endl;
	}
}

void Barn::feedHorses()
{
	std::cout << "Feeding the horses:" << std::endl;
	for (int i = 0; i < stalls.size(); ++i) {
		stalls[i].eat();
		std::cout << std::endl;
	}
}

void Barn::feedCows()
{
	std::cout << "Feeding the cows:" << std::endl;
	for (int i = 0; i < pen.size(); ++i) {
		pen[i].eat();
		std::cout << std::endl;
	}
}