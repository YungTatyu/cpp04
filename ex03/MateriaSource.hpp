#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	const static size_t	SOURCE_SIZE = 4;
	size_t	numSource;
	AMateria	*sources[SOURCE_SIZE];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &obj);
	void	learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif
