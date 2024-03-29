#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &copy );
		WrongAnimal &operator=( const WrongAnimal &copy );
		~WrongAnimal();

		virtual void makeSound( void ) const;
		const std::string &getType( void ) const;

	protected:
		std::string type;
};

std::ostream &operator<<( std::ostream &outStream, const WrongAnimal &wrongAnimal );

#endif
