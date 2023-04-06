#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat( const Cat &copy );
		Cat &operator=( const Cat &copy );
		Animal &operator=( const Animal &copy );
		~Cat();

		Brain *getBrain( void ) const;

	private:
		Brain	*_brain;
};

#endif