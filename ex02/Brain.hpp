/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:08:21 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 16:26:02 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
private:
	size_t	idea_index;
	static const size_t SIZE_IDEAS = 100;
public:
	std::string	ideas[SIZE_IDEAS];
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	void	printIdeas();
	void	memorize(std::string str);
};

#endif