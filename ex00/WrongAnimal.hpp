/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:37:02 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 14:46:19 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& obj);
	~WrongAnimal();
	std::string		getType() const;
	void			makeSound() const;
	WrongAnimal&	operator=(const WrongAnimal& obj);
};

#endif
