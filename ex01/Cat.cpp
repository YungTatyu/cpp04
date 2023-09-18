/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:31:40 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 19:32:05 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), Brain(new class Brain())
{
	std::cout << "Cat default constructor called\n";
	type = "Cat";
}

Cat::Cat(const Cat& obj) : Brain(new class Brain())
{
	std::cout << "Cat copy constructor called\n";
	operator=(obj);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete Brain;
}

void	Cat::makeSound() const
{
	std::cout << "meow~\n";
}

Cat&	Cat::operator=(const Cat& obj)
{
	Animal::operator=(obj);
	*(this->Brain) = *(obj.Brain);
	return (*this);
}

void	Cat::learnNewThing(std::string str) const
{
	this->Brain->memorize(str);
}

void	Cat::printIdeas() const
{
	Brain->printIdeas();
}
