/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:32:59 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/18 15:41:16 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	//std::cout << "ShrubberyCreationForm constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	//std::cout << "ShrubberyCreationForm constructor called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm(cpy), _target(cpy._target)
{
	//std::cout << "Copy constructor operator called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cpy)
{
	if(this != &cpy)
	{
		//const_cast<std::string&>(this->_name) = cpy._name; -> Since it's a const i think the correct thing to do is not to change it.
		this->_target = cpy._target;
		//std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

void ShrubberyCreationForm::typeexecute(void) const
{
	std::ofstream outfile;

	outfile.open((this->_target + "_shrubbery").c_str());
	if(outfile.is_open())
	{
		outfile << "	    $$		" << "\n";
		outfile << "	   $$$$		" << "\n";
		outfile << "	  $$$$$$	" << "\n";
		outfile << "	  $$$$$$	" << "\n";
		outfile << "	 $$$$$$$$	" << "\n";
		outfile << "	 $$$$$$$$	" << "\n";
		outfile << "	$$$$$$$$$$	" << "\n";
		outfile << "	    ##		" << "\n";
		outfile << "	    ##		" << "\n";
		outfile << "	    ##		" << "\n";
		outfile.close();
	}
}
