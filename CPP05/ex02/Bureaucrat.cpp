/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:14:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(75)
{
	//std::cout << "Bureaucrat constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	//std::cout << "Bureaucrat constructor called!" << std::endl;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name) , _grade(cpy._grade)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& cpy)
{
	if(this != &cpy)
	{
		//const_cast<std::string&>(this->_name) = cpy._name; -> Since it's a const i think the correct thing to do is not to change it.
		this->setGrade(cpy._grade);
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
	if(this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName()
{
	return(this->_name);
}

int Bureaucrat::getGrade()
{
	return(this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade -= 1;
	if(this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade += 1;
	if(this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
	if (form.getSigned() == true)
	{
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	else
	{
		if (this->getGrade() <= form.getReqGradeSign())
		{
			form.beSigned(*this);
		}
		else
		{
			std::cout << this->getName() << " could not sign " << form.getName() << " because grade is to low " << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
	}
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception Grade too low";
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception Grade too high";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return(os);
}
