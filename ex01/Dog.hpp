/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:12:31 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 17:52:35 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*Brain;
public:
	Dog();
	Dog(const Dog& obj);
	~Dog();
	void	makeSound() const;
	Dog&	operator=(const Dog& obj);
	void	learnNewThing(std::string str) const;
	void	printIdeas() const;
};
#endif
