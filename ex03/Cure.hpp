#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string const & type);
	~Cure();
	AMateria*	clone() const;
};

#endif
