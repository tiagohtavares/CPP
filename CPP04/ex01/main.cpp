/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 13:30:33 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Animal *animals[6] =
	{
		new Dog(),
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
		new Cat(),
	};
	for(int i = 0;i < 6;i++)
	{
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-----------Copy testing------------" << std::endl;
	Cat* test1 = new Cat();
	std::cout << test1->getBrain() << std::endl;

	Brain* catbrain1 = test1->getBrain();
	std::string* catTest1 = catbrain1->getIdeas();
	std::cout << catTest1[0] << std::endl;
	std::cout << std::endl;

	Cat* test2 = new Cat(*test1);
	delete test1;
	std::cout << test2->getBrain() << std::endl;

	Brain* catbrain2 = test2->getBrain();
	std::string* catTest2 = catbrain2->getIdeas();
	std::cout << catTest2[0] << std::endl;
	
	delete test2;
	std::cout << "-----------Copy testing ended------------" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Cat* cat = new Cat();
	Dog* dog = new Dog();

	Brain* catbrain = cat->getBrain();
	Brain* dogbrain = dog->getBrain();
	std::cout << std::endl;
	std::string* catTest = catbrain->getIdeas();
	std::string* dogTest = dogbrain->getIdeas();
	std::cout << catTest[0] << std::endl;
	std::cout << dogTest[1] << std::endl;
	std::cout << std::endl;
	delete cat;
	delete dog;
	return 0;
}
