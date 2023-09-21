#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	// Ice(std::string const & type);
	Ice(const AMateria& obj);
	~Ice();
	Ice&	operator=(const AMateria& obj);
	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
