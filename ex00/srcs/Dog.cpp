#include "Dog.hpp"
#include <iostream>

Dog::Dog()
	:Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog( const Dog &copy )
	:Animal(copy)
{
	this->operator=(copy);
}

Dog &Dog::operator=( const Dog &copy )
{
		if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}