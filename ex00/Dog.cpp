/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:15:03 by tterao            #+#    #+#             */
/*   Updated: 2023/09/17 18:30:52 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called\n";
	type = "Dog";
}

Dog::Dog(const Dog& obj)
{
	std::cout << "Dog copy constructor called\n";
	this->type = obj.type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "arf arf!!\n";
}

Dog&	Dog::operator=(const Dog& obj)
{
	Animal::operator=(obj);
	return (*this);
}
