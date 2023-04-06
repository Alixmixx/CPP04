#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

	for (int i = 0; i < this->_nbIdeas; i++)
		this->ideas[i] = "Some idea";
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
	std::cout << "Brain operator = called" << std::endl;
	for (int i = 0; i < Brain::_nbIdeas; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}