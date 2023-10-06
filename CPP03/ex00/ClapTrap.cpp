/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/06 14:40:20 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_ATK = 0;
	this->_HP = 10;
	this->_STM = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_STM > 0 && this->_HP > 0)
		std::cout << "Claptrap " << this->_name << " attacks "<< target << ", causing " << _ATK << " points of damage!" << std::endl;
	else
		std::cout << "Claptrap " << this->_name << "cant attack!" << std::endl;
	this->_STM = this->_STM - 1;
}

void ClapTrap::takeDamage(unsigned int ammount)
{
	if(this->_HP > 0)
	{
		this->_HP = this->_HP - ammount;
		std::cout << "Claptrap "<< this->_name << " takes " << ammount << " damage and drops to " << _HP << "!" << std::endl;
	}
	else
		std::cout << "Claptrap "<< this->_name << " has no HP left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int ammount)
{
	if(this->_STM > 0 && this->_HP > 0)
	{
		this->_HP = this->_HP + ammount;
		this->_STM = this->_STM - 1;
		std::cout << "Claptrap "<< this->_name << " was repaired for " << ammount << " and is now at " << this->_HP << "!" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " cant repair himself!" << std::endl;
}
