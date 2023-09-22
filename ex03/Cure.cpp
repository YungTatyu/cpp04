#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure(){}

Cure::Cure(const Cure& obj) : AMateria(obj.getType())
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
