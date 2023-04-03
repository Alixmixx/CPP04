#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	:Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";

	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;
}

Cat::Cat( const Cat &copy )
	:Animal(copy)
{
	this->operator=(copy);
}

Cat &Cat::operator=( const Cat &copy )
{
		if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}