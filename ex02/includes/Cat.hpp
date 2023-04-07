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

		Brain *getBrain( void ) const;

	private:
		Brain	*_brain;
};

#endif