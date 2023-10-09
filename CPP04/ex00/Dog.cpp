/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 12:56:08 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is destroyed!" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	this->_type = cpy._type;
	std::cout << "Dog is copied!" << std::endl;

}

Dog& Dog::operator=(const Dog& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignement Operator dog is called!" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOOOOOOOOF!" << std::endl;
}
