#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

// Cure::Cure(std::string const & type) : AMateria(type){}

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

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria*	Cure::clone() const
{
	AMateria	*newobj = new Cure();
	*newobj = *this;
	return (newobj);
}
