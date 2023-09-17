/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:38:46 by tterao            #+#    #+#             */
/*   Updated: 2023/08/02 16:44:18 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy constructor called\n";
	this->type = obj.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

std::string	WrongAnimal::getType()
{
	return (type);
}

void	WrongAnimal::makeSound()
{
	std::cout << "yes, im not an animal hehe\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
