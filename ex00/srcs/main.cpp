#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main()
{
	Animal		no_type;
	Cat			cat;
	Dog			dog;
	WrongCat	wrongCat;

	no_type.makeSound();
	cat.makeSound();
	dog.makeSound();
	wrongCat.makeSound();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}