/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:28:30 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/20 15:07:44 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(void) {

}

Zombie::Zombie(std::string str)
{
	std::cout << "Constructor started" << std::endl;
	this->name = str;
}
Zombie::~Zombie(void)
{
	std::cout << this->name << " is dieded" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiinnnnzzzZ..." << std::endl;
}

void Zombie::set(std::string str)
{
	this->name = str;
}
