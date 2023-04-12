#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main()
{
	Animal		no_type;
	std::cout << std::endl;

	Cat			cat;
	std::cout << std::endl;
	
	Dog			dog;
	std::cout << std::endl;

	WrongAnimal	wrong_no_type;
	std::cout << std::endl;
	
	WrongCat	wrongCat;
	std::cout << std::endl;

	no_type.makeSound();
	cat.makeSound();
	dog.makeSound();
	wrong_no_type.makeSound();
	wrongCat.makeSound();
	std::cout << std::endl;

	const Animal* meta = new Animal();
	std::cout << std::endl;

	const Animal* j = new Dog();
	std::cout << std::endl;

	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	return 0;
}
