#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int	main( void )
{
	Animal	*animals[10];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << "  " << i + 1 << '\n' << std::endl;
	}

	brain = animals[2]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

	*(animals[5]) = *(animals[2]);

	std::cout << '\n' << std::endl;
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];
}
