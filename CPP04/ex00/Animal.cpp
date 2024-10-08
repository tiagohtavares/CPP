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
	std::cout << "Animal constructor called!" << std::endl;
	this->_type = "Default";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal( const Animal& cpy)
{
	std::cout << "Animal copy called" << std::endl;
	this->_type = cpy._type;
}

Animal &Animal::operator=(const Animal& cpy)
{
	if(this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignement copy called!" << std::endl;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal makes sound!" << std::endl;
}

std::string Animal::getType() const
{
	return(this->_type);
}
