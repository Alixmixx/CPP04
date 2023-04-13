#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int	main( void )
{
 	AAnimal	*animals[6];
	Brain	*brain;

	//AAnimal	impossible;

	for (int i = 0; i < 6; i++)
	{
 		if (i < 6 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << "  " << i + 1 << '\n' << std::endl;
	}

	std::cout << animals[5]->getType() << " thinks: " << animals[5]->getBrain()->ideas[0] << std::endl;

	brain = animals[5]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";

	std::cout << animals[5]->getType() << " thinks: " << animals[5]->getBrain()->ideas[0] << std::endl;

	std::cout << '\n' << std::endl;
	std::cout << animals[2]->getType() << " thinks: " << animals[2]->getBrain()->ideas[2] << '\n' << std::endl;

	*(animals[2]) = *(animals[5]);

	std::cout << '\n' << animals[2]->getType() << " thinks: " << animals[2]->getBrain()->ideas[2] << '\n' << std::endl;

	for (int i = 0; i < 6; i++)
		delete animals[i];

/*  	Animal* j = new Dog();
	std::cout << std::endl;
	Animal* i = new Dog();
	std::cout << std::endl;

	i->getBrain()->ideas[0] = "miao";

	std::cout << i->getBrain()->ideas[0] << std::endl;

	std::cout << j->getBrain()->ideas[0] << std::endl;

	*j = *i;

	std::cout << i->getBrain()->ideas[0] << std::endl;

	std::cout << j->getBrain()->ideas[0] << std::endl;

	delete j;//should not create a leak
	delete i; */
	return 0;
}
