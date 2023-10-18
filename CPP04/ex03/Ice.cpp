/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:03:39 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 14:15:19 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "Ice";
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& cpy)
{
	this->type = cpy.type;
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice& cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		std::cout << "Ice Operator assignment copy called" << std::endl;
	}
	return *this;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice Clone called" << std::endl;
	return NULL;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
