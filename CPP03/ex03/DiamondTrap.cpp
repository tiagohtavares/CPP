/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:22:13 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 12:13:59 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default"), ScavTrap(), FragTrap(), _name("Default")
{
	this->_HP = FragTrap::HP;
	this->_STM = ScavTrap::STM;
	this->_ATK = FragTrap::ATK;
	std::cout << "DiamondTrap" << _name << "born!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name),FragTrap(name),_name(name)
{
	this->_HP = FragTrap::HP;
	this->_STM = ScavTrap::STM;
	this->_ATK = FragTrap::ATK;
	 std::cout << "DiamondTrap " << _name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap is destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) : ClapTrap(cpy)
{
	this->_name = cpy._name;
	this->_ATK = cpy._ATK;
	this->_HP = cpy._HP;
	this->_STM = cpy._STM;
	std::cout << "DiamondTrap " << _name << " is copied!" << std::endl;

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_ATK = cpy._ATK;
		this->_HP = cpy._HP;
		this->_STM = cpy._STM;
		std::cout << "Assignment operator DiamondTrap " << _name << " is called!" << std::endl;
	}
	return *this;
}

void DiamondTrap::printStats(void)
{
	std::cout << this->_HP << std::endl << this->_STM << std::endl << this->_ATK << std::endl;
}

void DiamondTrap::whoAmi()
{
	std::cout << "Diamond trap name is " << this->_name << std::endl;
	std::cout << "Clap trap name is " << ClapTrap::_name << std::endl;
}
