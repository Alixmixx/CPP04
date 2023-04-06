#include "Dog.hpp"
#include <iostream>

Dog::Dog()
	:Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";

	this->_brain = new Brain();
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
	std::cout << "Dog operator = called" << std::endl;
	this->type = copy.getType();
	this->_brain = new Brain(*copy.getBrain());

	return *this;
}

Animal	&Dog::operator=( const Animal &copy )
{
	this->type = copy.getType();
	*(this->_brain) = *(copy.getBrain());
	return *this;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->_brain);
}