/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:56 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "Cure";
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& cpy)
{
	this->type = cpy.type;
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure& cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		std::cout << "Cure Operator assignment copy called" << std::endl;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	std::cout << "Cure Clone called" << std::endl;
	return NULL;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
