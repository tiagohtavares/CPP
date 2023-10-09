/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:14:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_type = "Default";
	std::cout << "Brain is born!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain " << _type << " is destroyed!" << std::endl;
}

Brain::Brain( const Brain& cpy)
{
	this->_type = cpy._type;
	std::cout << "Brain " << _type << " is copied!" << std::endl;
}

Brain &Brain::operator=(const Brain& cpy)
{
	if(this != &cpy)
	{
		this->_type = cpy._type;
		std::cout << "Assignement copy of Brain is called!" << std::endl;
	}
	return *this;
}
