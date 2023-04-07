#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		virtual ~AAnimal();
		virtual AAnimal &operator=( const AAnimal &copy ) = 0;

		void makeSound( void ) const;
		const std::string &getType( void ) const;
		virtual Brain *getBrain( void ) const = 0;

	protected:
		std::string type;
};

#endif