/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:51:52 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 14:13:27 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << "WrongCat copy constructor called\n";
	this->type = obj.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	WrongAnimal::operator=(obj);
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat WrongCat WrongCat\n";
}
