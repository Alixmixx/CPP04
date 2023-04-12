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
	*this = copy;
}

Cat &Cat::operator=( const Cat &copy )
{
	if (this != &copy)
	{
		this->type = copy.getType();
		this->_brain = new Brain(*copy.getBrain());
	}
	return *this;
}

Animal	&Cat::operator=( const Animal &copy )
{
	if (this != &copy)
	{
		this->type = copy.getType();
		*(this->_brain) = *(copy.getBrain());
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miao miao" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}

std::ostream &operator<<( std::ostream &outStream, const Cat &cat )
{
	outStream << "Animal: " << cat.getType() << std::endl;
	return (outStream);
}
