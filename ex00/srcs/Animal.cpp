#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Default";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal &copy )
{
	this->operator=(copy);
}

Animal &Animal::operator=( const Animal &copy )
{
		if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

void Animal::makeSound( void ) const
{
	if (this->type == "Cat")
		std::cout << "Miao miao" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Woaf woaf" << std::endl;
}

const std::string &Animal::getType( void ) const
{
	return (this->type);
}