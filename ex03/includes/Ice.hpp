#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const &copy );
		Ice &operator=( const Ice &copy );

		std::string const &getType( void ) const;
		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif
