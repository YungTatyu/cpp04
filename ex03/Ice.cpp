#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

// Ice::Ice(std::string const & type) : AMateria(type){}

Ice::~Ice(){}

Ice::Ice(const AMateria& obj)
{
	operator=(obj);
}

Ice&	Ice::operator=(const AMateria& obj)
{
	AMateria::operator=(obj);
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria*	Ice::clone() const
{
	AMateria	*newobj = new Ice();
	*newobj = *this;
	return (newobj);
}
