#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal();
		Animal( const Animal &copy );
		Animal &operator=( const Animal &copy );
		virtual ~Animal();

		virtual void makeSound( void ) const;
		const std::string &getType( void ) const;

	protected:
		std::string type;
};

std::ostream &operator<<( std::ostream &outStream, const Animal &animal );

#endif
