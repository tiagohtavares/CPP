/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 10:24:13 by ttavares         ###   ########.fr       */
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
	//Animal test("test");

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
