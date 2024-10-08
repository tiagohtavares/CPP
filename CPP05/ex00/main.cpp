/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 11:14:26 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat test1;
	std::cout << test1 << std::endl;
	Bureaucrat test2("Jeff", 1);
	std::cout << test2 << std::endl;
	Bureaucrat test3("Tom", 150);
	std::cout << test3 << std::endl;

	Bureaucrat test4(test3);
	std::cout << test4 << std::endl;

	Bureaucrat test5;
	test5 = test2;
	std::cout << test5 << std::endl;

	std::cout << "Create bureaucrat error -15: " << std::endl;
	try
	{
		Bureaucrat error("error", -15);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Increment Jeff Grade 1: " << std::endl;
	try
	{
		test2.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Decrement Tom Grade 150: " << std::endl;
	try
	{
		test3.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
