#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
class AnimalStudio
{
public:
	void justDoIt(Animal* animal) {
		animal->getVoice();
	}
};

