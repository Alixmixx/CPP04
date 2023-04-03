#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	this->operator=(copy);
}

Brain &Brain::operator=( const Brain &copy)
{
	for (int i = 0; i < Brain::_nbIdeas; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}