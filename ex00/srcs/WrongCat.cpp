#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
	:WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy )
	:WrongAnimal(copy)
{
	*this = copy;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Oaim oaim" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &copy )
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}
