
#ifndef CHARCTER_H
#define CHARCTER_H

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	std::string name;
	size_t	numMateria;
	const static int	SLOT_SIZE = 4;
	AMateria	*slot[SLOT_SIZE];
public:
	Character();
	Character(std::string name);
	Character(const Character &obj);
	~Character();
	Character	&operator=(const Character &obj);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
