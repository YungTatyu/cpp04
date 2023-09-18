/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:48:44 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 14:12:26 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& obj);
	~WrongCat();
	WrongCat&	operator=(const WrongCat& obj);
	void		makeSound() const;
};

#endif
