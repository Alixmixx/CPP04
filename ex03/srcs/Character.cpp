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
	if (this->_NbItems == Character::_inventorySize)
	{
		std::cout << "Inventory full" << std::endl;
		return;
	}
	this->_inventory[this->_NbItems] = m;
	this->_NbItems++;
	std::cout << this->_name << " equipped a "
		<< m.getType() << std::endl;
}

void Character::unequip( int idx )
{
	if (idx < 0 || idx >= Character::_inventorySize)
	{
		std::cout << "Wrong index" << std::endl;
		return;
	}
	std::cout << this->_name << " dropped a "
		<< this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx > Character::_inventorySize)
		return;
	this->_inventory[idx]->use(target);
	this->unequip(idx);
}