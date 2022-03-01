
#include "Animal.h"
#include "Horse.h"
#include "Cow.h"
#include "Chicken.h"
#include "Barn.h"

int main() {

	Barn b;
	//feeds all the animals
	b.feedChickens();
	b.feedCows();
	b.feedHorses();

	//Animal* myAnimals[] = { &cow, &h, &c };

	return 0;
}