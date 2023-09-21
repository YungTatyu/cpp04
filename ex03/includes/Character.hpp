
#ifndef CHARCTER_H
#define CHARCTER_H

#include "AMateria.hpp"
#include <iostream>

class Character
{
private:
	std::string name;
	size_t	numMateria;
	const static size_t	SLOT_SIZE = 4;
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
