/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 11:28:52 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "Object test: " << std::endl;
	std::cout << std::endl;
	Bureaucrat	jeff("Jeff", 100);
	Form		taxes("Taxes", 100, 40);
	Form		bribes("Bribes", 150, 150);
	Form		copytaxes(taxes);
	std::cout << jeff;
	std::cout << taxes;
	std::cout << "Copytaxes: " << copytaxes;
	std::cout << bribes;
	
	std::cout << std::endl;
	std::cout << "Sign test: " << std::endl;
	std::cout << std::endl;
	jeff.signForm(bribes);
	bribes.beSigned(jeff);


	copytaxes = bribes;
	std::cout << "Copytaxes: " << copytaxes;
	std::cout << bribes;

	std::cout << std::endl;
	std::cout << "Exception test1: " << std::endl;
	std::cout << std::endl;

	try
	{
		jeff.decrementGrade();
		std::cout << jeff;
		std::cout << "Taxes gradereq: 	" << taxes.getReqGradeSign() << std::endl;
		jeff.signForm(taxes);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	jeff.incrementGrade();
	std::cout << jeff;
	taxes.beSigned(jeff);

	std::cout << std::endl;
	std::cout << "Exception test2: " << std::endl;
	std::cout << std::endl;

	try
	{
		Form	error("Error", 151, 40);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Exception test3: " << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	error("error", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
