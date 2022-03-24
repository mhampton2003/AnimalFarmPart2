//Maya Hampton
//This is my own work

#include "Animal.h"
#include "Horse.h"
#include "Cow.h"
#include "Chicken.h"
#include "Barn.h"

void showAll(Barn&);

int main() {

	Barn b;
	showAll(b);
	//feeds all the animals
	b.feedAnimals();
	showAll(b);

	return 0;
}

//prints out all the animals in the barn
void showAll(Barn& b)
{
	std::cout << "Barn Contains: " << std::endl;
	b.show();
	std::cout << std::endl;
}
