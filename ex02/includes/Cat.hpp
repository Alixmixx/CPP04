#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal
{
	public:
		Cat();
		Cat( const Cat &copy );
		Cat &operator=( const Cat &copy );
		AAnimal &operator=( const AAnimal &copy );
		~Cat();

		void makeSound( void ) const;
		Brain *getBrain( void ) const;

	private:
		Brain	*_brain;
};

std::ostream &operator<<( std::ostream &outStream, const Cat &cat );

#endif
