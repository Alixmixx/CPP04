#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongDefault";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	this->operator=(copy);
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &copy )
{
		if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

void WrongAnimal::makeSound( void ) const
{
	if (this->type == "WrongCat")
		std::cout << "oaiM oaiM" << std::endl;
}

const std::string &WrongAnimal::getType( void ) const
{
	return (this->type);
}