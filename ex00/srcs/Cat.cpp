#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	:Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
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
		this->type = copy.type;
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miao miao" << std::endl;
}

std::ostream &operator<<( std::ostream &outStream, const Cat &cat )
{
	outStream << "Animal: " << cat.getType() << std::endl;
	return (outStream);
}
