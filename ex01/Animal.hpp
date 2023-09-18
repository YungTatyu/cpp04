/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:35:55 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 17:58:00 by tterao           ###   ########.fr       */
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
	virtual ~Animal(); //upcastする場合、仮想ディストラクタにしなければ、継承クラスのディストラクタが呼ばれない
	std::string		getType() const;
	virtual void	makeSound() const; //upcast、継承クラスでメンバ関数をオーバーロードする場合、仮想関数として扱う
	Animal&	operator=(const Animal& obj);
	virtual void	learnNewThing(std::string str) const = 0;
	virtual void	printIdeas() const = 0;
};

#endif
