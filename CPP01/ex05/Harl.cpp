/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:57:45 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/25 11:49:54 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug(void)
{
	std::cout << "Debugging" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Inforiing" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warnaring" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Erroring" << std::endl;
}

void Harl::complain(std::string level)
{
	void(Harl::*functions[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	i;
	i = 0;
	while(i < 4)
	{
		if(levels[i] == level)
		{
			(this->*functions[i])();
		}
		i++;
	}
}
