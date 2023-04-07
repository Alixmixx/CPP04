#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include <string>

class Dog : public AAnimal
{
	public:
		Dog();
		Dog( const Dog &copy );
		Dog &operator=( const Dog &copy );
		AAnimal &operator=( const AAnimal &copy );
		~Dog();

		Brain *getBrain( void ) const;

	private:
		Brain	*_brain;
};

#endif