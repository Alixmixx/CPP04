#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	:AAnimal()
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
	:AAnimal(copy)
{
	this->operator=(copy);
}

Cat &Cat::operator=( const Cat &copy )
{
	std::cout << "Cat operator = called" << std::endl;
	this->type = copy.getType();
	this->_brain = new Brain(*copy.getBrain());

	return *this;
}

AAnimal	&Cat::operator=( const AAnimal &copy )
{
	std::cout << "AAnimal::Cat operator = called" << std::endl;
	this->type = copy.getType();
	*(this->_brain) = *(copy.getBrain());

	return *this;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}