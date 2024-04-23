/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 14:07:30 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main( void )
{
	std::srand(std::time(NULL));
	Span sp = Span(5);
	
	std::cout << "Vector: " << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(11);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	Span sp2 = Span(1);
	try
	{
		sp2.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Vector: " << std::endl;
	Span sp1 = Span(100);
	sp1.fill();
	sp1.print();
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	return 0;
}
