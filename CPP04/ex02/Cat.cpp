/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 10:05:19 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat is destroyed!" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	this->_brain = new Brain(*cpy._brain);
	this->_type = cpy._type;
	std::cout << "Cat is copied!" << std::endl;

}

Cat& Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		delete this->_brain;
		this->_brain = new Brain(*cpy._brain);
		std::cout << "Assignment Operator Cat is called!" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEWWWWWWWWWWWOOOOOOOOOOOWWWWW!" << std::endl;
}

Brain *Cat::getBrain()
{
	return(this->_brain);
}
