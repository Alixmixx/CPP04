#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		static const int	_nbIdeas = 100;

	public:
		Brain();
		Brain( const Brain &copy );
		Brain &operator=( const Brain &copy);
		~Brain();
		void	

		std::string	ideas[_nbIdeas];
};

#endif