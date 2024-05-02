/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 13:26:56 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	int * a = new int();
	std::cout << *a << std::endl;
	delete a;

	std::cout << "int arrays" << std::endl;


	std::cout << "empty test" << std::endl;
	Array<int> *test = new Array<int>();
	std::cout << test->size() << std::endl;

	delete test;
	std::cout << "normal test" << std::endl;
	Array<int> array1(10);
	std::cout << array1.size() << std::endl;

	for(int i = 0; i < array1.size(); i++)
	{
		array1[i] = i * i;
	}
	std::cout << std::endl;
	for(int i = 0; i < array1.size(); i++)
	{
		std::cout << array1[i] << " | ";
	}
	std::cout << std::endl;

	Array<int> array2;
	array2 = array1;
	std::cout << "Array copy assignment operator" << std::endl;
	for(int i = 0; i < array1.size(); i++)
	{
		std::cout << array1[i] << " | ";
	}
	std::cout << std::endl;

	std::cout << "char arrays" << std::endl;

	Array<char> array3(5);
	std::cout << array3.size() << std::endl;
	for(int i = 0; i < array3.size(); i++)
	{
		array3[i] = 'a' + i ;
	}
	for(int i = 0; i < array3.size(); i++)
	{
		std::cout << array3[i] << " | ";
	}
	std::cout << std::endl;
	std::cout << "string arrays" << std::endl;
	Array<const char*> array4(2);
	std::cout << array4.size() << std::endl;
	for(int i = 0; i < array4.size(); i++)
	{
		array4[i] = "adfd";
	}
	for(int i = 0; i < array4.size(); i++)
	{
		std::cout << array4[i] << " | ";
	}

	std::cout << std::endl;

	try
	{
		for(int i = 0; i < 100; i++)
		{
			array3[i] = 'a' + i ;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
