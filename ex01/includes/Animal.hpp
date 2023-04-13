#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal( const Animal &copy );
		virtual Animal &operator=( const Animal &copy );
		virtual ~Animal();

		virtual void makeSound( void ) const;
		const std::string &getType( void ) const;
		virtual Brain *getBrain( void ) const = 0;

	protected:
		std::string type;
};

std::ostream &operator<<( std::ostream &outStream, const Animal &animal );

#endif
