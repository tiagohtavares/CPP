/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 11:41:52 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentionalPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ctime>

int main(void)
{
	std::srand(std::time(NULL));
	Bureaucrat	jeff("Jeff", 5);
	Bureaucrat	tom("Tom", 150);
	PresidentionalPardonForm moses("Moses");
	PresidentionalPardonForm paul("Paul");
	ShrubberyCreationForm	pine("Pine");
	RobotomyRequestForm		cp2("CP2");

	try
	{
		std::cout << "Bean!" << std::endl;
		Bureaucrat bean("Bean", 160);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << moses << std::endl;
	std::cout << paul << std::endl;
	std::cout << pine << std::endl;
	std::cout << cp2 << std::endl;

	jeff.signForm(moses);
	jeff.executeForm(moses);

	std::cout << std::endl;

	jeff.signForm(pine);
	jeff.executeForm(pine);
	
	std::cout << std::endl;
	std::cout << "Opening shruberry: " << std::endl;
	std::ifstream f("Pine_shrubbery");

	if (f.is_open())
		std::cout << f.rdbuf();
	std::cout << std::endl;

	try
	{
		jeff.executeForm(cp2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	jeff.signForm(cp2);
	try
	{
		tom.executeForm(cp2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	jeff.executeForm(cp2);
	return (0);
}
