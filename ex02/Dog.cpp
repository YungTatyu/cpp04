/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:15:03 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 19:32:16 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), Brain(new class Brain())
{
	std::cout << "Dog default constructor called\n";
	type = "Dog";
}

Dog::Dog(const Dog& obj) : Brain(new class Brain())
{
	std::cout << "Dog copy constructor called\n";
	operator=(obj);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete Brain;
}

void	Dog::makeSound() const
{
	std::cout << "arf arf!!\n";
}

Dog&	Dog::operator=(const Dog& obj)
{
	Animal::operator=(obj);
	*(this->Brain) = *(obj.Brain);
	return (*this);
}

void	Dog::learnNewThing(std::string str) const
{
	this->Brain->memorize(str);
}

void	Dog::printIdeas() const
{
	Brain->printIdeas();
}
