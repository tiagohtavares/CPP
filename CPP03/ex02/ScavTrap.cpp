/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 11:57:28 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_HP = this->HP;
	this->_STM = this->STM;
	this->_ATK = this->ATK;
	std::cout << "Scav is born" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	this->_HP = this->HP;
	this->_STM = this->STM;
	this->_ATK = this->ATK;
	 std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	this->_name = cpy._name;
	this->_ATK = cpy._ATK;
	this->_HP = cpy._HP;
	this->_STM = cpy._STM;
	std::cout << "Scavtrap " << _name << " is copied!" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_ATK = cpy._ATK;
		this->_HP = cpy._HP;
		this->_STM = cpy._STM;
		std::cout << "Assignment operator ScavTrap " << _name << " is called!" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_STM > 0 && this->_HP > 0)
		std::cout << "ScavTrap " << this->_name << " attacks "<< target << ", causing " << _ATK << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " cant attack!" << std::endl;
	this->_STM = this->_STM - 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is guarding the gatez!" << std::endl;
}
