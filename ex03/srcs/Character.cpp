#include "Character.hpp"

Character::Character( void )
	:_NbItems(0),
	_name("")
{
	for (size_t i = 0; i < Character::_inventorySize; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string const &name )
{
	*this = Character();
	this->_name = name;
}

Character::~Character( void )
{

}

Character::Character( const Character &copy )
{
	*this = copy;
}

Character &Character::operator=( const Character &copy )
{
	this->_NbItems = 0;
	for (int i = 0; i < Character::_inventorySize; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = copy._inventory[i];
		if (copy._inventory[i])
			this->_NbItems++;
	}
	this->_name = copy.getName();
	return *this;
}

std::string const &Character::getName( void ) const
{
	return (this->name);
}

void Character::equip( AMateria *m )
{

}

void Character::unequip( int idx )
{

}

void Character::use( int idx, ICharacter &target )
{

}