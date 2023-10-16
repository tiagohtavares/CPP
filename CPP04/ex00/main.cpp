/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 13:23:19 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
const Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;
Animal* test1 = new Cat();
Animal* test2 = new Dog();
*test1 = *i;
*test2 = *j;
Animal test3;
Animal test4;
Animal test5(test4);
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;

const WrongAnimal* metar = new WrongAnimal();
const WrongAnimal* x = new WrongCat();
std::cout << x->getType() << " " << std::endl;
x->makeSound(); //will output parent animal makesound sound!
metar->makeSound();
return 0;
}
