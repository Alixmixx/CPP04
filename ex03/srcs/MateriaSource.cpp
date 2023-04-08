#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	:_NbMaterias(0)
{
	for (int i = 0; i < MateriaSource::_MateriaSize; i++)
		this->_Materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &copy )
{
	*this = copy;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &copy )
{
		for (int i = 0; i < MateriaSource::_materias_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (copy._materias[i])
			this->_materias[i] = copy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::_MateriaSize; i++)
	{
		if (this->_Materias[i])
			delete	this->_Materias[i];
	}
}

void MateriaSource::learnMateria( AMateria *to_learn )
{
	if (this->_NbMaterias >= MateriaSource::_MateriaSize)
		std::cout << "MateriaSource is full" << std::endl;
	else
	{
		this->_Materias[this->_NbMaterias] = to_learn;
		this->_NbMaterias++;
		std::cout << "Learned " << to_learn.getType() << std:endl;
	}
}

AMateria *MateriaSource::creatMateria( std::string const &type )
{
	for (int i = 0; i < MateriaSource::_MateriaSize && this->_Materias[i]; i++)
	{
		if (type == this->_Materias[i]->getType())
			return this->_Materias[i]->clone();
	}
	return NULL;
}

void MateriaSource::printMaterias( void ) const
{
	for (int i = 0; i < MateriaSource::_MateriaSize; i++)
	{
		if (this->_Materias[i])
			std::cout << i << ": " << this->_Materias[i]->getType() << std::endl;
		else
			std::cout << i << ": empty" << std::endl;
	}
}