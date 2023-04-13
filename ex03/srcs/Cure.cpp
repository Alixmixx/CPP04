#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
	:AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure( Cure const &copy )
	:AMateria("cure")
{
	*this = copy;
	return;
}

Cure &Cure::operator=( const Cure &copy )
{
	this->type = copy.type;
	return (*this);
}

std::string const &Cure::getType( void ) const
{
	return (this->type);
}

AMateria *Cure::clone( void ) const
{
	return (new Cure(*this));
}

void Cure::use( ICharacter &target )
{
	std::cout << "* shoots an Cure bolt at "
		<< target.getName() << " *" << std::endl;
}
