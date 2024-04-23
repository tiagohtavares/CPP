/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:59:16 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 11:20:19 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _reqGradeSign(100), _reqGradeExec(50)
{
	//std::cout << "Form constructor called!" << std::endl;
}

Form::Form(std::string name, int reqGradeSign, int reqGradeExec) : _name(name), _signed(false), _reqGradeSign(reqGradeSign), _reqGradeExec(reqGradeExec)
{
	//std::cout << "Form constructor called!" << std::endl;
	if(this->_reqGradeExec > 150 || this->_reqGradeSign > 150)
		throw Form::GradeTooLowException();
	if(this->_reqGradeExec < 1 || this->_reqGradeSign < 1)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
	//std::cout << "Form destructor called!" << std::endl;
}

Form::Form(const Form& cpy) : _name(cpy._name) , _signed(cpy._signed) , _reqGradeSign(cpy._reqGradeSign), _reqGradeExec(cpy._reqGradeExec)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

Form &Form::operator=(const Form& cpy)
{
	if(this != &cpy)
	{
		this->_signed = cpy._signed;
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

std::string Form::getName()
{
	return(this->_name);
}

bool Form::getSigned()
{
	return(this->_signed);
}

int Form::getReqGradeExec()
{
	return(this->_reqGradeExec);
}

int Form::getReqGradeSign()
{
	return(this->_reqGradeSign);
}

void Form::beSigned(Bureaucrat& bureau)
{
	if (this->_signed == true)
	{
		std::cout << "Form already signed" << std::endl;
		return;
	}
	if (bureau.getGrade() <= this->getReqGradeSign())
	{
		this->_signed = true;
		bureau.signForm(*this);
	}
	else
	{
		bureau.signForm(*this);
		throw Form::GradeTooLowException();
	}

}

char const *Form::GradeTooLowException::what() const throw()
{
	return "Exception Grade too low";
}

char const *Form::GradeTooHighException::what() const throw()
{
	return "Exception Grade too high";
}

std::ostream& operator<<(std::ostream& os, Form& src)
{
	os << src.getName() << ", signature : " << src.getSigned() << " Required grade to sign : " << src.getReqGradeSign() << " Required grade to exec : " << src.getReqGradeExec() << "." << std::endl;
	return(os);
}
