/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/15 15:10:08 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	jeff("Jeff", 100);
	Form		taxes("Taxes", 100, 40);
	Form		bribes("Bribes", 150, 150);
	Form		copytaxes(taxes);
	std::cout << jeff << std::endl;
	std::cout << taxes << std::endl;
	std::cout << "The output of taxes copy ----> " << copytaxes << std::endl;

	std::cout << bribes << std::endl;
	jeff.signForm(bribes);
	bribes.beSigned(jeff);
	copytaxes = bribes;
	std::cout << "The output of bribe assignment ---> " << copytaxes << std::endl;
	std::cout << bribes << std::endl;

	try
	{
		jeff.decrementGrade();
		std::cout << jeff;
		std::cout << taxes.getReqGradeSign() << std::endl;
		jeff.signForm(taxes);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	jeff.incrementGrade();
	std::cout << jeff << std::endl;
	taxes.beSigned(jeff);

	try
	{
		Form	error("Error", 151, 40);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
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
