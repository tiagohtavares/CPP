/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:35:23 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/13 15:27:16 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	main()
{
	PhoneBook test;
	return 0;
}
