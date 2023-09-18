/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:12:31 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 14:28:16 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& obj);
	~Dog();
	void	makeSound() const;
	Dog&	operator=(const Dog& obj);
};
