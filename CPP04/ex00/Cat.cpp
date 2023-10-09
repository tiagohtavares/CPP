/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 12:56:01 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is destroyed!" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	this->_type = cpy._type;
	std::cout << "Cat is copied!" << std::endl;

}

Cat& Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignment Operator Cat is called!" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEWWWWWWWWWWWOOOOOOOOOOOWWWWW!" << std::endl;
}
