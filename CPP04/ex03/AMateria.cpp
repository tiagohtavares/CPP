/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:14:34 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 11:33:45 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& cpy)
{
	this->type = cpy.type;
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria& cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		std::cout << "AMateria Operator assignment copy called" << std::endl;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

// AMateria* AMateria::clone()
// {
// 	std::cout << "Clone called" << std::endl;
// }
void AMateria::use(ICharacter& target)
{
	std::cout << "* materia " << target.getName() << std::endl;
}
