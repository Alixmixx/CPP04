#include "AAnimal.hpp"
#include <iostream>

AAnimal::~AAnimal()
{
	//std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &copy )
{
	std::cout << "Animal = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

void AAnimal::makeSound( void ) const
{
	std::cout << "*Pure silence*" << std::endl;
}

const std::string &AAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream &operator<<( std::ostream &outStream, const AAnimal &animal )
{
	outStream << "Animal: " << animal.getType() << std::endl;
	return (outStream);
}
