/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:07:10 by tterao            #+#    #+#             */
/*   Updated: 2023/09/18 21:43:54 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	{
		std::cout << "-----default test start-----\n";
		const Animal* dog0 = new Dog();
		const Animal* cat0 = new Cat();
		delete dog0;//should not create a leak
		delete cat0;
		std::cout << "-----default test end-----\n";
	}
	{
		std::cout << "-----copy operator test start-----\n";
		Dog dog;
		Cat cat;
		dog.learnNewThing("trick");
		dog.learnNewThing("trick2");
		cat.learnNewThing("scrach");
		cat.learnNewThing("scrach2");
		dog.printIdeas();
		cat.printIdeas();
		Dog dog2;
		Cat cat2;
		dog2 = dog;
		cat2 = cat;
		dog2.printIdeas();
		cat2.printIdeas();
		std::cout << "-----copy operator test end-----\n";
	}

	{
		Dog dog;
		Cat cat;
		std::cout << "-----copy constructor test start-----\n";
		dog.learnNewThing("trick3");
		dog.learnNewThing("trick4");
		cat.learnNewThing("scrach3");
		cat.learnNewThing("scrach4");
		dog.printIdeas();
		cat.printIdeas();
		Dog dog2(dog);
		Cat cat2(cat);
		dog2.printIdeas();
		cat2.printIdeas();
		std::cout << "-----copy constructor test end-----\n";
	}
	{
		std::cout << "\n-----Animals objs test start-----\n";
		Animal	*Animals[100];
		size_t	i = 0;
		while (i < 50)
		{
			Animals[i++] = new Dog();
			std::cout << "\n";
		}
		while (i < 100)
		{
			Animals[i++] = new Cat();
			std::cout << "\n";
		}
		std::cout << "-----Animals objs created-----\n\n";
		i = 0;
		while (i < 100)
		{
			delete Animals[i++];
			std::cout << "\n";
		}
		std::cout << "-----Animals objs test end-----\n";
	}
	#ifdef LEAKS
		system("leaks -q a.out");
	#endif
	return 0;
}
