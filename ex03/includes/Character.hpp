#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : class ICharacter
{
	public:
		Character( std::string const &name );
		~Character( void );

	private:
		std::string		_name;
		size_t			_NbItems;
		const size_t	_inventorySize = 4;
		AMateria		*_inventory[4];
};

#endif