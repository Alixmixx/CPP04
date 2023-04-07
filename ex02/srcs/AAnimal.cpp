#include "AAnimal.hpp"
#include <iostream>

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound( void ) const
{
	if (this->type == "Cat")
		std::cout << "Miao miao" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Woaf woaf" << std::endl;
}

const std::string &AAnimal::getType( void ) const
{
	return (this->type);
}