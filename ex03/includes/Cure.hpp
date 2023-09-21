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
	Cure(const Cure& obj);
	~Cure();
	Cure&	operator=(const Cure& obj);
	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
