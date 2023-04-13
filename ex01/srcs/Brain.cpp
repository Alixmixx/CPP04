#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

	for (int i = 0; i < Brain::_nbIdeas; i++)
		this->ideas[i] = "Some idea";
}

Brain::~Brain()
{
	//std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	std::cout << "Brain copy called" << std::endl;
	for (int i = 0; i < Brain::_nbIdeas; i++)
		ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=( const Brain &copy)
{
	std::cout << "Brain operator = called" << std::endl;
	for (int i = 0; i < Brain::_nbIdeas; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}

int	Brain::getNbIdeas( void ) const
{
	return (_nbIdeas);
}

std::ostream &operator<<( std::ostream &outStream, const Brain &element )
{
	outStream << "Ideas:" << std::endl;
	for (int i = 0; i < element.getNbIdeas(); i++)
		outStream << element.ideas[i] << " ";
	outStream << std::endl;
	return (outStream);
}
