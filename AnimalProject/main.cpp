#include "main.h"
#include "Cat.h"
#include "AnimalStudio.h"
#include "Dog.h"
int main() {
	AnimalStudio studio;
	Animal** animals;
	int size = 8;

	animals = new Animal * [size] {new Dog("Scharly"), new Cat("Adel"),
		new Animal("no name")};
}