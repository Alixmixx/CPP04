#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
	:AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice( Ice const &copy )
	:AMateria("ice")
{
	*this = copy;
	return;
}

Ice &Ice::operator=( const Ice &copy )
{
	this->type = copy.type;
	return (*this);
}

std::string const &Ice::getType( void ) const
{
	return (this->type);
}

AMateria *Ice::clone( void ) const
{
	return (new Ice(*this));
}

void Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}