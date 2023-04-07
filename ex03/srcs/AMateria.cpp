#include "AMateria.hpp"

AMateria::AMateria( const std::string &type )
	: type(type)
{
	std::cout << "String constructor for AMateria called" << std::endl;
	return;
}

const std::string &AMateria::getType( void ) const
{
	return this->_type;
}