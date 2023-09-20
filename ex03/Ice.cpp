#include "Ice.hpp"

Ice::Ice() : AMateria(){}

Ice::Ice(std::string const & type) : AMateria(type){}

Ice::~Ice(){}

Ice::Ice(const Ice& obj)
{
	operator=(obj);
}

Ice&	Ice::operator=(const Ice& obj)
{
	AMateria::operator=(obj);
	return (*this);
}