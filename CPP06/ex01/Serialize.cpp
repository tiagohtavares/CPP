/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:31:57 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/14 11:31:03 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
	std::cout << "Serialize constructor called!" << std::endl;
}

Serialize::~Serialize()
{
	std::cout << "Serialize destructor called!" << std::endl;
}

Serialize::Serialize(const Serialize& cpy)
{
	(void)cpy;
	std::cout << "Copy constructor operator called" << std::endl;
}

Serialize &Serialize::operator=(const Serialize& cpy)
{
	(void)cpy;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

uintptr_t Serialize::serialize(data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

data* Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<data*>(raw));
}
