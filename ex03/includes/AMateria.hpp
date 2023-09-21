#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string type;
public:
	// AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& obj);
	~AMateria();
	AMateria&	operator=(const AMateria& obj);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
