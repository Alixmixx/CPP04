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
	this->operator=(copy);
}

WrongCat &WrongCat::operator=( const WrongCat &copy )
{
		if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}