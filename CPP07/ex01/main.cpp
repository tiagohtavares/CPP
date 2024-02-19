/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/19 19:04:46 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void square(int& a)
{
	a = a * a;
}

int main(void)
{

	std::cout << "int: " << std::endl;
	int iarray[] = {42, -42, 27, 345, -123456};
	::iter(iarray, 5, ::print);
	std::cout << std::endl;
	std::cout << "int squared: " << std::endl;
	::iter(iarray, 5, ::square);
	::iter(iarray, 5, ::print);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "char: " << std::endl;
	char carray[] = {'A', 'B', 'C', '5'};
	::iter(carray, 4, ::print);
	std::cout << std::endl;
	std::cout << "char to lower: " << std::endl;
	::iter(carray, 4, ::ft_tolower);
	::iter(carray, 4, ::print);
	std::cout << std::endl;
}
