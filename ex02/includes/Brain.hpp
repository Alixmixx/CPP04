#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		static const int	_nbIdeas = 100;

	public:
		Brain();
		Brain( const Brain &copy );
		Brain &operator=( const Brain &copy);
		~Brain();

		std::string	ideas[_nbIdeas];
};

#endif