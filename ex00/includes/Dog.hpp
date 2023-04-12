#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
	public:
		Dog();
		Dog( const Dog &copy );
		Dog &operator=( const Dog &copy );
		~Dog();

		void makeSound( void ) const;
};

std::ostream &operator<<( std::ostream &outStream, const Dog &dog );

#endif
