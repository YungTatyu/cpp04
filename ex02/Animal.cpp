/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:39:39 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 16:48:17 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called\n";
	this->type = obj.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal Animal\n";
}

Animal&	Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}
