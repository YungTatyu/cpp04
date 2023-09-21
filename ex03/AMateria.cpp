#include "AMateria.hpp"
#include "ICharacter.hpp"

// AMateria::AMateria() : type(""){}

AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria(const AMateria& obj)
{
	operator=(obj);
}

AMateria::~AMateria(){}

std::string const &AMateria::getType() const
{
	return (type);
}
AMateria&	AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
