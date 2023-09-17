/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:35:55 by tterao            #+#    #+#             */
/*   Updated: 2023/08/02 15:59:50 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& obj);
	~Animal();
	std::string	getType();
	void		makeSound();
	Animal&	operator=(const Animal& obj);
};

#endif
