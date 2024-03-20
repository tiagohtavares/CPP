/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/20 14:57:26 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main( void )
{
	std::cout << std::endl;
	std::cout << "Vector:" << std::endl;

	std::vector<int> test1;

	test1.push_back(15);
	test1.push_back(42);
	test1.push_back(57);
	test1.push_back(64);

	std::vector<int>::iterator it1 = test1.begin();
	while(it1 != test1.end())
	{
		std::cout << *it1 << std::endl;
		it1++;
	}

	std::cout << "Searching: " << std::endl;
	
	try
	{
		easyfind(test1, 15);
		easyfind(test1, 42);
		easyfind(test1, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "List:" << std::endl;

	std::list<int> test2;

	test2.push_back(42);
	test2.push_back(55);
	test2.push_back(16);
	test2.push_back(98);
	std::list<int>::iterator it2 = test2.begin();
	while(it2 != test2.end())
	{
		std::cout << *it2 << std::endl;
		it2++;
	}

	std::cout << "Searching: " << std::endl;

	try
	{
		easyfind(test2, 42);
		easyfind(test2, 55);
		easyfind(test2, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;	
}
