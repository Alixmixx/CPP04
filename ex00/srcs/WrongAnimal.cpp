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
	*this = copy;
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
	std::cout << "*Wrong silence*" << std::endl;
}

const std::string &WrongAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream &operator<<( std::ostream &outStream, const WrongAnimal &wrongAnimal )
{
	outStream << "Animal " << wrongAnimal.getType() << std::endl;
	return (outStream);
}
