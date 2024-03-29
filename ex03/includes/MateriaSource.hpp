#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &copy );
		MateriaSource &operator=( const MateriaSource &copy );
		~MateriaSource( void );

		virtual void learnMateria( AMateria *to_learn );
		virtual AMateria *createMateria( std::string const &type );
		void printMaterias( void ) const;

	private:
		const static size_t	_MateriaSize = 4;
		AMateria			*_Materias[MateriaSource::_MateriaSize];
		size_t				_NbMaterias;
};

#endif
