#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : numSource(0)
{
	for (size_t i = 0; i < SOURCE_SIZE; i++)
		sources[i] = nullptr;
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	operator=(obj);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < SOURCE_SIZE; i++)
			this->sources[i] = obj.sources[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	size_t	i = 0;

	if (i == SOURCE_SIZE)
		return;
	while (i < SOURCE_SIZE)
	{
		if (sources[i] == nullptr)
			break;
		i++;
	}
	sources[i] = m;
	numSource++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		if (sources[i] != nullptr && sources[i]->getType() == type)
			break;
		i++;
	}
	if (i == SOURCE_SIZE)
		return (nullptr);
	return sources[i]->clone();
}
