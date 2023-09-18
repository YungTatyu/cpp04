/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:14:19 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 16:46:56 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : idea_index(0)
{
	std::cout << "Brain default constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called\n";
	this->operator=(obj);
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < SIZE_IDEAS; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

void	Brain::memorize(std::string str)
{
	if (idea_index == 100)
		idea_index = 0;
	ideas[idea_index] = str;
	idea_index++;
}

void	Brain::printIdeas()
{
	std::cout << "printing all ideas\n";
	for (size_t i = 0; i < SIZE_IDEAS; i++)
		std::cout << ideas[i] << "\n";
	std::cout << "finished\n";
}
