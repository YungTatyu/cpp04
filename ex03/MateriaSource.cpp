#include "MateriaSource.hpp"

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
