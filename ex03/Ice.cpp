#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice"){}

// Ice::Ice(std::string const & type) : AMateria(type){}

Ice::~Ice(){}

Ice::Ice(const Ice& obj) : AMateria(obj.getType())
{
	operator=(obj);
}

Ice&	Ice::operator=(const Ice& obj)
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
