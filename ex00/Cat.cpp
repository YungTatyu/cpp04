/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:31:40 by tterao            #+#    #+#             */
/*   Updated: 2023/08/02 16:32:30 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called\n";
	type = "Cat";
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Cat copy constructor called\n";
	Animal(obj);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void	makeSound()
{
	std::cout << "meow\n";
}

Cat&	Cat::operator=(const Cat& obj)
{
	Animal::operator=(obj);
}
