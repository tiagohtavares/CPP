/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:14:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Default";
	std::cout << "WrongAnimal is born!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "WrongAnimal " << _type << " is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << _type << " is destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& cpy)
{
	this->_type = cpy._type;
	std::cout << "WrongAnimal " << _type << " is copied!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& cpy)
{
	if(this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignement copy of Wronganimal is called!" << std::endl;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->_type);
}
