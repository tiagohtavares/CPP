/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 11:47:46 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentionalPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main(void)
{
	std::srand(std::time(NULL));
	// Bureaucrat	jeff("Jeff", 5);
	// Bureaucrat	tom("Tom", 150);
	// PresidentionalPardonForm moses("Moses");
	// PresidentionalPardonForm paul("Paul");
	// ShrubberyCreationForm	pine("Pine");
	// RobotomyRequestForm		cp2("CP2");

	// try
	// {
	// 	std::cout << "Bean!" << std::endl;
	// 	Bureaucrat bean("Bean", 160);
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << moses << std::endl;
	// std::cout << paul << std::endl;
	// std::cout << pine << std::endl;
	// std::cout << cp2 << std::endl;

	// jeff.signForm(moses);
	// jeff.executeForm(moses);

	// jeff.signForm(pine);
	// jeff.executeForm(pine);

	// try
	// {
	// 	jeff.executeForm(cp2);
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// jeff.signForm(cp2);
	// try
	// {
	// 	tom.executeForm(cp2);
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// jeff.executeForm(cp2);
	Bureaucrat tom("Tom", 5);
	Intern jeff;
	AForm *test;

	test = jeff.makeForm("robotomy request", "paul");
	std::cout << *test << std::endl;
	tom.signForm(*test);
	tom.executeForm(*test);
	delete test;

	Intern ezkiel;
	AForm *inv;

	try
	{
		inv = ezkiel.makeForm("shrubbery request", "reara");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *inv << std::endl;
	tom.signForm(*inv);
	tom.executeForm(*inv);
	delete inv;

	try
	{
		inv = ezkiel.makeForm("fadfa request", "reara");
		delete inv;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
