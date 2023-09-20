#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string const & type);
	~Ice();
	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
