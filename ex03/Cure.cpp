#include "Cure.hpp"

Cure::Cure() : AMateria(){}

Cure::Cure(std::string const & type) : AMateria(type){}

Cure::~Cure(){}

Cure::Cure(const Cure& obj)
{
	operator=(obj);
}

Cure&	Cure::operator=(const Cure& obj)
{
	AMateria::operator=(obj);
	return (*this);
}
