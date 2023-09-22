#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& obj);
	~Ice();
	Ice&	operator=(const Ice& obj);
	AMateria*	clone() const;
	void	use(ICharacter& target);
};

#endif
