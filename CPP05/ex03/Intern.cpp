/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:18:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/22 15:26:57 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	//std::cout << "Intern constructor called!" << std::endl;
}

Intern::~Intern()
{
	//std::cout << "Intern destructor called!" << std::endl;
}

Intern::Intern(const Intern& cpy)
{
	(void)cpy;
	//std::cout << "Copy constructor operator called" << std::endl;
}

Intern &Intern::operator=(const Intern& cpy)
{
	(void)cpy;
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string names[3] =
	{
		"shrubbery request",
		"robotomy request",
		"presidentional  request"
	};

	AForm* (Intern::*functions[3])(std::string) =
	{
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentionalPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
		{
			return((this->*functions[i])(target));
		}
	}
	std::cout << "Could not find form" << std::endl;
	throw Intern::FormNotFoundException();
}

AForm* Intern::makePresidentionalPardonForm(std::string target)
{
	std::cout << "Intern makes Presidentional Pardon Form" << std::endl;
	return (new PresidentionalPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm(std::string target)
{
	std::cout << "Intern makes Robotomy Request Form" << std::endl;
	return (new RobotomyRequestForm(target));
}
AForm* Intern::makeShrubberyCreationForm(std::string target)
{
	std::cout << "Intern makes Shrubbery Creation Form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

char const *Intern::FormNotFoundException::what() const throw()
{
	return "Form doesn't exist!";
}

