/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 13:04:36 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
	this->_type = cpy._type;
	std::cout << "WrongCat is copied!" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignment Operator WrongCat is called!" << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong MEWWWWWWWWWWWOOOOOOOOOOOWWWWW!" << std::endl;
}
