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
		Animal &operator=( const Animal &copy );
		~Dog();

		Brain *getBrain( void ) const;

	private:
		Brain	*_brain;
};

#endif