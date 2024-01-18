/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:42:40 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/18 15:45:43 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	//std::cout << "RobotomyRequestForm constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	//std::cout << "RobotomyRequestForm constructor called!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequestForm destructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy), _target(cpy._target)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy)
{
	if(this != &cpy)
	{
		//const_cast<std::string&>(this->_name) = cpy._name; -> Since it's a const i think the correct thing to do is not to change it.
		this->_target = cpy._target;
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

void RobotomyRequestForm::typeexecute(void) const
{
	int	random = std::rand();

	std::cout << "*DRILLING NOISES*" << std::endl;
	if (random % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
		std::cout << "robotomy has failed on " << this->_target << std::endl;
}
