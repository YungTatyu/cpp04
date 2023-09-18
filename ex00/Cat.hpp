/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:31:10 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 15:58:45 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& obj);
	~Cat();
	void	makeSound() const;
	Cat&	operator=(const Cat& obj);
};

#endif
