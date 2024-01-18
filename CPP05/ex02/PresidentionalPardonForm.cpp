/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentionalPardonForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:33:33 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/18 11:39:39 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentionalPardonForm.hpp"

PresidentionalPardonForm::PresidentionalPardonForm() : AForm("PresidentionalPardonForm", 25, 5), _target("Default")
{
	//std::cout << "PresidentionalPardonForm constructor called!" << std::endl;
}

PresidentionalPardonForm::PresidentionalPardonForm(std::string target) : AForm("PresidentionalPardonForm", 25, 5), _target(target)
{
	//std::cout << "PresidentionalPardonForm constructor called!" << std::endl;
}

PresidentionalPardonForm::~PresidentionalPardonForm()
{
	//std::cout << "PresidentionalPardonForm destructor called!" << std::endl;
}

PresidentionalPardonForm::PresidentionalPardonForm(const PresidentionalPardonForm& cpy) : AForm(cpy), _target(cpy._target)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

PresidentionalPardonForm &PresidentionalPardonForm::operator=(const PresidentionalPardonForm& cpy)
{
	if(this != &cpy)
	{
		//const_cast<std::string&>(this->_name) = cpy._name; -> Since it's a const i think the correct thing to do is not to change it.
		this->_target = cpy._target;
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

void PresidentionalPardonForm::typeexecute(void) const
{
	std::cout << this->_target << " has been pardon by Zaphod Beeblebrox." << std::endl;
}
