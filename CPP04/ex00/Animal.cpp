/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:14:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Default";
	std::cout << "Animal is born!" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal " << _type << " is born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << _type << " is destroyed!" << std::endl;
}

Animal::Animal( const Animal& cpy)
{
	this->_type = cpy._type;
	std::cout << "Animal " << _type << " is copied!" << std::endl;
}

Animal &Animal::operator=(const Animal& cpy)
{
	if(this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignement copy of animal is called!" << std::endl;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes sound!" << std::endl;
}

std::string Animal::getType() const
{
	return(this->_type);
}
