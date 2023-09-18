/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:31:10 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 17:54:37 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*Brain;
public:
	Cat();
	Cat(const Cat& obj);
	~Cat();
	void	makeSound() const;
	Cat&	operator=(const Cat& obj);
	void	learnNewThing(std::string str) const;
	void	printIdeas() const;
};

#endif
