#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name(""), numMateria(0)
{
	for (size_t i = 0; i < SLOT_SIZE; i++)
		slot[i] = nullptr;
}

Character::Character(std::string name) : name(name), numMateria(0)
{
	for (size_t i = 0; i < SLOT_SIZE; i++)
		slot[i] = nullptr;
}

Character::Character(const Character& obj)
{
	operator=(obj);
}

Character::~Character() {}

Character	&Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->numMateria = obj.numMateria;
		for (size_t i = 0; i < SLOT_SIZE; i++)
			this->slot[i] = obj.slot[i];
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	size_t	i = 0;

	if (numMateria == SLOT_SIZE)
		return;
	while (i < SLOT_SIZE)
	{
		if (slot[i] == nullptr)
			break;
		i++;
	}
	slot[i] = m;
	numMateria++;
}

void	Character::unequip(int idx)
{
	if (idx >= SLOT_SIZE || idx < 0 || slot[idx] == nullptr)
		return;
	slot[idx] = nullptr;
	numMateria--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= SLOT_SIZE || idx < 0 || slot[idx] == nullptr)
		return;
	slot[idx]->use(target);
}
