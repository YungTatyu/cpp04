#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria
{
public:
	Cure();
	// Cure(std::string const & type);
	Cure(const AMateria& obj);
	~Cure();
	Cure&	operator=(const AMateria& obj);
	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
