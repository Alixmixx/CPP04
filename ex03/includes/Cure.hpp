#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const &copy );
		Cure &operator=( const Cure &copy );

		std::string const &getType( void ) const;
		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif
