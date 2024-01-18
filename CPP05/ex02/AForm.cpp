/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:59:16 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/15 14:54:23 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _reqGradeSign(100), _reqGradeExec(50)
{
	//std::cout << "AForm constructor called!" << std::endl;
}

AForm::AForm(std::string name, int reqGradeSign, int reqGradeExec) : _name(name), _signed(false), _reqGradeSign(reqGradeSign), _reqGradeExec(reqGradeExec)
{
	//std::cout << "AForm constructor called!" << std::endl;
	if(this->_reqGradeExec > 150 || this->_reqGradeSign > 150)
		throw AForm::GradeTooLowException();
	if(this->_reqGradeExec < 1 || this->_reqGradeSign < 1)
		throw AForm::GradeTooHighException();
}

AForm::~AForm()
{
	//std::cout << "AForm destructor called!" << std::endl;
}

AForm::AForm(const AForm& cpy) : _name(cpy._name) , _signed(cpy._signed) , _reqGradeSign(cpy._reqGradeSign), _reqGradeExec(cpy._reqGradeExec)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

AForm &AForm::operator=(const AForm& cpy)
{
	if(this != &cpy)
	{
		//const_cast<std::string&>(this->_name) = cpy._name; -> Since it's a const i think the correct thing to do is not to change it.
		this->_signed = cpy._signed;
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

std::string AForm::getName() const
{
	return(this->_name);
}

bool AForm::getSigned() const
{
	return(this->_signed);
}

int AForm::getReqGradeExec() const
{
	return(this->_reqGradeExec);
}

int AForm::getReqGradeSign() const
{
	return(this->_reqGradeSign);
}

void AForm::beSigned(Bureaucrat& bureau)
{
	if (this->_signed == true)
	{
		std::cout << "AForm already signed" << std::endl;
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
		throw AForm::GradeTooLowException();
	}
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getReqGradeExec())
	{
		throw AForm::BureaucratGradeToLowException();
	}
	if (!this->getSigned())
	{
		throw AForm::FormUnsignedException();
	}
	this->typeexecute();
}

char const *AForm::GradeTooLowException::what() const throw()
{
	return "Exception->Grade too low.";
}

char const *AForm::GradeTooHighException::what() const throw()
{
	return "Exception->Grade too high.";
}

char const *AForm::FormUnsignedException::what() const throw()
{
	return "Exception->Form not signed.";
}

char const *AForm::BureaucratGradeToLowException::what() const throw()
{
	return "Exception->Bureaucrat grade is to low to execute.";
}

std::ostream& operator<<(std::ostream& os, AForm& src)
{
	os << src.getName() << ", signature : " << src.getSigned() << " Required grade to sign : " << src.getReqGradeSign() << " Required grade to exec : " << src.getReqGradeExec() << "." << std::endl;
	return(os);
}
