#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat( const WrongCat &copy );
		WrongCat &operator=( const WrongCat &copy );
		~WrongCat();

		void makeSound( void ) const;
};

std::ostream &operator<<( std::ostream &outStream, const WrongCat &wrongCat );

#endif
